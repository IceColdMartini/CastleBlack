#pragma once
#pragma once
#ifndef trapezium_h
#define trapezium_h

#include <glad/glad.h>
#include <vector>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "shader.h"

class Trapezium
{
public:
    glm::vec3 ambient;
    glm::vec3 diffuse;
    glm::vec3 specular;
    float shininess;

    Trapezium(float topWidth = 1.0f, float bottomWidth = 2.0f, float height = 1.0f,
        glm::vec3 amb = glm::vec3(1.0f, 0.0f, 0.0f), glm::vec3 diff = glm::vec3(1.0f, 0.0f, 0.0f),
        glm::vec3 spec = glm::vec3(0.5f, 0.5f, 0.5f), float shiny = 32.0f) : verticesStride(24)
    {
        set(topWidth, bottomWidth, height, amb, diff, spec, shiny);
        glGenVertexArrays(1, &trapeziumVAO);
        glBindVertexArray(trapeziumVAO);

        unsigned int trapeziumVBO;
        glGenBuffers(1, &trapeziumVBO);
        glBindBuffer(GL_ARRAY_BUFFER, trapeziumVBO);
        glBufferData(GL_ARRAY_BUFFER, this->getVertexSize(), this->getVertices(), GL_STATIC_DRAW);

        unsigned int trapeziumEBO;
        glGenBuffers(1, &trapeziumEBO);
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, trapeziumEBO);
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

    ~Trapezium() {}

    void set(float topWidth, float bottomWidth, float height, glm::vec3 amb, glm::vec3 diff, glm::vec3 spec, float shiny)
    {
        if (topWidth > 0)
            this->topWidth = topWidth;
        if (bottomWidth > 0)
            this->bottomWidth = bottomWidth;
        if (height > 0)
            this->height = height;
        this->ambient = amb;
        this->diffuse = diff;
        this->specular = spec;
        this->shininess = shiny;

        // Rebuild the trapezium geometry when settings change
        buildCoordinatesAndIndices();
        buildVertices();
    }

    void setTopWidth(float topWidth)
    {
        if (topWidth != this->topWidth)
            set(topWidth, bottomWidth, height, ambient, diffuse, specular, shininess);
    }

    void setBottomWidth(float bottomWidth)
    {
        if (bottomWidth != this->bottomWidth)
            set(topWidth, bottomWidth, height, ambient, diffuse, specular, shininess);
    }

    void setHeight(float height)
    {
        if (height != this->height)
            set(topWidth, bottomWidth, height, ambient, diffuse, specular, shininess);
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

    void drawTrapezium(Shader& lightingShader, glm::mat4 model = glm::mat4(1.0f), float r = 1.0f, float g = 1.0f, float b = 1.0f) const
    {
        lightingShader.use();

        lightingShader.setVec3("material.ambient", glm::vec3(r, g, b));
        lightingShader.setVec3("material.diffuse", glm::vec3(r, g, b));
        lightingShader.setVec3("material.specular", glm::vec3(0.5f, 0.5f, 0.5f));
        lightingShader.setFloat("material.shininess", this->shininess);

        lightingShader.setMat4("model", model);

        glBindVertexArray(trapeziumVAO);
        glDrawElements(GL_TRIANGLES, this->getIndexCount(), GL_UNSIGNED_INT, (void*)0);

        glBindVertexArray(0);
    }


private:
    void buildCoordinatesAndIndices()
    {
        coordinates.clear();  // Clear previous data
        normals.clear();

        // Vertices for the trapezium
        // Top face vertices
        coordinates.push_back(-topWidth / 2.0f);
        coordinates.push_back(height / 2.0f);
        coordinates.push_back(0.0f);
        normals.push_back(0.0f);
        normals.push_back(1.0f);
        normals.push_back(0.0f);

        coordinates.push_back(topWidth / 2.0f);
        coordinates.push_back(height / 2.0f);
        coordinates.push_back(0.0f);
        normals.push_back(0.0f);
        normals.push_back(1.0f);
        normals.push_back(0.0f);

        // Bottom face vertices
        coordinates.push_back(-bottomWidth / 2.0f);
        coordinates.push_back(-height / 2.0f);
        coordinates.push_back(0.0f);
        normals.push_back(0.0f);
        normals.push_back(-1.0f);
        normals.push_back(0.0f);

        coordinates.push_back(bottomWidth / 2.0f);
        coordinates.push_back(-height / 2.0f);
        coordinates.push_back(0.0f);
        normals.push_back(0.0f);
        normals.push_back(-1.0f);
        normals.push_back(0.0f);

        // Create indices for the trapezium
        indices.clear();  // Clear previous data
        indices.push_back(0);
        indices.push_back(1);
        indices.push_back(3);

        indices.push_back(0);
        indices.push_back(3);
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
    unsigned int trapeziumVAO;
    float topWidth;
    float bottomWidth;
    float height;
    std::vector<float> vertices;
    std::vector<unsigned int> indices;
    std::vector<float> coordinates;  // Store trapezium vertex coordinates
    std::vector<float> normals;     // Store trapezium normals
    int verticesStride;
};

#endif /* trapezium_h */
