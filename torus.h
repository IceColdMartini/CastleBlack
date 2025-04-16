#pragma once
//
//  torus.h
//  test
//
//  Created by Nazirul Hasan on 26/9/23.
//

#ifndef torus_h
#define torus_h

#include <glad/glad.h>
#include <vector>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "shader.h"

# define PI 3.1416

using namespace std;

const int MIN_RING_COUNT = 3;
const int MIN_SIDE_COUNT = 2;

class Torus
{
public:
    glm::vec3 ambient;
    glm::vec3 diffuse;
    glm::vec3 specular;
    float shininess;

    // ctor/dtor
    Torus(float innerRadius = 0.5f, float outerRadius = 1.5f, int ringCount = 36, int sideCount = 18, glm::vec3 amb = glm::vec3(1.0f, 0.0f, 0.0f), glm::vec3 diff = glm::vec3(1.0f, 0.0f, 0.0f), glm::vec3 spec = glm::vec3(0.5f, 0.5f, 0.5f), float shiny = 32.0f) : verticesStride(24)
    {
        set(innerRadius, outerRadius, ringCount, sideCount, amb, diff, spec, shiny);
        buildCoordinatesAndIndices();
        buildVertices();

        glGenVertexArrays(1, &torusVAO);
        glBindVertexArray(torusVAO);

        // create VBO to copy vertex data to VBO
        unsigned int torusVBO;
        glGenBuffers(1, &torusVBO);
        glBindBuffer(GL_ARRAY_BUFFER, torusVBO);           // for vertex data
        glBufferData(GL_ARRAY_BUFFER,                   // target
            this->getVertexSize(), // data size, # of bytes
            this->getVertices(),   // ptr to vertex data
            GL_STATIC_DRAW);                   // usage

        // create EBO to copy index data
        unsigned int torusEBO;
        glGenBuffers(1, &torusEBO);
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, torusEBO);   // for index data
        glBufferData(GL_ELEMENT_ARRAY_BUFFER,           // target
            this->getIndexSize(),             // data size, # of bytes
            this->getIndices(),               // ptr to index data
            GL_STATIC_DRAW);                   // usage

        // activate attrib arrays
        glEnableVertexAttribArray(0);
        glEnableVertexAttribArray(1);
        glEnableVertexAttribArray(2);

        // set attrib arrays with stride and offset
        int stride = this->getVerticesStride();     // should be 24 bytes
        glVertexAttribPointer(0, 3, GL_FLOAT, false, stride, (void*)0);
        glVertexAttribPointer(1, 3, GL_FLOAT, false, stride, (void*)(sizeof(float) * 3));
        glVertexAttribPointer(2, 2, GL_FLOAT, false, stride, (void*)(sizeof(float) * 6));

        // unbind VAO and VBOs
        glBindVertexArray(0);
        glBindBuffer(GL_ARRAY_BUFFER, 0);
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
    }
    ~Torus() {}

    // getters/setters

    void set(float innerRadius, float outerRadius, int rings, int sides, glm::vec3 amb, glm::vec3 diff, glm::vec3 spec, float shiny)
    {
        if (innerRadius > 0)
            this->innerRadius = innerRadius;
        if (outerRadius > 0 && outerRadius > innerRadius)
            this->outerRadius = outerRadius;
        this->ringCount = rings;
        if (rings < MIN_RING_COUNT)
            this->ringCount = MIN_RING_COUNT;
        this->sideCount = sides;
        if (sides < MIN_SIDE_COUNT)
            this->sideCount = MIN_SIDE_COUNT;
        this->ambient = amb;
        this->diffuse = diff;
        this->specular = spec;
        this->shininess = shiny;
    }

    void setInnerRadius(float innerRadius)
    {
        if (innerRadius > 0)
            this->innerRadius = innerRadius;
    }

    void setOuterRadius(float outerRadius)
    {
        if (outerRadius > 0 && outerRadius > innerRadius)
            this->outerRadius = outerRadius;
    }

    void setRingCount(int rings)
    {
        if (rings != this->ringCount)
            set(innerRadius, outerRadius, rings, sideCount, ambient, diffuse, specular, shininess);
    }

    void setSideCount(int sides)
    {
        if (sides != this->sideCount)
            set(innerRadius, outerRadius, ringCount, sides, ambient, diffuse, specular, shininess);
    }

    // for interleaved vertices
    unsigned int getVertexCount() const
    {
        return (unsigned int)coordinates.size() / 3;     // # of vertices
    }

    unsigned int getVertexSize() const
    {
        return (unsigned int)vertices.size() * sizeof(float);  // # of bytes
    }

    int getVerticesStride() const
    {
        return verticesStride;   // should be 24 bytes
    }
    const float* getVertices() const
    {
        return vertices.data();
    }

    unsigned int getIndexSize() const
    {
        return (unsigned int)indices.size() * sizeof(unsigned int);
    }

    const unsigned int* getIndices() const
    {
        return indices.data();
    }

    unsigned int getIndexCount() const
    {
        return (unsigned int)indices.size();
    }

    // draw in VertexArray mode
    void drawTorus(Shader& lightingShader, glm::mat4 model = glm::mat4(1.0f), float r = 1.0f, float g = 1.0f, float b = 1.0f) const      // draw surface
    {
        lightingShader.use();

        lightingShader.setVec3("material.ambient", glm::vec3(r, g, b));
        lightingShader.setVec3("material.diffuse", glm::vec3(r, g, b));
        lightingShader.setVec3("material.specular", glm::vec3(0.5f, 0.5f, 0.5f));
        lightingShader.setFloat("material.shininess", this->shininess);

        lightingShader.setMat4("model", model);

        // draw a torus with VAO
        glBindVertexArray(torusVAO);
        glDrawElements(GL_TRIANGLES,                    // primitive type
            this->getIndexCount(),          // # of indices
            GL_UNSIGNED_INT,                 // data type
            (void*)0);                       // offset to indices

        // unbind VAO
        glBindVertexArray(0);
    }

    void drawTorusWithTexture(Shader& shader, glm::mat4 model) {
        shader.use();
        shader.setMat4("model", model);
        shader.setBool("drawWithTexture", true);

        glBindVertexArray(torusVAO);
        glDrawElements(GL_TRIANGLES, this->getIndexCount(), GL_UNSIGNED_INT, 0);
    }

private:
    // member functions
    void buildCoordinatesAndIndices()
    {
        float x, y, z;                              // vertex position
        float nx, ny, nz, lengthInv = 1.0f / outerRadius;    // vertex normal

        float ringStep = 2 * PI / ringCount;
        float sideStep = 2 * PI / sideCount;
        float ringAngle = 0.0f;
        float sideAngle = 0.0f;

        for (int i = 0; i <= ringCount; ++i)
        {
            ringAngle = i * ringStep;

            for (int j = 0; j <= sideCount; ++j)
            {
                sideAngle = j * sideStep;

                // vertex position (x, y, z)
                x = (outerRadius + innerRadius * cosf(sideAngle)) * cosf(ringAngle);
                y = innerRadius * sinf(sideAngle);
                z = (outerRadius + innerRadius * cosf(sideAngle)) * sinf(ringAngle);
                coordinates.push_back(x);
                coordinates.push_back(y);
                coordinates.push_back(z);

                // normalized vertex normal (nx, ny, nz)
                nx = cosf(ringAngle) * cosf(sideAngle);
                ny = sinf(sideAngle);
                nz = sinf(ringAngle) * cosf(sideAngle);
                normals.push_back(nx);
                normals.push_back(ny);
                normals.push_back(nz);
            }
        }

        // generate index list of torus triangles
        // k1--k1+1
        // |  / |
        // | /  |
        // k2--k2+1

        int k1, k2;
        for (int i = 0; i < ringCount; ++i)
        {
            k1 = i * (sideCount + 1);     // beginning of current ring
            k2 = k1 + sideCount + 1;      // beginning of next ring

            for (int j = 0; j < sideCount; ++j, ++k1, ++k2)
            {
                // 2 triangles per side excluding first and last rings
                if (i != 0 && i != ringCount - 1)
                {
                    // k1 => k2 => k1+1
                    indices.push_back(k1);
                    indices.push_back(k2);
                    indices.push_back(k1 + 1);

                    // k1+1 => k2 => k2+1
                    indices.push_back(k1 + 1);
                    indices.push_back(k2);
                    indices.push_back(k2 + 1);
                }
                // 2 triangles per side excluding first and last rings
                else if (i == 0)
                {
                    indices.push_back(k1 + 1);
                    indices.push_back(k2);
                    indices.push_back(k2 + 1);
                }

                else if (i == ringCount - 1)
                {
                    indices.push_back(k1);
                    indices.push_back(k2);
                    indices.push_back(k1 + 1);
                }
            }
        }
    }

    void buildVertices()
    {
        size_t i, j;
        size_t count = coordinates.size();
        for (i = 0, j = 0; i < count; i += 3, j += 2)
        {
            vertices.push_back(coordinates[i]);
            vertices.push_back(coordinates[i + 1]);
            vertices.push_back(coordinates[i + 2]);

            vertices.push_back(normals[i]);
            vertices.push_back(normals[i + 1]);
            vertices.push_back(normals[i + 2]);
        }
    }

    // member vars
    unsigned int torusVAO;
    float innerRadius;
    float outerRadius;
    int ringCount;                         // # of rings
    int sideCount;                         // # of sides per ring
    vector<float> vertices;
    vector<float> normals;
    vector<unsigned int> indices;
    vector<float> coordinates;
    int verticesStride;                 // # of bytes to hop to the next vertex (should be 24 bytes)

};

#endif /* torus_h */
