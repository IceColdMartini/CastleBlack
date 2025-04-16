#ifndef CURVE_H
#define CURVE_H

#include <glad/glad.h>
#include <vector>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "shader.h"

#define PII 3.1416

using namespace std;

class BezierCurve {
public:
    vector<float> coordinates;
    vector<float> normals;
    vector<float> vertices;
    vector<int> indices;
    vector<float> texCoords;
    unsigned int sphereVAO;
    int ntheta = 20; // Number of segments around
    int nt = 20;     // Number of segments up
    float pi = PII;   // PI value

    glm::vec4 ambient;
    glm::vec4 diffuse;
    glm::vec4 specular;
    float shininess;

    unsigned int diffuseMap;
    unsigned int specularMap;

    // Constructor for medieval tower style curve with textures
    BezierCurve(GLfloat controlPoints[], int size, unsigned int dMap, unsigned int sMap, float shiny = 32.0f) {
        for (int i = 0; i < size; i++) {
            this->cntrlPoints.push_back(controlPoints[i]);
        }
        this->diffuseMap = dMap;
        this->specularMap = sMap;
        this->shininess = shiny;
        this->sphereVAO = hollowBezier(cntrlPoints.data(), ((unsigned int)cntrlPoints.size() / 3) - 1);
    }

    void drawBezierCurveWithTexture(Shader& lightingShader, glm::mat4 model) const {
        lightingShader.use();
        lightingShader.setMat4("model", model);

        // Set material properties
        lightingShader.setFloat("material.shininess", shininess);

        // Set texture units
        lightingShader.setInt("material.diffuseMap", 0);
        lightingShader.setInt("material.specularMap", 1);

        // Bind textures
        glActiveTexture(GL_TEXTURE0);
        glBindTexture(GL_TEXTURE_2D, diffuseMap);
        glActiveTexture(GL_TEXTURE1);
        glBindTexture(GL_TEXTURE_2D, specularMap);

        // Draw the surface
        glBindVertexArray(sphereVAO);
        glDrawElements(GL_TRIANGLES, (unsigned int)indices.size(), GL_UNSIGNED_INT, (void*)0);
        glBindVertexArray(0);

        // Reset texture units
        glActiveTexture(GL_TEXTURE0);
    }

private:
    vector<float> cntrlPoints;

    long long nCr(int n, int r) {
        if (r > n / 2) r = n - r;
        long long ans = 1;
        for (int i = 1; i <= r; i++) {
            ans *= n - r + i;
            ans /= i;
        }
        return ans;
    }

    void BezierCurveFN(double t, float xy[2], GLfloat ctrlpoints[], int L) {
        double y = 0;
        double x = 0;
        t = t > 1.0 ? 1.0 : t;
        for (int i = 0; i < L + 1; i++) {
            long long ncr = nCr(L, i);
            double oneMinusTpow = pow(1 - t, double(L - i));
            double tPow = pow(t, double(i));
            double coef = oneMinusTpow * tPow * ncr;
            x += coef * ctrlpoints[i * 3];
            y += coef * ctrlpoints[(i * 3) + 1];
        }
        xy[0] = float(x);
        xy[1] = float(y);
    }

    unsigned int hollowBezier(GLfloat ctrlpoints[], int L) {
        unsigned int vao;
        glGenVertexArrays(1, &vao);
        glBindVertexArray(vao);

        float t = 0;
        float dt = 1.0 / nt;

        // Generate vertices with proper texture coordinates
        for (int i = 0; i <= nt; ++i) {
            float xy[2];
            BezierCurveFN(t, xy, ctrlpoints, L);
            float r = xy[0];
            float y = xy[1];

            for (int j = 0; j <= ntheta; ++j) {
                float theta = j * 2 * pi / ntheta;
                float x = r * cos(theta);
                float z = r * sin(theta);

                // Position
                coordinates.push_back(x);
                coordinates.push_back(y);
                coordinates.push_back(z);

                // Normal
                float nx = x / r;
                float ny = 0;
                float nz = z / r;
                normals.push_back(nx);
                normals.push_back(ny);
                normals.push_back(nz);

                // Texture coordinates - map cylindrically
                float u = static_cast<float>(j) / ntheta;  // Around the tower
                float v = y;  // Up the tower
                texCoords.push_back(u);
                texCoords.push_back(v);
            }
            t += dt;
        }

        // Generate indices
        for (int i = 0; i < nt; ++i) {
            for (int j = 0; j < ntheta; ++j) {
                int k1 = i * (ntheta + 1) + j;
                int k2 = k1 + ntheta + 1;

                indices.push_back(k1);
                indices.push_back(k2);
                indices.push_back(k1 + 1);

                indices.push_back(k1 + 1);
                indices.push_back(k2);
                indices.push_back(k2 + 1);
            }
        }

        // Combine position, normal, and texture coordinates
        for (size_t i = 0; i < coordinates.size(); i += 3) {
            vertices.push_back(coordinates[i]);
            vertices.push_back(coordinates[i + 1]);
            vertices.push_back(coordinates[i + 2]);

            vertices.push_back(normals[i]);
            vertices.push_back(normals[i + 1]);
            vertices.push_back(normals[i + 2]);

            size_t texIndex = (i / 3) * 2;
            vertices.push_back(texCoords[texIndex]);
            vertices.push_back(texCoords[texIndex + 1]);
        }

        unsigned int vbo;
        glGenBuffers(1, &vbo);
        glBindBuffer(GL_ARRAY_BUFFER, vbo);
        glBufferData(GL_ARRAY_BUFFER, vertices.size() * sizeof(float), vertices.data(), GL_STATIC_DRAW);

        unsigned int ebo;
        glGenBuffers(1, &ebo);
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ebo);
        glBufferData(GL_ELEMENT_ARRAY_BUFFER, indices.size() * sizeof(int), indices.data(), GL_STATIC_DRAW);

        // Position attribute
        glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void*)0);
        glEnableVertexAttribArray(0);

        // Normal attribute
        glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void*)(3 * sizeof(float)));
        glEnableVertexAttribArray(1);

        // Texture coordinate attribute
        glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void*)(6 * sizeof(float)));
        glEnableVertexAttribArray(2);

        return vao;
    }
};

#endif 