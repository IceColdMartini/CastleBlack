#pragma once
#pragma once
#ifndef triangle_h
#define triangle_h

#include <glad/glad.h>
#include <vector>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "shader.h"

class Triangle
{
public:
    glm::vec3 ambient;
    glm::vec3 diffuse;
    glm::vec3 specular;
    float shininess;

    Triangle(float base = 1.0f, float height = 1.0f,
        glm::vec3 amb = glm::vec3(1.0f, 0.0f, 0.0f), glm::vec3 diff = glm::vec3(1.0f, 0.0f, 0.0f),
        glm::vec3 spec = glm::vec3(0.5f, 0.5f, 0.5f), float shiny = 32.0f) : verticesStride(24)
    {
        set(base, height, amb, diff, spec, shiny);
        glGenVertexArrays(1, &triangleVAO);
        glBindVertexArray(triangleVAO);

        unsigned int triangleVBO;
        glGenBuffers(1, &triangleVBO);
        glBindBuffer(GL_ARRAY_BUFFER, triangleVBO);
        glBufferData(GL_ARRAY_BUFFER, this->getVertexSize(), this->getVertices(), GL_STATIC_DRAW);

        unsigned int triangleEBO;
        glGenBuffers(1, &triangleEBO);
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, triangleEBO);
        glBufferData(GL_ELEMENT_ARRAY_BUFFER, this->getIndexSize(), this->getIndices(), GL_STATIC_DRAW);

        glEnableVertexAttribArray(0);
        glEnableVertexAttribArray(1);

        int stride = this->getVerticesStride();
        glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, stride, (void*)0);
        glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, stride, (void*)(sizeof(float) * 3));

        glBindVertexArray(0);
        glBindBuffer(GL_ARRAY_BUFFER, 0);
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
    }

    ~Triangle() {}

    void set(float base, float height, glm::vec3 amb, glm::vec3 diff, glm::vec3 spec, float shiny)
    {
        if (base > 0)
            this->base = base;
        if (height > 0)
            this->height = height;
        this->ambient = amb;
        this->diffuse = diff;
        this->specular = spec;
        this->shininess = shiny;

        // Rebuild the triangle geometry when settings change
        buildCoordinatesAndIndices();
        buildVertices();
    }

    void setBase(float base)
    {
        if (base != this->base)
            set(base, height, ambient, diffuse, specular, shininess);
    }

    void setHeight(float height)
    {
        if (height != this->height)
            set(base, height, ambient, diffuse, specular, shininess);
    }

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

    void drawTriangle(Shader& lightingShader, glm::mat4 model = glm::mat4(1.0f), float r = 1.0f, float g = 1.0f, float b = 1.0f) const
    {
        lightingShader.use();

        lightingShader.setVec3("material.ambient", glm::vec3(r, g, b));
        lightingShader.setVec3("material.diffuse", glm::vec3(r, g, b));
        lightingShader.setVec3("material.specular", glm::vec3(0.5f, 0.5f, 0.5f));
        lightingShader.setFloat("material.shininess", this->shininess);

        lightingShader.setMat4("model", model);

        glBindVertexArray(triangleVAO);
        glDrawElements(GL_TRIANGLES, this->getIndexCount(), GL_UNSIGNED_INT, (void*)0);

        glBindVertexArray(0);
    }


private:
    void buildCoordinatesAndIndices()
    {
        coordinates.clear();  // Clear previous data
        normals.clear();

        // Vertices for the triangle
        // Bottom-left vertex
        coordinates.push_back(-base / 2.0f);
        coordinates.push_back(-height / 2.0f);
        coordinates.push_back(0.0f);
        normals.push_back(0.0f);
        normals.push_back(0.0f);
        normals.push_back(1.0f);

        // Bottom-right vertex
        coordinates.push_back(base / 2.0f);
        coordinates.push_back(-height / 2.0f);
        coordinates.push_back(0.0f);
        normals.push_back(0.0f);
        normals.push_back(0.0f);
        normals.push_back(1.0f);

        // Top vertex
        coordinates.push_back(0.0f);
        coordinates.push_back(height / 2.0f);
        coordinates.push_back(0.0f);
        normals.push_back(0.0f);
        normals.push_back(0.0f);
        normals.push_back(1.0f);

        // Create indices for the triangle
        indices.clear();  // Clear previous data
        indices.push_back(0);
        indices.push_back(1);
        indices.push_back(2);
    }

    void buildVertices()
    {
        size_t numVertices = coordinates.size();
        vertices.clear();  // Clear previous data

        for (size_t i = 0; i < numVertices; i += 3)
        {
            vertices.push_back(coordinates[i]);
            vertices.push_back(coordinates[i + 1]);
            vertices.push_back(coordinates[i + 2]);

            vertices.push_back(normals[i]);
            vertices.push_back(normals[i + 1]);
            vertices.push_back(normals[i + 2]);
        }
    }

    // Member variables
    unsigned int triangleVAO;
    float base;
    float height;
    std::vector<float> vertices;
    std::vector<unsigned int> indices;
    std::vector<float> coordinates;  // Store triangle vertex coordinates
    std::vector<float> normals;     // Store triangle normals
    int verticesStride;
};

#endif /* triangle_h */
