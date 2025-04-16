#pragma once
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "shader.h"
#include "drawcube.h"
#include "cube.h"

void sofa(Cube& cube, Shader& lightingShader, glm::mat4 als, float colorArray[], unsigned int sofa1, unsigned int sofa2)
{
    glm::mat4 identityMatrix = glm::mat4(1.0f); // make sure to initialize matrix to identity matrix first
    glm::mat4 translateMatrix, rotateXMatrix, rotateYMatrix, rotateZMatrix, scaleMatrix, model;


    //Sofa Seat

    translateMatrix = glm::translate(identityMatrix, glm::vec3(-15.5, .9 + 0.15, -15.0f));
    rotateXMatrix = glm::rotate(identityMatrix, glm::radians(-23.0f), glm::vec3(0.0f, 1.0f, 0.0f));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.2f, .5f, 2.1f));
    model = als * translateMatrix * rotateXMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 1.0f, 0.0f, 0.0f);
    cube.setTextureProperty(sofa1, sofa2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(-15.5, 0.8 + 0.15, -15.0f));
    rotateXMatrix = glm::rotate(identityMatrix, glm::radians(-23.0f), glm::vec3(0.0f, 1.0f, 0.0f));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.2f, .5f, 2.1f));
    model = als * translateMatrix * rotateXMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setTextureProperty(sofa1, sofa2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(-15.5, 0.4f, -15.0f));
    rotateXMatrix = glm::rotate(identityMatrix, glm::radians(-23.0f), glm::vec3(0.0f, 1.0f, 0.0f));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.2f, .9f, 2.1f));
    model = als * translateMatrix * rotateXMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 1.0f, 0.0f, 0.0f);
    cube.setTextureProperty(sofa1, sofa2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);


    //sofa back
    translateMatrix = glm::translate(identityMatrix, glm::vec3(-15.5, 0.4f, -15.0f));
    rotateXMatrix = glm::rotate(identityMatrix, glm::radians(-23.0f), glm::vec3(0.0f, 1.0f, 0.0f));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.6f, 3.1f, 2.7f));
    model = als * translateMatrix * rotateXMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 1.0f, 0.0f, 0.0f);
    cube.setTextureProperty(sofa1, sofa2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);




    //sofa side right
    translateMatrix = glm::translate(identityMatrix, glm::vec3(-15.1, -2.9f, -15.8f));
    rotateXMatrix = glm::rotate(identityMatrix, glm::radians(-23.0f), glm::vec3(0.0f, 1.0f, 0.0f));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.2f, 4.9f, 0.7f));
    model = als * translateMatrix * rotateXMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 1.0f, 0.0f, 0.0f);
    cube.setTextureProperty(sofa1, sofa2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);


    //sofa left right
    translateMatrix = glm::translate(identityMatrix, glm::vec3(-16.1, -2.9f, -12.80f));
    rotateXMatrix = glm::rotate(identityMatrix, glm::radians(-23.0f), glm::vec3(0.0f, 1.0f, 0.0f));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.2f, 4.9f, 0.7f));
    model = als * translateMatrix * rotateXMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 1.0f, 0.0f, 0.0f);
    cube.setTextureProperty(sofa1, sofa2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);




    //arektaaaaaaaaaaaaa sofaaaaaaaaaaaaaa

        //Sofa Seat

    translateMatrix = glm::translate(identityMatrix, glm::vec3(-4.9, .9 + 0.15, -13.2f));
    //rotateXMatrix = glm::rotate(identityMatrix, glm::radians(-23.0f), glm::vec3(0.0f, 1.0f, 0.0f));
    rotateXMatrix = glm::rotate(identityMatrix, glm::radians(-180.0f), glm::vec3(0.0f, 1.0f, 0.0f));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.2f, .5f, 2.5f));
    model = als * translateMatrix * rotateXMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 1.0f, 0.0f, 0.0f);
    cube.setTextureProperty(sofa1, sofa2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(-4.9, 0.8 + 0.15, -13.2f));
    //rotateXMatrix = glm::rotate(identityMatrix, glm::radians(-23.0f), glm::vec3(0.0f, 1.0f, 0.0f));
    rotateXMatrix = glm::rotate(identityMatrix, glm::radians(-180.0f), glm::vec3(0.0f, 1.0f, 0.0f));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.2f, .5f, 2.5f));
    model = als * translateMatrix * rotateXMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setTextureProperty(sofa1, sofa2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(-4.9, 0.4f, -13.2f));
    //rotateXMatrix = glm::rotate(identityMatrix, glm::radians(-23.0f), glm::vec3(0.0f, 1.0f, 0.0f));
    rotateXMatrix = glm::rotate(identityMatrix, glm::radians(-180.0f), glm::vec3(0.0f, 1.0f, 0.0f));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.2f, .9f, 2.5f));
    model = als * translateMatrix * rotateXMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 1.0f, 0.0f, 0.0f);
    cube.setTextureProperty(sofa1, sofa2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);


    //sofa back
    translateMatrix = glm::translate(identityMatrix, glm::vec3(-4.8, 0.4f, -13.1f));
    //rotateXMatrix = glm::rotate(identityMatrix, glm::radians(-23.0f), glm::vec3(0.0f, 1.0f, 0.0f));
    rotateXMatrix = glm::rotate(identityMatrix, glm::radians(-180.0f), glm::vec3(0.0f, 1.0f, 0.0f));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.6f, 3.1f, 2.7f));
    model = als * translateMatrix * rotateXMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 1.0f, 0.0f, 0.0f);
    cube.setTextureProperty(sofa1, sofa2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);



    //sofa side right
    translateMatrix = glm::translate(identityMatrix, glm::vec3(-5.1, -2.9f, -15.7f));
    // rotateXMatrix = glm::rotate(identityMatrix, glm::radians(-23.0f), glm::vec3(0.0f, 1.0f, 0.0f));
    rotateXMatrix = glm::rotate(identityMatrix, glm::radians(-180.0f), glm::vec3(0.0f, 1.0f, 0.0f));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.2f, 4.9f, 0.7f));
    model = als * translateMatrix * rotateXMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 1.0f, 0.0f, 0.0f);
    cube.setTextureProperty(sofa1, sofa2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);


    //sofa left right
    translateMatrix = glm::translate(identityMatrix, glm::vec3(-5.1, -2.9f, -12.70f));
    //rotateXMatrix = glm::rotate(identityMatrix, glm::radians(-23.0f), glm::vec3(0.0f, 1.0f, 0.0f));
    rotateXMatrix = glm::rotate(identityMatrix, glm::radians(-180.0f), glm::vec3(0.0f, 1.0f, 0.0f));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.2f, 4.9f, 0.7f));
    model = als * translateMatrix * rotateXMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 1.0f, 0.0f, 0.0f);
    cube.setTextureProperty(sofa1, sofa2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);

}

void BLuesofa(unsigned int& cubeVAO, Shader& lightingShader, glm::mat4 als)
{
    glm::mat4 identityMatrix = glm::mat4(1.0f); // make sure to initialize matrix to identity matrix first
    glm::mat4 translateMatrix, rotateXMatrix, rotateYMatrix, rotateZMatrix, scaleMatrix, model;


    //Sofa Seat
    translateMatrix = glm::translate(identityMatrix, glm::vec3(-22.5, 0.1 + 0.15, 0.875));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.0f, 1.125f, 1.55f));
    model = als * translateMatrix * scaleMatrix;
    drawCube(cubeVAO, lightingShader, model, 0.0, 0.6f, 0.125f);

    //Sofa Head
    translateMatrix = glm::translate(identityMatrix, glm::vec3(0.05, 0.1 + 0.5 * 0.2, 0.8));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.0f, .5f, 0.1f));
    model = als * translateMatrix * scaleMatrix;
    drawCube(cubeVAO, lightingShader, model, 0.0, 0.6f, 0.125f);

    //frame
    translateMatrix = glm::translate(identityMatrix, glm::vec3(0.05 - 0.1, 0.1, 0.72));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.15f, .25f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    drawCube(cubeVAO, lightingShader, model, 0.05, 0.1f, 0.125f);

    //Sofa leg1
    translateMatrix = glm::translate(identityMatrix, glm::vec3(0.05, 0.1 + 0.5 * 0.2, 0.8));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.025f, -.5f, 0.05f));
    model = als * translateMatrix * scaleMatrix;
    drawCube(cubeVAO, lightingShader, model, 0.05, 0.1f, 0.125f);

    //Sofa leg3
    translateMatrix = glm::translate(identityMatrix, glm::vec3(0.05, 0.1 + 0.5 * 0.2, 0.8 + 0.5 - 0.05));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.025f, -.5f, 0.05f));
    model = als * translateMatrix * scaleMatrix;
    drawCube(cubeVAO, lightingShader, model, 0.05, 0.1f, 0.125f);

    //Sofa leg2
    translateMatrix = glm::translate(identityMatrix, glm::vec3(1.05 - 0.25, 0.1 + 0.5 * 0.2, 0.8));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.025f, -.5f, 0.05f));
    model = als * translateMatrix * scaleMatrix;
    drawCube(cubeVAO, lightingShader, model, 0.05, 0.1f, 0.125f);

    //Sofa leg4
    translateMatrix = glm::translate(identityMatrix, glm::vec3(1.05 - 0.025, 0.1 + 0.5 * 0.2, 0.8 + 0.5 - 0.05));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.025f, -.5f, 0.05f));
    model = als * translateMatrix * scaleMatrix;
    drawCube(cubeVAO, lightingShader, model, 0.05, 0.1f, 0.125f);

    //handle1
    translateMatrix = glm::translate(identityMatrix, glm::vec3(0.05 - 0.1, 0.1, 0.72));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.125f, .3f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    drawCube(cubeVAO, lightingShader, model, 0.05, 0.1f, 0.125f);

    //handle2
    translateMatrix = glm::translate(identityMatrix, glm::vec3(1.1 + 0.025, 0.1, 0.72));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(-.125f, .3f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    drawCube(cubeVAO, lightingShader, model, 0.05, 0.1f, 0.125f);
}
#pragma once