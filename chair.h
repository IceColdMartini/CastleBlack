#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "shader.h"
#include "drawcube.h"
#include "cube.h"

void chair(Cube& cube, Shader& lightingShader, glm::mat4 als, float colorArray[], unsigned int chair1, unsigned int chair2)
{
    glm::mat4 identityMatrix = glm::mat4(1.0f); // make sure to initialize matrix to identity matrix first
    glm::mat4 translateMatrix, rotateXMatrix, rotateYMatrix, rotateZMatrix, scaleMatrix, model;

    //Sofa Seat
    translateMatrix = glm::translate(identityMatrix, glm::vec3(0.05, 0.9, -0.9));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.0f, 0.5f, 2.0f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
    cube.setTextureProperty(chair1, chair2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);

    //Sofa Head
    translateMatrix = glm::translate(identityMatrix, glm::vec3(0.05, 0.9 + 0.5 * 0.2, -0.9));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.0f, 2.0f, 0.05f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
    cube.setTextureProperty(chair1, chair2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);

    //Sofa leg1
    translateMatrix = glm::translate(identityMatrix, glm::vec3(0.05, 0.9 + 0.5 * 0.2, -0.9));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.045f, -4.5f, 0.35f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
    cube.setTextureProperty(chair1, chair2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);

    //Sofa leg3
    translateMatrix = glm::translate(identityMatrix, glm::vec3(0.05, 0.9 + 0.5 * 0.2, -0.9 + 1.6 - 0.05));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.045f, -4.5f, 0.35f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
    cube.setTextureProperty(chair1, chair2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);

    //Sofa leg2
    translateMatrix = glm::translate(identityMatrix, glm::vec3(1.9 - 0.025, 0.9 + 0.5 * 0.2, -0.9));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.045f, -4.5f, 0.35f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
    cube.setTextureProperty(chair1, chair2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);

    //Sofa leg4
    translateMatrix = glm::translate(identityMatrix, glm::vec3(1.9 - 0.025, 0.9 + 0.5 * 0.2, -0.9 + 1.6 - 0.05));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.045f, -4.5f, 0.35f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
    cube.setTextureProperty(chair1, chair2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);



}






/*void broom(unsigned int& cubeVAO, Shader& lightingShader, glm::mat4 als)
{
    // Draw broom handle
    glm::mat4 identityMatrix = glm::mat4(1.0f); // make sure to initialize matrix to identity matrix first
    glm::mat4 translateMatrix, rotateXMatrix, rotateYMatrix, rotateZMatrix, scaleMatrix, model;

    translateMatrix = glm::translate(identityMatrix, glm::vec3(0.0f, -0.5f, 0.0f));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.05f, 1.5f, 0.05f));
    model = als * translateMatrix * scaleMatrix;
    drawCube(cubeVAO, lightingShader, model, 0.53867, 0.1f, 0.67865f);





    // Draw broom bristles (top part)
    for (float yOffset = 1.5f; yOffset <= 1.7f; yOffset += 0.1f) {
        translateMatrix = glm::translate(identityMatrix, glm::vec3(0.0f, yOffset, 0.0f));
        scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.2f, 0.05f, 0.2f));
        model = als * translateMatrix * scaleMatrix;
        drawCube(cubeVAO, lightingShader, model, 0.53867, 0.1f, 0.67865f);


}*/
#pragma once