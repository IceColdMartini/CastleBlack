#pragma once
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "shader.h"
#include "drawcube.h"
#include "cylinder.h"
#include "halfs.h"
#include "traizoid.h"
#include "triangle.h"
#include "cube.h"


void dining(Cube& cube, Shader& lightingShader, glm::mat4 als, float colorArray[], unsigned int table1, unsigned int table2, unsigned int tt1, unsigned int tt2, unsigned int seat1, unsigned int seat2, unsigned int sofa1, unsigned int sofa2, unsigned int glass1, unsigned int glass2, unsigned int fr1, unsigned int fr2, unsigned int twindow1, unsigned int twindow2)
{


    glm::mat4 identityMatrix = glm::mat4(1.0f); // make sure to initialize matrix to identity matrix first
    glm::mat4 translateMatrix, rotateXMatrix, rotateYMatrix, rotateZMatrix, scaleMatrix, model;

    //table top
    translateMatrix = glm::translate(identityMatrix, glm::vec3(9.0, .9 + 0.15, -12.00));
    //rotateXMatrix = glm::rotate(identityMatrix, glm::radians(90.0f), glm::vec3(1.0f, 0.0f, 0.0f));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(30.0f, .30f, 3.0f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.3686f, 0.1490f, 0.0196f);
    cube.setTextureProperty(table1, table2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);

    //table left leg
    translateMatrix = glm::translate(identityMatrix, glm::vec3(9.0, -.5 + 0.15, -12.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.5f, 1.3f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.3686f, 0.1490f, 0.0196f);
    cube.setMaterialisticEimu(0.392f, 0.196f, 0.039f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    //table right leg
    translateMatrix = glm::translate(identityMatrix, glm::vec3(38.6, -.5 + 0.15, -12.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.5f, 1.3f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.3686f, 0.1490f, 0.0196f);
    cube.setMaterialisticEimu(0.392f, 0.196f, 0.039f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);


    //table top
    translateMatrix = glm::translate(identityMatrix, glm::vec3(8.4, 1.3 + 0.15, -16.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(33.0f, .30f, 3.0f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0941f, 0.0471f, 0.0196f);
    cube.setTextureProperty(table1, table2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);




    //table right leg
    translateMatrix = glm::translate(identityMatrix, glm::vec3(39.6, -.5 + 0.15, -16.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.5f, 1.7f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.3686f, 0.1490f, 0.0196f);
    cube.setMaterialisticEimu(0.392f, 0.196f, 0.039f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    //table left leg
    translateMatrix = glm::translate(identityMatrix, glm::vec3(8.5, -.5 + 0.15, -16.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.5f, 1.7f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.3686f, 0.1490f, 0.0196f);
    cube.setMaterialisticEimu(0.392f, 0.196f, 0.039f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);


    //table er niche left
    translateMatrix = glm::translate(identityMatrix, glm::vec3(8.4, -0.7 + 0.15, -16.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.0f, .7f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0, 0);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    //table er niche right
    translateMatrix = glm::translate(identityMatrix, glm::vec3(39.4, -0.7 + 0.15, -16.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.0f, .7f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0, 0);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);




    //arekta chairrrrrrrrrrrrr
    //table top
    translateMatrix = glm::translate(identityMatrix, glm::vec3(9.2, .9 + 0.15, -20.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(30.0f, .30f, 3.0f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.3686f, 0.1490f, 0.0196f);
    cube.setTextureProperty(table1, table2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);

    //table left leg
    translateMatrix = glm::translate(identityMatrix, glm::vec3(9.0, -.5 + 0.15, -20.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.5f, 1.3f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.3686f, 0.1490f, 0.0196f);
    cube.setMaterialisticEimu(0.3686f, 0.1490f, 0.0196f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);


    //table right leg
    translateMatrix = glm::translate(identityMatrix, glm::vec3(38.6, -.5 + 0.15, -20.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.5f, 1.3f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    // drawCube(cubeVAO, lightingShader, model, 0.3686f, 0.1490f, 0.0196f);
    cube.setMaterialisticEimu(0.3686f, 0.1490f, 0.0196f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);













    //arekta diningggggggggggggggg


    //table top
    translateMatrix = glm::translate(identityMatrix, glm::vec3(9.0, .9 + 0.15, -1.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(30.0f, .30f, 3.0f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.3686f, 0.1490f, 0.0196f);
    cube.setTextureProperty(table1, table2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);

    //table left leg
    translateMatrix = glm::translate(identityMatrix, glm::vec3(9.0, -.5 + 0.15, -1.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.5f, 1.3f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.3686f, 0.1490f, 0.0196f);
    cube.setMaterialisticEimu(0.3686f, 0.1490f, 0.0196f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);


    //table right leg
    translateMatrix = glm::translate(identityMatrix, glm::vec3(38.6, -.5 + 0.15, -1.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.5f, 1.3f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.3686f, 0.1490f, 0.0196f);
    cube.setMaterialisticEimu(0.3686f, 0.1490f, 0.0196f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);



    //table top
    translateMatrix = glm::translate(identityMatrix, glm::vec3(8.4, 1.3 + 0.15, -5.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(33.0f, .30f, 3.0f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0941f, 0.0471f, 0.0196f);
    cube.setTextureProperty(table1, table2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);

    //table right leg
    translateMatrix = glm::translate(identityMatrix, glm::vec3(39.6, -.5 + 0.15, -5.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.5f, 1.7f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.3686f, 0.1490f, 0.0196f);
    cube.setMaterialisticEimu(0.3686f, 0.1490f, 0.0196f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    //table left leg
    translateMatrix = glm::translate(identityMatrix, glm::vec3(8.5, -.5 + 0.15, -5.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.5f, 1.7f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.3686f, 0.1490f, 0.0196f);
    cube.setMaterialisticEimu(0.3686f, 0.1490f, 0.0196f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);


    //table er niche left
    translateMatrix = glm::translate(identityMatrix, glm::vec3(8.4, -0.7 + 0.15, -5.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.0f, .7f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0, 0);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    //table er niche right
    translateMatrix = glm::translate(identityMatrix, glm::vec3(39.4, -0.7 + 0.15, -5.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.0f, .7f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0, 0);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);




    //arekta chairrrrrrrrrrrrr
    //table top
    translateMatrix = glm::translate(identityMatrix, glm::vec3(9.0, .9 + 0.15, -8.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(30.0f, .30f, 3.0f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.3686f, 0.1490f, 0.0196f);
    cube.setTextureProperty(table1, table2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);

    //table left leg
    translateMatrix = glm::translate(identityMatrix, glm::vec3(9.0, -.5 + 0.15, -8.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.5f, 1.3f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.3686f, 0.1490f, 0.0196f);
    cube.setMaterialisticEimu(0.3686f, 0.1490f, 0.0196f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    //table right leg
    translateMatrix = glm::translate(identityMatrix, glm::vec3(38.6, -.5 + 0.15, -8.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.5f, 1.3f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.3686f, 0.1490f, 0.0196f);
    cube.setMaterialisticEimu(0.3686f, 0.1490f, 0.0196f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);








    /////arekta diningggggggggggggggggggg
           //table top
    translateMatrix = glm::translate(identityMatrix, glm::vec3(9.0, .9 + 0.15, 10.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(30.0f, .30f, 2.0f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.3686f, 0.1490f, 0.0196f);
    cube.setTextureProperty(table1, table2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);

    //table left leg
    translateMatrix = glm::translate(identityMatrix, glm::vec3(9.0, -.5 + 0.15, 10.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.5f, 1.3f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.3686f, 0.1490f, 0.0196f);
    cube.setMaterialisticEimu(0.3686f, 0.1490f, 0.0196f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    //table right leg
    translateMatrix = glm::translate(identityMatrix, glm::vec3(38.6, -.5 + 0.15, 10.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.5f, 1.3f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.3686f, 0.1490f, 0.0196f);
    cube.setMaterialisticEimu(0.3686f, 0.1490f, 0.0196f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);


    //table top
    translateMatrix = glm::translate(identityMatrix, glm::vec3(8.4, 1.3 + 0.15, 6.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(33.0f, .30f, 2.0f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0941f, 0.0471f, 0.0196f);
    cube.setTextureProperty(table1, table2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);

    //table right leg
    translateMatrix = glm::translate(identityMatrix, glm::vec3(39.6, -.5 + 0.15, 6.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.5f, 1.7f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.3686f, 0.1490f, 0.0196f);
    cube.setMaterialisticEimu(0.3686f, 0.1490f, 0.0196f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    //table left leg
    translateMatrix = glm::translate(identityMatrix, glm::vec3(8.5, -.5 + 0.15, 6.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.5f, 1.7f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.3686f, 0.1490f, 0.0196f);
    cube.setMaterialisticEimu(0.3686f, 0.1490f, 0.0196f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);


    //table er niche left
    translateMatrix = glm::translate(identityMatrix, glm::vec3(8.4, -0.7 + 0.15, 6.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.0f, .7f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0, 0);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    //table er niche right
    translateMatrix = glm::translate(identityMatrix, glm::vec3(39.4, -0.7 + 0.15, 6.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.0f, .7f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0, 0);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);




    //arekta chairrrrrrrrrrrrr
    //table top
    translateMatrix = glm::translate(identityMatrix, glm::vec3(9.0, .9 + 0.15, 3.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(30.0f, .30f, 2.0f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.3686f, 0.1490f, 0.0196f);
    cube.setTextureProperty(table1, table2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);

    //table left leg
    translateMatrix = glm::translate(identityMatrix, glm::vec3(9.0, -.5 + 0.15, 3.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.5f, 1.3f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.3686f, 0.1490f, 0.0196f);
    cube.setMaterialisticEimu(0.3686f, 0.1490f, 0.0196f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    //table right leg
    translateMatrix = glm::translate(identityMatrix, glm::vec3(38.6, -.5 + 0.15, 3.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.5f, 1.3f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.3686f, 0.1490f, 0.0196f);
    cube.setMaterialisticEimu(0.3686f, 0.1490f, 0.0196f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);




    /////arekta diningggggggggggggggggggg
           //table top
    translateMatrix = glm::translate(identityMatrix, glm::vec3(9.0, .9 + 0.15, 21.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(30.0f, .30f, 2.0f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.3686f, 0.1490f, 0.0196f);
    cube.setTextureProperty(table1, table2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);

    //table left leg
    translateMatrix = glm::translate(identityMatrix, glm::vec3(9.0, -.5 + 0.15, 21.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.5f, 1.3f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.3686f, 0.1490f, 0.0196f);
    cube.setMaterialisticEimu(0.3686f, 0.1490f, 0.0196f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    //table right leg
    translateMatrix = glm::translate(identityMatrix, glm::vec3(38.6, -.5 + 0.15, 21.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.5f, 1.3f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.3686f, 0.1490f, 0.0196f);
    cube.setMaterialisticEimu(0.3686f, 0.1490f, 0.0196f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);


    //table top
    translateMatrix = glm::translate(identityMatrix, glm::vec3(8.4, 1.3 + 0.15, 17.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(33.0f, .30f, 2.0f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0941f, 0.0471f, 0.0196f);
    cube.setTextureProperty(table1, table2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);

    //table right leg
    translateMatrix = glm::translate(identityMatrix, glm::vec3(39.6, -.5 + 0.15, 17.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.5f, 1.7f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.3686f, 0.1490f, 0.0196f);
    cube.setMaterialisticEimu(0.3686f, 0.1490f, 0.0196f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    //table left leg
    translateMatrix = glm::translate(identityMatrix, glm::vec3(8.5, -.5 + 0.15, 17.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.5f, 1.7f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.3686f, 0.1490f, 0.0196f);
    cube.setMaterialisticEimu(0.3686f, 0.1490f, 0.0196f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);


    //table er niche left
    translateMatrix = glm::translate(identityMatrix, glm::vec3(8.4, -0.7 + 0.15, 17.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.0f, .7f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0, 0);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    //table er niche right
    translateMatrix = glm::translate(identityMatrix, glm::vec3(39.4, -0.7 + 0.15, 17.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.0f, .7f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0, 0);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);




    //arekta chairrrrrrrrrrrrr
    //table top
    translateMatrix = glm::translate(identityMatrix, glm::vec3(9.0, .9 + 0.15, 14.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(30.0f, .30f, 2.0f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.3686f, 0.1490f, 0.0196f);
    cube.setTextureProperty(table1, table2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);

    //table left leg
    translateMatrix = glm::translate(identityMatrix, glm::vec3(9.0, -.5 + 0.15, 14.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.5f, 1.3f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.3686f, 0.1490f, 0.0196f);
    cube.setMaterialisticEimu(0.3686f, 0.1490f, 0.0196f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    //table right leg
    translateMatrix = glm::translate(identityMatrix, glm::vec3(38.6, -.5 + 0.15, 14.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.5f, 1.3f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.3686f, 0.1490f, 0.0196f);
    cube.setMaterialisticEimu(0.3686f, 0.1490f, 0.0196f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);











    ///////teacher er dine
    // 
    //stage
    translateMatrix = glm::translate(identityMatrix, glm::vec3(-5.0, .9 + 0.15, -12.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(5.0f, .9f, 34.0f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0941f, 0.0471f, 0.0196f);
    cube.setTextureProperty(tt1, tt2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);

    //tabletop
    translateMatrix = glm::translate(identityMatrix, glm::vec3(2.0, 3.9 + 0.15, -12.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(3.0f, .4f, 34.0f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.3686f, 0.1490f, 0.0196f);
    cube.setTextureProperty(table1, table2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);


    //pichone left pa
    translateMatrix = glm::translate(identityMatrix, glm::vec3(2.0, -1.0 + 0.15, -12.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.50f, 4.9f, .5f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.3686f, 0.1490f, 0.0196f);
    cube.setTextureProperty(table1, table2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);

    //piche right pa
    translateMatrix = glm::translate(identityMatrix, glm::vec3(4.7, -1.0 + 0.15, -12.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.50f, 4.9f, .5f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.3686f, 0.1490f, 0.0196f);
    cube.setTextureProperty(table1, table2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);

    //shamne right pa
    translateMatrix = glm::translate(identityMatrix, glm::vec3(4.6, -1.0 + 0.15, 21.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.50f, 4.9f, .5f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.3686f, 0.1490f, 0.0196f);
    cube.setTextureProperty(table1, table2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);

    //shamne left pa
    translateMatrix = glm::translate(identityMatrix, glm::vec3(1.9, -1.0 + 0.15, 21.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.50f, 4.9f, .5f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.3686f, 0.1490f, 0.0196f);
    cube.setTextureProperty(table1, table2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);


    ////////janlar deyallllllll
    translateMatrix = glm::translate(identityMatrix, glm::vec3(-5.2, -1.0 + 0.15, 43.0));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(60.0f, 31.9f, .1f));
    rotateYMatrix = glm::rotate(identityMatrix, glm::radians(90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
    model = als * translateMatrix * rotateYMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.3686f, 0.1490f, 0.0196f);
    cube.setTextureProperty(twindow1, twindow2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);



    //chair



    float chairSpacing = 6.5f; // Spacing between chairs along the z-axis

    for (int i = 0; i < 5; ++i) {
        // Calculate the position for each chair along the z-axis
        float zPosition = 13.5f - i * chairSpacing;

        // Seat
        translateMatrix = glm::translate(identityMatrix, glm::vec3(-3.9, 1.7 + 0.15, zPosition));
        scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.5f, 1.9f, 3.0f));
        model = als * translateMatrix * scaleMatrix;
        //drawCube(cubeVAO, lightingShader, model, 0.01f, 0.01f, 0.01f);
        cube.setTextureProperty(seat1, seat2, 32.0);
        cube.drawCubeWithTexture(lightingShader, model);

        // Pichon Helan
        translateMatrix = glm::translate(identityMatrix, glm::vec3(-3.9, 1.7 + 0.15, zPosition));
        scaleMatrix = glm::scale(identityMatrix, glm::vec3(.5f, 4.2f, 3.0f));
        model = als * translateMatrix * scaleMatrix;
        //drawCube(cubeVAO, lightingShader, model, 0, 0.2f, 0.2f);
        cube.setTextureProperty(seat1, seat2, 32.0);
        cube.drawCubeWithTexture(lightingShader, model);


        // Curved Object
        glm::vec3 curvedObjectPosition = glm::vec3(-3.9, 3.9 + 0.15 + 2.0, zPosition); // Adjust zPosition for each chair

        float curveHeight = 1.0f; // Total height of the curved shape
        int numCubes = 10; // Number of cubes to create the curvature

        // Create the curved shape using stacked cubes and rotate it around X-axis by 180 degrees
        for (int j = 0; j < numCubes; ++j) {
            float yOffset = curveHeight * (static_cast<float>(j) / numCubes); // Calculate Y offset for the current cube
            float cubeScaleX = 0.5f + 0.2f * glm::sin(glm::radians(90.0f * (yOffset / curveHeight))); // Scale X to create the curvature

            // Create a cube at the calculated position with scaling for curvature and rotation around X-axis
            translateMatrix = glm::translate(identityMatrix, curvedObjectPosition + glm::vec3(0.0f, yOffset, 0.0f));
            rotateZMatrix = glm::rotate(identityMatrix, glm::radians(180.0f), glm::vec3(0.0f, 0.0f, 1.0f));
            rotateXMatrix = glm::rotate(identityMatrix, glm::radians(180.0f), glm::vec3(0.0f, 0.0f, 1.0f)); // Rotate around X-axis by 180 degrees
            scaleMatrix = glm::scale(identityMatrix, glm::vec3(cubeScaleX, .6f, 0.5f)); // Adjust scaling factors as needed
            model = als * translateMatrix * rotateZMatrix * rotateXMatrix * scaleMatrix;
            //drawCube(cubeVAO, lightingShader, model, 1.0f, 0.3882f, 0.2784f); // Green color, you can change the color if desired
            cube.setTextureProperty(sofa1, sofa2, 32.0);
            cube.drawCubeWithTexture(lightingShader, model);

        }

        for (int j = 0; j < numCubes; ++j) {
            float yOffset = curveHeight * (static_cast<float>(j) / numCubes); // Calculate Y offset for the current cube
            float cubeScaleX = 0.5f + 0.2f * glm::sin(glm::radians(90.0f * (yOffset / curveHeight))); // Scale X to create the curvature

            // Create a cube at the calculated position with scaling for curvature and rotation around X-axis
            translateMatrix = glm::translate(identityMatrix, curvedObjectPosition + glm::vec3(0.0f, yOffset, 2.6f));
            rotateZMatrix = glm::rotate(identityMatrix, glm::radians(180.0f), glm::vec3(0.0f, 0.0f, 1.0f));
            rotateXMatrix = glm::rotate(identityMatrix, glm::radians(180.0f), glm::vec3(0.0f, 0.0f, 1.0f)); // Rotate around X-axis by 180 degrees
            scaleMatrix = glm::scale(identityMatrix, glm::vec3(cubeScaleX, .6f, 0.5f)); // Adjust scaling factors as needed
            model = als * translateMatrix * rotateZMatrix * rotateXMatrix * scaleMatrix;
            //drawCube(cubeVAO, lightingShader, model, 1.0f, 0.3882f, 0.2784f); // Green color, you can change the color if desired
            cube.setTextureProperty(sofa1, sofa2, 32.0);
            cube.drawCubeWithTexture(lightingShader, model);

        }


        for (int j = 0; j < numCubes; ++j) {
            float yOffset = curveHeight * (static_cast<float>(j) / numCubes); // Calculate Y offset for the current cube
            float cubeScaleX = 0.5f + 0.2f * glm::sin(glm::radians(90.0f * (yOffset / curveHeight))); // Scale X to create the curvature

            // Create a cube at the calculated position with scaling for curvature and rotation around X-axis
            translateMatrix = glm::translate(identityMatrix, curvedObjectPosition + glm::vec3(0.0f, yOffset, 2.3f));
            rotateZMatrix = glm::rotate(identityMatrix, glm::radians(180.0f), glm::vec3(0.0f, 0.0f, 1.0f));
            rotateXMatrix = glm::rotate(identityMatrix, glm::radians(180.0f), glm::vec3(0.0f, 0.0f, 1.0f)); // Rotate around X-axis by 180 degrees
            scaleMatrix = glm::scale(identityMatrix, glm::vec3(cubeScaleX, .6f, 0.5f)); // Adjust scaling factors as needed
            model = als * translateMatrix * rotateZMatrix * rotateXMatrix * scaleMatrix;
            cube.setTextureProperty(sofa1, sofa2, 32.0);
            cube.drawCubeWithTexture(lightingShader, model);
            //drawCube(cubeVAO, lightingShader, model, 1.0f, 0.3882f, 0.2784f); // Green color, you can change the color if desired
        }
        for (int j = 0; j < numCubes; ++j) {
            float yOffset = curveHeight * (static_cast<float>(j) / numCubes); // Calculate Y offset for the current cube
            float cubeScaleX = 0.5f + 0.2f * glm::sin(glm::radians(90.0f * (yOffset / curveHeight))); // Scale X to create the curvature

            // Create a cube at the calculated position with scaling for curvature and rotation around X-axis
            translateMatrix = glm::translate(identityMatrix, curvedObjectPosition + glm::vec3(0.0f, yOffset, 2.1f));
            rotateZMatrix = glm::rotate(identityMatrix, glm::radians(180.0f), glm::vec3(0.0f, 0.0f, 1.0f));
            rotateXMatrix = glm::rotate(identityMatrix, glm::radians(180.0f), glm::vec3(0.0f, 0.0f, 1.0f)); // Rotate around X-axis by 180 degrees
            scaleMatrix = glm::scale(identityMatrix, glm::vec3(cubeScaleX, .6f, 0.5f)); // Adjust scaling factors as needed
            model = als * translateMatrix * rotateZMatrix * rotateXMatrix * scaleMatrix;
            cube.setTextureProperty(sofa1, sofa2, 32.0);
            cube.drawCubeWithTexture(lightingShader, model);
            // drawCube(cubeVAO, lightingShader, model, 1.0f, 0.3882f, 0.2784f); // Green color, you can change the color if desired
        }

        for (int j = 0; j < numCubes; ++j) {
            float yOffset = curveHeight * (static_cast<float>(j) / numCubes); // Calculate Y offset for the current cube
            float cubeScaleX = 0.5f + 0.2f * glm::sin(glm::radians(90.0f * (yOffset / curveHeight))); // Scale X to create the curvature

            // Create a cube at the calculated position with scaling for curvature and rotation around X-axis
            translateMatrix = glm::translate(identityMatrix, curvedObjectPosition + glm::vec3(0.0f, yOffset, 1.9f));
            rotateZMatrix = glm::rotate(identityMatrix, glm::radians(180.0f), glm::vec3(0.0f, 0.0f, 1.0f));
            rotateXMatrix = glm::rotate(identityMatrix, glm::radians(180.0f), glm::vec3(0.0f, 0.0f, 1.0f)); // Rotate around X-axis by 180 degrees
            scaleMatrix = glm::scale(identityMatrix, glm::vec3(cubeScaleX, .6f, 0.5f)); // Adjust scaling factors as needed
            model = als * translateMatrix * rotateZMatrix * rotateXMatrix * scaleMatrix;
            cube.setTextureProperty(sofa1, sofa2, 32.0);
            cube.drawCubeWithTexture(lightingShader, model);
            //drawCube(cubeVAO, lightingShader, model, 1.0f, 0.3882f, 0.2784f); // Green color, you can change the color if desired
        }

        for (int j = 0; j < numCubes; ++j) {
            float yOffset = curveHeight * (static_cast<float>(j) / numCubes); // Calculate Y offset for the current cube
            float cubeScaleX = 0.5f + 0.2f * glm::sin(glm::radians(90.0f * (yOffset / curveHeight))); // Scale X to create the curvature

            // Create a cube at the calculated position with scaling for curvature and rotation around X-axis
            translateMatrix = glm::translate(identityMatrix, curvedObjectPosition + glm::vec3(0.0f, yOffset, 1.7f));
            rotateZMatrix = glm::rotate(identityMatrix, glm::radians(180.0f), glm::vec3(0.0f, 0.0f, 1.0f));
            rotateXMatrix = glm::rotate(identityMatrix, glm::radians(180.0f), glm::vec3(0.0f, 0.0f, 1.0f)); // Rotate around X-axis by 180 degrees
            scaleMatrix = glm::scale(identityMatrix, glm::vec3(cubeScaleX, .6f, 0.5f)); // Adjust scaling factors as needed
            model = als * translateMatrix * rotateZMatrix * rotateXMatrix * scaleMatrix;
            cube.setTextureProperty(sofa1, sofa2, 32.0);
            cube.drawCubeWithTexture(lightingShader, model);
            //drawCube(cubeVAO, lightingShader, model, 1.0f, 0.3882f, 0.2784f); // Green color, you can change the color if desired
        }

        for (int j = 0; j < numCubes; ++j) {
            float yOffset = curveHeight * (static_cast<float>(j) / numCubes); // Calculate Y offset for the current cube
            float cubeScaleX = 0.5f + 0.2f * glm::sin(glm::radians(90.0f * (yOffset / curveHeight))); // Scale X to create the curvature

            // Create a cube at the calculated position with scaling for curvature and rotation around X-axis
            translateMatrix = glm::translate(identityMatrix, curvedObjectPosition + glm::vec3(0.0f, yOffset, 1.5f));
            rotateZMatrix = glm::rotate(identityMatrix, glm::radians(180.0f), glm::vec3(0.0f, 0.0f, 1.0f));
            rotateXMatrix = glm::rotate(identityMatrix, glm::radians(180.0f), glm::vec3(0.0f, 0.0f, 1.0f)); // Rotate around X-axis by 180 degrees
            scaleMatrix = glm::scale(identityMatrix, glm::vec3(cubeScaleX, .6f, 0.5f)); // Adjust scaling factors as needed
            model = als * translateMatrix * rotateZMatrix * rotateXMatrix * scaleMatrix;
            cube.setTextureProperty(sofa1, sofa2, 32.0);
            cube.drawCubeWithTexture(lightingShader, model);
            //drawCube(cubeVAO, lightingShader, model, 1.0f, 0.3882f, 0.2784f); // Green color, you can change the color if desired
        }

        for (int j = 0; j < numCubes; ++j) {
            float yOffset = curveHeight * (static_cast<float>(j) / numCubes); // Calculate Y offset for the current cube
            float cubeScaleX = 0.5f + 0.2f * glm::sin(glm::radians(90.0f * (yOffset / curveHeight))); // Scale X to create the curvature

            // Create a cube at the calculated position with scaling for curvature and rotation around X-axis
            translateMatrix = glm::translate(identityMatrix, curvedObjectPosition + glm::vec3(0.0f, yOffset, 1.3f));
            rotateZMatrix = glm::rotate(identityMatrix, glm::radians(180.0f), glm::vec3(0.0f, 0.0f, 1.0f));
            rotateXMatrix = glm::rotate(identityMatrix, glm::radians(180.0f), glm::vec3(0.0f, 0.0f, 1.0f)); // Rotate around X-axis by 180 degrees
            scaleMatrix = glm::scale(identityMatrix, glm::vec3(cubeScaleX, .6f, 0.5f)); // Adjust scaling factors as needed
            model = als * translateMatrix * rotateZMatrix * rotateXMatrix * scaleMatrix;
            cube.setTextureProperty(sofa1, sofa2, 32.0);
            cube.drawCubeWithTexture(lightingShader, model);
            //drawCube(cubeVAO, lightingShader, model, 1.0f, 0.3882f, 0.2784f); // Green color, you can change the color if desired
        }
        for (int j = 0; j < numCubes; ++j) {
            float yOffset = curveHeight * (static_cast<float>(j) / numCubes); // Calculate Y offset for the current cube
            float cubeScaleX = 0.5f + 0.2f * glm::sin(glm::radians(90.0f * (yOffset / curveHeight))); // Scale X to create the curvature

            // Create a cube at the calculated position with scaling for curvature and rotation around X-axis
            translateMatrix = glm::translate(identityMatrix, curvedObjectPosition + glm::vec3(0.0f, yOffset, 1.1f));
            rotateZMatrix = glm::rotate(identityMatrix, glm::radians(180.0f), glm::vec3(0.0f, 0.0f, 1.0f));
            rotateXMatrix = glm::rotate(identityMatrix, glm::radians(180.0f), glm::vec3(0.0f, 0.0f, 1.0f)); // Rotate around X-axis by 180 degrees
            scaleMatrix = glm::scale(identityMatrix, glm::vec3(cubeScaleX, .6f, 0.5f)); // Adjust scaling factors as needed
            model = als * translateMatrix * rotateZMatrix * rotateXMatrix * scaleMatrix;
            cube.setTextureProperty(sofa1, sofa2, 32.0);
            cube.drawCubeWithTexture(lightingShader, model);
            //drawCube(cubeVAO, lightingShader, model, 1.0f, 0.3882f, 0.2784f); // Green color, you can change the color if desired
        }
        for (int j = 0; j < numCubes; ++j) {
            float yOffset = curveHeight * (static_cast<float>(j) / numCubes); // Calculate Y offset for the current cube
            float cubeScaleX = 0.5f + 0.2f * glm::sin(glm::radians(90.0f * (yOffset / curveHeight))); // Scale X to create the curvature

            // Create a cube at the calculated position with scaling for curvature and rotation around X-axis
            translateMatrix = glm::translate(identityMatrix, curvedObjectPosition + glm::vec3(0.0f, yOffset, .9f));
            rotateZMatrix = glm::rotate(identityMatrix, glm::radians(180.0f), glm::vec3(0.0f, 0.0f, 1.0f));
            rotateXMatrix = glm::rotate(identityMatrix, glm::radians(180.0f), glm::vec3(0.0f, 0.0f, 1.0f)); // Rotate around X-axis by 180 degrees
            scaleMatrix = glm::scale(identityMatrix, glm::vec3(cubeScaleX, .6f, 0.5f)); // Adjust scaling factors as needed
            model = als * translateMatrix * rotateZMatrix * rotateXMatrix * scaleMatrix;
            cube.setTextureProperty(sofa1, sofa2, 32.0);
            cube.drawCubeWithTexture(lightingShader, model);
            //drawCube(cubeVAO, lightingShader, model, 1.0f, 0.3882f, 0.2784f); // Green color, you can change the color if desired
        }
        for (int j = 0; j < numCubes; ++j) {
            float yOffset = curveHeight * (static_cast<float>(j) / numCubes); // Calculate Y offset for the current cube
            float cubeScaleX = 0.5f + 0.2f * glm::sin(glm::radians(90.0f * (yOffset / curveHeight))); // Scale X to create the curvature

            // Create a cube at the calculated position with scaling for curvature and rotation around X-axis
            translateMatrix = glm::translate(identityMatrix, curvedObjectPosition + glm::vec3(0.0f, yOffset, .7f));
            rotateZMatrix = glm::rotate(identityMatrix, glm::radians(180.0f), glm::vec3(0.0f, 0.0f, 1.0f));
            rotateXMatrix = glm::rotate(identityMatrix, glm::radians(180.0f), glm::vec3(0.0f, 0.0f, 1.0f)); // Rotate around X-axis by 180 degrees
            scaleMatrix = glm::scale(identityMatrix, glm::vec3(cubeScaleX, .6f, 0.5f)); // Adjust scaling factors as needed
            model = als * translateMatrix * rotateZMatrix * rotateXMatrix * scaleMatrix;
            cube.setTextureProperty(sofa1, sofa2, 32.0);
            cube.drawCubeWithTexture(lightingShader, model);
            //drawCube(cubeVAO, lightingShader, model, 1.0f, 0.3882f, 0.2784f); // Green color, you can change the color if desired
        }

        for (int j = 0; j < numCubes; ++j) {
            float yOffset = curveHeight * (static_cast<float>(j) / numCubes); // Calculate Y offset for the current cube
            float cubeScaleX = 0.5f + 0.2f * glm::sin(glm::radians(90.0f * (yOffset / curveHeight))); // Scale X to create the curvature

            // Create a cube at the calculated position with scaling for curvature and rotation around X-axis
            translateMatrix = glm::translate(identityMatrix, curvedObjectPosition + glm::vec3(0.0f, yOffset, .5f));
            rotateZMatrix = glm::rotate(identityMatrix, glm::radians(180.0f), glm::vec3(0.0f, 0.0f, 1.0f));
            rotateXMatrix = glm::rotate(identityMatrix, glm::radians(180.0f), glm::vec3(0.0f, 0.0f, 1.0f)); // Rotate around X-axis by 180 degrees
            scaleMatrix = glm::scale(identityMatrix, glm::vec3(cubeScaleX, .6f, 0.5f)); // Adjust scaling factors as needed
            model = als * translateMatrix * rotateZMatrix * rotateXMatrix * scaleMatrix;
            cube.setTextureProperty(sofa1, sofa2, 32.0);
            cube.drawCubeWithTexture(lightingShader, model);
            //drawCube(cubeVAO, lightingShader, model, 1.0f, 0.3882f, 0.2784f); // Green color, you can change the color if desired
        }
    }










    //deyal
    //prothom cyn left
    translateMatrix = glm::translate(identityMatrix, glm::vec3(2.0, -1.0 + 0.15, -18.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.3f, 19.0f, .4f));
    model = als * translateMatrix * scaleMatrix;
    Cylinder cylinder = Cylinder();
    cylinder.drawCylinder(lightingShader, model, 0.545f, 0.271f, 0.075f);

    //tar pasher choto
    translateMatrix = glm::translate(identityMatrix, glm::vec3(2.345, -1.0 + 0.15, -18.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 19.0f, .4f));
    model = als * translateMatrix * scaleMatrix;
    //Cylinder cylinder = Cylinder();
    cylinder.drawCylinder(lightingShader, model, 0.392f, 0.196f, 0.039f);

    //rightchoto
    translateMatrix = glm::translate(identityMatrix, glm::vec3(6.5, -1.0 + 0.15, -18.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 19.0f, .4f));
    model = als * translateMatrix * scaleMatrix;
    //Cylinder cylinder = Cylinder();
    cylinder.drawCylinder(lightingShader, model, 0.392f, 0.196f, 0.039f);


    //right
    translateMatrix = glm::translate(identityMatrix, glm::vec3(7.0f, -1.0 + 0.15, -18.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.3f, 19.0f, .4f));
    model = als * translateMatrix * scaleMatrix;
    //Cylinder cylinder = Cylinder();
    cylinder.drawCylinder(lightingShader, model, 0.545f, 0.271f, 0.075f);

    //sphere
    translateMatrix = glm::translate(identityMatrix, glm::vec3(4.7, 18.0, -19.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(3.0f, 2.0f, 2.5f));
    model = als * translateMatrix * scaleMatrix;
    HalfSphere sphere = HalfSphere();
    sphere.drawHalfSphere(lightingShader, model, 0.545f, 0.271f, 0.075f);




    //prothom cyn left
    translateMatrix = glm::translate(identityMatrix, glm::vec3(3.0, -1.0 + 0.15, -19.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.30f, 15.5f, .4f));
    model = als * translateMatrix * scaleMatrix;
    //Cylinder cylinder = Cylinder();
    cylinder.drawCylinder(lightingShader, model, 0.545f, 0.271f, 0.075f);

    //tar pasher choto
    translateMatrix = glm::translate(identityMatrix, glm::vec3(3.345, -1.0 + 0.15, -19.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.2f, 15.5f, .4f));
    model = als * translateMatrix * scaleMatrix;
    //Cylinder cylinder = Cylinder();
    cylinder.drawCylinder(lightingShader, model, 0.392f, 0.196f, 0.039f);

    //rightchoto
    translateMatrix = glm::translate(identityMatrix, glm::vec3(5.5, -1.0 + 0.15, -19.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.2f, 15.5f, .4f));
    model = als * translateMatrix * scaleMatrix;
    //Cylinder cylinder = Cylinder();
    cylinder.drawCylinder(lightingShader, model, 0.392f, 0.196f, 0.039f);


    //right
    translateMatrix = glm::translate(identityMatrix, glm::vec3(5.8f, -1.0 + 0.15, -19.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.3f, 15.5f, .4f));
    model = als * translateMatrix * scaleMatrix;
    //Cylinder cylinder = Cylinder();
    cylinder.drawCylinder(lightingShader, model, 0.545f, 0.271f, 0.075f);

    //sphere
    translateMatrix = glm::translate(identityMatrix, glm::vec3(4.58, 14.5, -19.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.79f, 1.9f, 2.4f));
    model = als * translateMatrix * scaleMatrix;
    // HalfSphere sphere = HalfSphere();
    sphere.drawHalfSphere(lightingShader, model, 0.545f, 0.271f, 0.075f);


    //niche cube

    translateMatrix = glm::translate(identityMatrix, glm::vec3(3.6, -1.0 + 0.15, -19.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.7f, 8.0f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.392f, 0.196f, 0.039f);
    cube.setMaterialisticEimu(0.392f, 0.196f, 0.039f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);



    //glass
    translateMatrix = glm::translate(identityMatrix, glm::vec3(3.6, 7.0 + 0.15, -19.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.7f, 8.0f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.7373f, 0.6745f, 0.5843f);
    cube.setTextureProperty(glass1, glass2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);


    /*  //glass majhe
    translateMatrix = glm::translate(identityMatrix, glm::vec3(3.6, 10.5 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.7f, .2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    drawCube(cubeVAO, lightingShader, model, 0.392f, 0.196f, 0.039f);

    //glasslomba
    translateMatrix = glm::translate(identityMatrix, glm::vec3(4.3, 7.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 7.5f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    drawCube(cubeVAO, lightingShader, model, 0.392f, 0.196f, 0.039f);
    */









    ////////arektaaaaaaaaaaa deyaaaaaaaaaaaallllllllllll
       //prothom cyn left
    translateMatrix = glm::translate(identityMatrix, glm::vec3(12.0f, -1.0 + 0.15, -18.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.3f, 19.0f, .4f));
    model = als * translateMatrix * scaleMatrix;
    //Cylinder cylinder = Cylinder();
    cylinder.drawCylinder(lightingShader, model, 0.545f, 0.271f, 0.075f);

    //tar pasher choto
    translateMatrix = glm::translate(identityMatrix, glm::vec3(12.345, -1.0 + 0.15, -18.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 19.0f, .4f));
    model = als * translateMatrix * scaleMatrix;
    //Cylinder cylinder = Cylinder();
    cylinder.drawCylinder(lightingShader, model, 0.392f, 0.196f, 0.039f);

    //rightchoto
    translateMatrix = glm::translate(identityMatrix, glm::vec3(16.5, -1.0 + 0.15, -18.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 19.0f, .4f));
    model = als * translateMatrix * scaleMatrix;
    //Cylinder cylinder = Cylinder();
    cylinder.drawCylinder(lightingShader, model, 0.392f, 0.196f, 0.039f);


    //right
    translateMatrix = glm::translate(identityMatrix, glm::vec3(17.0f, -1.0 + 0.15, -18.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.3f, 19.0f, .4f));
    model = als * translateMatrix * scaleMatrix;
    //Cylinder cylinder = Cylinder();
    cylinder.drawCylinder(lightingShader, model, 0.545f, 0.271f, 0.075f);

    //sphere
    translateMatrix = glm::translate(identityMatrix, glm::vec3(14.7, 18.0, -19.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(3.0f, 2.0f, 2.5f));
    model = als * translateMatrix * scaleMatrix;
    //HalfSphere sphere = HalfSphere();
    sphere.drawHalfSphere(lightingShader, model, 0.545f, 0.271f, 0.075f);




    //prothom cyn left
    translateMatrix = glm::translate(identityMatrix, glm::vec3(13.0, -1.0 + 0.15, -19.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.30f, 15.5f, .4f));
    model = als * translateMatrix * scaleMatrix;
    //Cylinder cylinder = Cylinder();
    cylinder.drawCylinder(lightingShader, model, 0.545f, 0.271f, 0.075f);

    //tar pasher choto
    translateMatrix = glm::translate(identityMatrix, glm::vec3(13.345, -1.0 + 0.15, -19.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.2f, 15.5f, .4f));
    model = als * translateMatrix * scaleMatrix;
    //Cylinder cylinder = Cylinder();
    cylinder.drawCylinder(lightingShader, model, 0.392f, 0.196f, 0.039f);

    //rightchoto
    translateMatrix = glm::translate(identityMatrix, glm::vec3(15.5, -1.0 + 0.15, -19.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.2f, 15.5f, .4f));
    model = als * translateMatrix * scaleMatrix;
    //Cylinder cylinder = Cylinder();
    cylinder.drawCylinder(lightingShader, model, 0.392f, 0.196f, 0.039f);


    //right
    translateMatrix = glm::translate(identityMatrix, glm::vec3(15.8f, -1.0 + 0.15, -19.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.3f, 15.5f, .4f));
    model = als * translateMatrix * scaleMatrix;
    //Cylinder cylinder = Cylinder();
    cylinder.drawCylinder(lightingShader, model, 0.545f, 0.271f, 0.075f);

    //sphere
    translateMatrix = glm::translate(identityMatrix, glm::vec3(14.58, 14.5, -19.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.79f, 1.9f, 2.4f));
    model = als * translateMatrix * scaleMatrix;
    // HalfSphere sphere = HalfSphere();
    sphere.drawHalfSphere(lightingShader, model, 0.545f, 0.271f, 0.075f);


    //niche cube

    translateMatrix = glm::translate(identityMatrix, glm::vec3(13.6, -1.0 + 0.15, -19.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.7f, 8.0f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.392f, 0.196f, 0.039f);
    cube.setMaterialisticEimu(0.392f, 0.196f, 0.039f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);


    //glass
    translateMatrix = glm::translate(identityMatrix, glm::vec3(13.6, 7.0 + 0.15, -19.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.7f, 8.0f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    cube.setTextureProperty(glass1, glass2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);


    /*  //glass majhe
    translateMatrix = glm::translate(identityMatrix, glm::vec3(13.6, 10.5 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.7f, .2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    drawCube(cubeVAO, lightingShader, model, 0.392f, 0.196f, 0.039f);

    //glasslomba
    translateMatrix = glm::translate(identityMatrix, glm::vec3(14.3, 7.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 7.5f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    drawCube(cubeVAO, lightingShader, model, 0.392f, 0.196f, 0.039f);
    */







    ////ekdom left er boxxxxxxxxxxxxxxxxxx
    //boxx
    translateMatrix = glm::translate(identityMatrix, glm::vec3(-7.5, -1.0 + 0.15, -19.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(9.5f, 6.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
    cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    //araaarii
    translateMatrix = glm::translate(identityMatrix, glm::vec3(-7.5, -1.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(9.5f, 1.0f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(-7.5, 1.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(9.5f, 0.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(-7.5, 2.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(9.5f, 0.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(-7.5, 3.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(9.5f, 0.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(-7.5, 4.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(9.5f, 0.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(-7.5, 5.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(9.5f, 0.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);


    //lombagula
    translateMatrix = glm::translate(identityMatrix, glm::vec3(-5.9, -1.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 6.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(-4.9, -1.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 6.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(-3.9, -1.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 6.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(-2.9, -1.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 6.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(-1.9, -1.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 6.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);


    translateMatrix = glm::translate(identityMatrix, glm::vec3(-.9, -1.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 6.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(.1, -1.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 6.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(1.3, -1.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 6.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);






    //boxx
    translateMatrix = glm::translate(identityMatrix, glm::vec3(7.4, -1.0 + 0.15, -19.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.5f, 6.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
    cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    //araaarii
    translateMatrix = glm::translate(identityMatrix, glm::vec3(7.4, -1.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.3f, 1.0f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(7.4, 1.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.3f, 0.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(7.4, 2.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.3f, 0.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(7.4, 3.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.3f, 0.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(7.4, 4.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.3f, 0.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(7.4, 5.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.3f, 0.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);


    //lombagula
    translateMatrix = glm::translate(identityMatrix, glm::vec3(7.35, -1.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 6.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(8.35, -1.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 6.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(9.35, -1.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 6.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(10.35, -1.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 6.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(11.4, -1.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 6.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);








    //boxx
    translateMatrix = glm::translate(identityMatrix, glm::vec3(17.4, -1.0 + 0.15, -19.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.5f, 6.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
    cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    //araaarii
    translateMatrix = glm::translate(identityMatrix, glm::vec3(17.4, -1.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.3f, 1.0f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(17.4, 1.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.3f, 0.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(17.4, 2.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.3f, 0.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(17.4, 3.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.3f, 0.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(17.4, 4.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.3f, 0.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(17.4, 5.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.3f, 0.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);


    //lombagula
    translateMatrix = glm::translate(identityMatrix, glm::vec3(17.35, -1.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 6.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(18.35, -1.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 6.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(19.35, -1.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 6.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(20.35, -1.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 6.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(21.6, -1.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 6.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);




    /////trapizium
    translateMatrix = glm::translate(identityMatrix, glm::vec3(27.0, 12.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(6.5f, 10.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    Trapezium trapezium = Trapezium();
    trapezium.drawTrapezium(lightingShader, model, 0.392f, 0.196f, 0.039f);

    //cube
    translateMatrix = glm::translate(identityMatrix, glm::vec3(20.5, 5.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(12.7f, 2.0f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
    cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    //fireplace
    translateMatrix = glm::translate(identityMatrix, glm::vec3(21.5, 0.2 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(10.8f, 6.0f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
    cube.setTextureProperty(fr1, fr2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);








    ///////boxx
    translateMatrix = glm::translate(identityMatrix, glm::vec3(32.4, -1.0 + 0.15, -19.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.5f, 6.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
    cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    //araaarii
    translateMatrix = glm::translate(identityMatrix, glm::vec3(32.4, -1.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.3f, 1.0f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(32.4, 1.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.3f, 0.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(32.4, 2.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.3f, 0.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(32.4, 3.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.3f, 0.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(32.4, 4.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.3f, 0.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(32.4, 5.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.3f, 0.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);


    //lombagula
    translateMatrix = glm::translate(identityMatrix, glm::vec3(32.35, -1.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 6.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(33.35, -1.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 6.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(34.35, -1.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 6.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(35.35, -1.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 6.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(36.6, -1.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 6.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);






    ////////deyaler designnnnnnnn

     //prothom cyn left
    translateMatrix = glm::translate(identityMatrix, glm::vec3(37.0f, -1.0 + 0.15, -18.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.3f, 19.0f, .4f));
    model = als * translateMatrix * scaleMatrix;
    //Cylinder cylinder = Cylinder();
    cylinder.drawCylinder(lightingShader, model, 0.545f, 0.271f, 0.075f);

    //tar pasher choto
    translateMatrix = glm::translate(identityMatrix, glm::vec3(37.345, -1.0 + 0.15, -18.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 19.0f, .4f));
    model = als * translateMatrix * scaleMatrix;
    //Cylinder cylinder = Cylinder();
    cylinder.drawCylinder(lightingShader, model, 0.392f, 0.196f, 0.039f);

    //rightchoto
    translateMatrix = glm::translate(identityMatrix, glm::vec3(41.5, -1.0 + 0.15, -18.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 19.0f, .4f));
    model = als * translateMatrix * scaleMatrix;
    //Cylinder cylinder = Cylinder();
    cylinder.drawCylinder(lightingShader, model, 0.392f, 0.196f, 0.039f);


    //right
    translateMatrix = glm::translate(identityMatrix, glm::vec3(42.0f, -1.0 + 0.15, -18.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.3f, 19.0f, .4f));
    model = als * translateMatrix * scaleMatrix;
    //Cylinder cylinder = Cylinder();
    cylinder.drawCylinder(lightingShader, model, 0.545f, 0.271f, 0.075f);

    //sphere
    translateMatrix = glm::translate(identityMatrix, glm::vec3(39.7, 18.0, -19.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(3.0f, 2.0f, 2.5f));
    model = als * translateMatrix * scaleMatrix;
    //HalfSphere sphere = HalfSphere();
    sphere.drawHalfSphere(lightingShader, model, 0.545f, 0.271f, 0.075f);




    //prothom cyn left
    translateMatrix = glm::translate(identityMatrix, glm::vec3(38.0, -1.0 + 0.15, -19.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.30f, 15.5f, .4f));
    model = als * translateMatrix * scaleMatrix;
    //Cylinder cylinder = Cylinder();
    cylinder.drawCylinder(lightingShader, model, 0.545f, 0.271f, 0.075f);

    //tar pasher choto
    translateMatrix = glm::translate(identityMatrix, glm::vec3(38.345, -1.0 + 0.15, -19.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.2f, 15.5f, .4f));
    model = als * translateMatrix * scaleMatrix;
    //Cylinder cylinder = Cylinder();
    cylinder.drawCylinder(lightingShader, model, 0.392f, 0.196f, 0.039f);

    //rightchoto
    translateMatrix = glm::translate(identityMatrix, glm::vec3(40.5, -1.0 + 0.15, -19.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.2f, 15.5f, .4f));
    model = als * translateMatrix * scaleMatrix;
    //Cylinder cylinder = Cylinder();
    cylinder.drawCylinder(lightingShader, model, 0.392f, 0.196f, 0.039f);


    //right
    translateMatrix = glm::translate(identityMatrix, glm::vec3(40.8f, -1.0 + 0.15, -19.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.3f, 15.5f, .4f));
    model = als * translateMatrix * scaleMatrix;
    //Cylinder cylinder = Cylinder();
    cylinder.drawCylinder(lightingShader, model, 0.545f, 0.271f, 0.075f);

    //sphere
    translateMatrix = glm::translate(identityMatrix, glm::vec3(39.58, 14.5, -19.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.79f, 1.9f, 2.4f));
    model = als * translateMatrix * scaleMatrix;
    // HalfSphere sphere = HalfSphere();
    sphere.drawHalfSphere(lightingShader, model, 0.545f, 0.271f, 0.075f);


    //niche cube

    translateMatrix = glm::translate(identityMatrix, glm::vec3(38.6, -1.0 + 0.15, -19.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.7f, 8.0f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.392f, 0.196f, 0.039f);
    cube.setMaterialisticEimu(0.392f, 0.196f, 0.039f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);


    //glass
    translateMatrix = glm::translate(identityMatrix, glm::vec3(38.6, 7.0 + 0.15, -19.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.7f, 8.0f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.7373f, 0.6745f, 0.5843f);
    cube.setTextureProperty(glass1, glass2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);


    /* //glass majhe
     translateMatrix = glm::translate(identityMatrix, glm::vec3(38.6, 10.5 + 0.15, -18.5));
     scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.7f, .2f, 0.7f));
     model = als * translateMatrix * scaleMatrix;
     drawCube(cubeVAO, lightingShader, model, 0.392f, 0.196f, 0.039f);

     //glasslomba
     translateMatrix = glm::translate(identityMatrix, glm::vec3(39.3, 7.0 + 0.15, -18.5));
     scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 7.5f, 0.7f));
     model = als * translateMatrix * scaleMatrix;
     drawCube(cubeVAO, lightingShader, model, 0.392f, 0.196f, 0.039f);

     */


     //ekdom right er boxxxx

    translateMatrix = glm::translate(identityMatrix, glm::vec3(42.0, -1.0 + 0.15, -19.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(8.2f, 6.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
    cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    //araaarii
    translateMatrix = glm::translate(identityMatrix, glm::vec3(42.0, 0.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(8.2f, .2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(42.0, 1.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(8.2f, 0.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(42.0, 2.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(8.2f, 0.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(42.0, 3.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(8.2f, 0.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(42.0, 4.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(8.2f, 0.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(42.0, 5.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(8.2f, 0.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);


    //lombagula
    translateMatrix = glm::translate(identityMatrix, glm::vec3(42.5, -1.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 6.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(43.35, -1.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 6.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(44.35, -1.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 6.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(45.35, -1.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 6.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(46.6, -1.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 6.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(47.6, -1.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 6.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(48.6, -1.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 6.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(49.7, -1.0 + 0.15, -18.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 6.2f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);






    //lights banabo
    //lomba
    translateMatrix = glm::translate(identityMatrix, glm::vec3(-2.5, 16.0 + 0.15, -19.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.2f, 7.5f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
    cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    //chepta pataton
    translateMatrix = glm::translate(identityMatrix, glm::vec3(-3.1, 23.4 + 0.15, -19.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.8f, .5f, 2.5f));
    model = als * translateMatrix * scaleMatrix;
    cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(-2.5, 24.5 + 0.15, -19.00));
    rotateXMatrix = glm::rotate(identityMatrix, glm::radians(55.0f), glm::vec3(1.0f, 0.0f, 0.0f));
    //rotateYMatrix = glm::rotate(identityMatrix, glm::radians(89.0f), glm::vec3(0.0f, 1.0f, 0.0f));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.2f, 15.5f, 0.7f));
    model = als * translateMatrix * rotateXMatrix * scaleMatrix;
    cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);



    //triangleright
    translateMatrix = glm::translate(identityMatrix, glm::vec3(0.0, 16.0 + 0.15, -17.00));
    rotateZMatrix = glm::rotate(identityMatrix, glm::radians(-23.0f), glm::vec3(0.0f, 0.0f, 1.0f));
    rotateXMatrix = glm::rotate(identityMatrix, glm::radians(29.0f), glm::vec3(1.0f, 0.0f, 0.0f));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.9f, 3.0f, .4f));
    model = als * translateMatrix * rotateZMatrix * rotateXMatrix * scaleMatrix;
    Triangle triangle = Triangle();
    triangle.drawTriangle(lightingShader, model, 0.8039f, 0.5216f, 0.2471f);

    //triangleleft
    translateMatrix = glm::translate(identityMatrix, glm::vec3(-3.9, 16.0 + 0.15, -17.00));
    rotateZMatrix = glm::rotate(identityMatrix, glm::radians(23.0f), glm::vec3(0.0f, 0.0f, 1.0f));
    rotateXMatrix = glm::rotate(identityMatrix, glm::radians(-29.0f), glm::vec3(1.0f, 0.0f, 0.0f));
    //rotateYMatrix = glm::rotate(identityMatrix, glm::radians(180.0f), glm::vec3(0.0f, 1.0f, 0.0f));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.9f, 3.0f, .4f));
    model = als * translateMatrix * rotateZMatrix * rotateXMatrix * scaleMatrix;
    //Triangle triangle = Triangle();
    triangle.drawTriangle(lightingShader, model, 0.8039f, 0.5216f, 0.2471f);


    //sphere
    translateMatrix = glm::translate(identityMatrix, glm::vec3(-2.0, 16.0 + 0.15, -18.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.0f, .9f, 1.0f));
    model = als * translateMatrix * scaleMatrix;
    // HalfSphere sphere = HalfSphere();
    sphere.drawHalfSphere(lightingShader, model, 0.545f, 0.271f, 0.075f);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(-2.0, 16.0 + 0.15, -18.00));
    rotateXMatrix = glm::rotate(identityMatrix, glm::radians(180.0f), glm::vec3(1.0f, 0.0f, 0.0f));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.0f, .9f, 1.0f));
    model = als * translateMatrix * rotateXMatrix * scaleMatrix;
    // HalfSphere sphere = HalfSphere();
    sphere.drawHalfSphere(lightingShader, model, 0.545f, 0.271f, 0.075f);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(-2.0, 15.7 + 0.15, -19.00));
    rotateXMatrix = glm::rotate(identityMatrix, glm::radians(160.0f), glm::vec3(1.0f, 0.0f, 0.0f));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.0f, .9f, 1.0f));
    model = als * translateMatrix * rotateXMatrix * scaleMatrix;
    // HalfSphere sphere = HalfSphere();
    sphere.drawHalfSphere(lightingShader, model, 0.8039f, 0.5216f, 0.2471f);


    translateMatrix = glm::translate(identityMatrix, glm::vec3(-2.4, 16.0 + 0.15, -17.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.7f, .5f, 3.5f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);


    //dorileft
    translateMatrix = glm::translate(identityMatrix, glm::vec3(-3.8, 12.5 + 0.15, -17.00));
    rotateZMatrix = glm::rotate(identityMatrix, glm::radians(-23.0f), glm::vec3(0.0f, 0.0f, 1.0f));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 4.3f, .2f));
    model = als * translateMatrix * rotateZMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    //doriright
    translateMatrix = glm::translate(identityMatrix, glm::vec3(-.7, 12.5 + 0.15, -17.00));
    rotateZMatrix = glm::rotate(identityMatrix, glm::radians(23.0f), glm::vec3(0.0f, 0.0f, 1.0f));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 4.3f, .2f));
    model = als * translateMatrix * rotateZMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    //thala
    translateMatrix = glm::translate(identityMatrix, glm::vec3(-2.0, 12.7 + 0.15, -17.00));
    rotateXMatrix = glm::rotate(identityMatrix, glm::radians(180.0f), glm::vec3(1.0f, 0.0f, 0.0f));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.0f, 1.2f, 1.0f));
    model = als * translateMatrix * rotateXMatrix * scaleMatrix;
    // HalfSphere sphere = HalfSphere();
    sphere.drawHalfSphere(lightingShader, model, 0.8039f, 0.5216f, 0.2471f);












    //arektaaaaaaaaaaaaaaaaaaaaaaaaaaaaa golla

     //lomba
    translateMatrix = glm::translate(identityMatrix, glm::vec3(19.6, 16.0 + 0.15, -19.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.2f, 7.5f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
    cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    //chepta pataton
    translateMatrix = glm::translate(identityMatrix, glm::vec3(19.0, 23.4 + 0.15, -19.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.8f, .5f, 2.5f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
    cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);


    translateMatrix = glm::translate(identityMatrix, glm::vec3(19.6, 24.5 + 0.15, -19.00));
    rotateXMatrix = glm::rotate(identityMatrix, glm::radians(55.0f), glm::vec3(1.0f, 0.0f, 0.0f));
    //rotateYMatrix = glm::rotate(identityMatrix, glm::radians(89.0f), glm::vec3(0.0f, 1.0f, 0.0f));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.2f, 15.5f, 0.7f));
    model = als * translateMatrix * rotateXMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
    cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);


    //triangleright
    translateMatrix = glm::translate(identityMatrix, glm::vec3(22.1, 16.0 + 0.15, -17.00));
    rotateZMatrix = glm::rotate(identityMatrix, glm::radians(-23.0f), glm::vec3(0.0f, 0.0f, 1.0f));
    rotateXMatrix = glm::rotate(identityMatrix, glm::radians(29.0f), glm::vec3(1.0f, 0.0f, 0.0f));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.9f, 3.0f, .4f));
    model = als * translateMatrix * rotateZMatrix * rotateXMatrix * scaleMatrix;
    //Triangle triangle = Triangle();
    triangle.drawTriangle(lightingShader, model, 0.8039f, 0.5216f, 0.2471f);

    //triangleleft
    translateMatrix = glm::translate(identityMatrix, glm::vec3(18.2, 16.0 + 0.15, -17.00));
    rotateZMatrix = glm::rotate(identityMatrix, glm::radians(23.0f), glm::vec3(0.0f, 0.0f, 1.0f));
    rotateXMatrix = glm::rotate(identityMatrix, glm::radians(-29.0f), glm::vec3(1.0f, 0.0f, 0.0f));
    //rotateYMatrix = glm::rotate(identityMatrix, glm::radians(180.0f), glm::vec3(0.0f, 1.0f, 0.0f));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.9f, 3.0f, .4f));
    model = als * translateMatrix * rotateZMatrix * rotateXMatrix * scaleMatrix;
    //Triangle triangle = Triangle();
    triangle.drawTriangle(lightingShader, model, 0.8039f, 0.5216f, 0.2471f);


    //sphere
    translateMatrix = glm::translate(identityMatrix, glm::vec3(20.10, 16.0 + 0.15, -18.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.0f, .9f, 1.0f));
    model = als * translateMatrix * scaleMatrix;
    // HalfSphere sphere = HalfSphere();
    sphere.drawHalfSphere(lightingShader, model, 0.545f, 0.271f, 0.075f);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(20.10, 16.0 + 0.15, -18.00));
    rotateXMatrix = glm::rotate(identityMatrix, glm::radians(180.0f), glm::vec3(1.0f, 0.0f, 0.0f));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.0f, .9f, 1.0f));
    model = als * translateMatrix * rotateXMatrix * scaleMatrix;
    // HalfSphere sphere = HalfSphere();
    sphere.drawHalfSphere(lightingShader, model, 0.545f, 0.271f, 0.075f);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(20.10, 15.7 + 0.15, -19.00));
    rotateXMatrix = glm::rotate(identityMatrix, glm::radians(160.0f), glm::vec3(1.0f, 0.0f, 0.0f));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.0f, .9f, 1.0f));
    model = als * translateMatrix * rotateXMatrix * scaleMatrix;
    // HalfSphere sphere = HalfSphere();
    sphere.drawHalfSphere(lightingShader, model, 0.8039f, 0.5216f, 0.2471f);


    translateMatrix = glm::translate(identityMatrix, glm::vec3(19.7, 16.0 + 0.15, -17.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.7f, .5f, 3.5f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);


    //dorileft
    translateMatrix = glm::translate(identityMatrix, glm::vec3(18.3, 12.5 + 0.15, -17.00));
    rotateZMatrix = glm::rotate(identityMatrix, glm::radians(-23.0f), glm::vec3(0.0f, 0.0f, 1.0f));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 4.3f, .2f));
    model = als * translateMatrix * rotateZMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    //doriright
    translateMatrix = glm::translate(identityMatrix, glm::vec3(21.4, 12.5 + 0.15, -17.00));
    rotateZMatrix = glm::rotate(identityMatrix, glm::radians(23.0f), glm::vec3(0.0f, 0.0f, 1.0f));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 4.3f, .2f));
    model = als * translateMatrix * rotateZMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    //thala
    translateMatrix = glm::translate(identityMatrix, glm::vec3(20.10, 12.7 + 0.15, -17.00));
    rotateXMatrix = glm::rotate(identityMatrix, glm::radians(180.0f), glm::vec3(1.0f, 0.0f, 0.0f));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.0f, 1.2f, 1.0f));
    model = als * translateMatrix * rotateXMatrix * scaleMatrix;
    // HalfSphere sphere = HalfSphere();
    sphere.drawHalfSphere(lightingShader, model, 0.8039f, 0.5216f, 0.2471f);





    ///AROOOOOOOOOOOOO
     //arektaaaaaaaaaaaaaaaaaaaaaaaaaaaaa golla

     //lomba
    translateMatrix = glm::translate(identityMatrix, glm::vec3(33.2, 16.0 + 0.15, -19.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.2f, 7.5f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
    cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    //chepta pataton
    translateMatrix = glm::translate(identityMatrix, glm::vec3(32.6, 23.4 + 0.15, -19.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.8f, .5f, 2.5f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
    cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(33.2, 24.5 + 0.15, -19.00));
    rotateXMatrix = glm::rotate(identityMatrix, glm::radians(55.0f), glm::vec3(1.0f, 0.0f, 0.0f));
    //rotateYMatrix = glm::rotate(identityMatrix, glm::radians(89.0f), glm::vec3(0.0f, 1.0f, 0.0f));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.2f, 15.5f, 0.7f));
    model = als * translateMatrix * rotateXMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
    cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);



    //triangleright
    translateMatrix = glm::translate(identityMatrix, glm::vec3(35.7, 16.0 + 0.15, -17.00));
    rotateZMatrix = glm::rotate(identityMatrix, glm::radians(-23.0f), glm::vec3(0.0f, 0.0f, 1.0f));
    rotateXMatrix = glm::rotate(identityMatrix, glm::radians(29.0f), glm::vec3(1.0f, 0.0f, 0.0f));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.9f, 3.0f, .4f));
    model = als * translateMatrix * rotateZMatrix * rotateXMatrix * scaleMatrix;
    //Triangle triangle = Triangle();
    triangle.drawTriangle(lightingShader, model, 0.8039f, 0.5216f, 0.2471f);

    //triangleleft
    translateMatrix = glm::translate(identityMatrix, glm::vec3(31.8, 16.0 + 0.15, -17.00));
    rotateZMatrix = glm::rotate(identityMatrix, glm::radians(23.0f), glm::vec3(0.0f, 0.0f, 1.0f));
    rotateXMatrix = glm::rotate(identityMatrix, glm::radians(-29.0f), glm::vec3(1.0f, 0.0f, 0.0f));
    //rotateYMatrix = glm::rotate(identityMatrix, glm::radians(180.0f), glm::vec3(0.0f, 1.0f, 0.0f));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.9f, 3.0f, .4f));
    model = als * translateMatrix * rotateZMatrix * rotateXMatrix * scaleMatrix;
    //Triangle triangle = Triangle();
    triangle.drawTriangle(lightingShader, model, 0.8039f, 0.5216f, 0.2471f);


    //sphere
    translateMatrix = glm::translate(identityMatrix, glm::vec3(33.7, 16.0 + 0.15, -18.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.0f, .9f, 1.0f));
    model = als * translateMatrix * scaleMatrix;
    // HalfSphere sphere = HalfSphere();
    sphere.drawHalfSphere(lightingShader, model, 0.545f, 0.271f, 0.075f);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(33.70, 16.0 + 0.15, -18.00));
    rotateXMatrix = glm::rotate(identityMatrix, glm::radians(180.0f), glm::vec3(1.0f, 0.0f, 0.0f));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.0f, .9f, 1.0f));
    model = als * translateMatrix * rotateXMatrix * scaleMatrix;
    // HalfSphere sphere = HalfSphere();
    sphere.drawHalfSphere(lightingShader, model, 0.545f, 0.271f, 0.075f);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(33.70, 15.7 + 0.15, -19.00));
    rotateXMatrix = glm::rotate(identityMatrix, glm::radians(160.0f), glm::vec3(1.0f, 0.0f, 0.0f));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.0f, .9f, 1.0f));
    model = als * translateMatrix * rotateXMatrix * scaleMatrix;
    // HalfSphere sphere = HalfSphere();
    sphere.drawHalfSphere(lightingShader, model, 0.8039f, 0.5216f, 0.2471f);


    translateMatrix = glm::translate(identityMatrix, glm::vec3(33.3, 16.0 + 0.15, -17.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.7f, .5f, 3.5f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);


    //dorileft
    translateMatrix = glm::translate(identityMatrix, glm::vec3(31.9, 12.5 + 0.15, -17.00));
    rotateZMatrix = glm::rotate(identityMatrix, glm::radians(-23.0f), glm::vec3(0.0f, 0.0f, 1.0f));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 4.3f, .2f));
    model = als * translateMatrix * rotateZMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    //doriright
    translateMatrix = glm::translate(identityMatrix, glm::vec3(35.0, 12.5 + 0.15, -17.00));
    rotateZMatrix = glm::rotate(identityMatrix, glm::radians(23.0f), glm::vec3(0.0f, 0.0f, 1.0f));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 4.3f, .2f));
    model = als * translateMatrix * rotateZMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    //thala
    translateMatrix = glm::translate(identityMatrix, glm::vec3(33.70, 12.7 + 0.15, -17.00));
    rotateXMatrix = glm::rotate(identityMatrix, glm::radians(180.0f), glm::vec3(1.0f, 0.0f, 0.0f));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.0f, 1.2f, 1.0f));
    model = als * translateMatrix * rotateXMatrix * scaleMatrix;
    // HalfSphere sphere = HalfSphere();
    sphere.drawHalfSphere(lightingShader, model, 0.8039f, 0.5216f, 0.2471f);






    /////last    tttttttttttttt
    // //arektaaaaaaaaaaaaaaaaaaaaaaaaaaaaa golla

     //lomba
    translateMatrix = glm::translate(identityMatrix, glm::vec3(45.5, 16.0 + 0.15, -19.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.2f, 7.5f, 0.7f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
    cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    //chepta pataton
    translateMatrix = glm::translate(identityMatrix, glm::vec3(44.9, 23.4 + 0.15, -19.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.8f, .5f, 2.5f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
    cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);


    translateMatrix = glm::translate(identityMatrix, glm::vec3(45.5, 24.5 + 0.15, -19.00));
    rotateXMatrix = glm::rotate(identityMatrix, glm::radians(55.0f), glm::vec3(1.0f, 0.0f, 0.0f));
    //rotateYMatrix = glm::rotate(identityMatrix, glm::radians(89.0f), glm::vec3(0.0f, 1.0f, 0.0f));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.2f, 15.5f, 0.7f));
    model = als * translateMatrix * rotateXMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
    cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);



    //triangleright
    translateMatrix = glm::translate(identityMatrix, glm::vec3(48.0, 16.0 + 0.15, -17.00));
    rotateZMatrix = glm::rotate(identityMatrix, glm::radians(-23.0f), glm::vec3(0.0f, 0.0f, 1.0f));
    rotateXMatrix = glm::rotate(identityMatrix, glm::radians(29.0f), glm::vec3(1.0f, 0.0f, 0.0f));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.9f, 3.0f, .4f));
    model = als * translateMatrix * rotateZMatrix * rotateXMatrix * scaleMatrix;
    //Triangle triangle = Triangle();
    triangle.drawTriangle(lightingShader, model, 0.8039f, 0.5216f, 0.2471f);

    //triangleleft
    translateMatrix = glm::translate(identityMatrix, glm::vec3(44.1, 16.0 + 0.15, -17.00));
    rotateZMatrix = glm::rotate(identityMatrix, glm::radians(23.0f), glm::vec3(0.0f, 0.0f, 1.0f));
    rotateXMatrix = glm::rotate(identityMatrix, glm::radians(-29.0f), glm::vec3(1.0f, 0.0f, 0.0f));
    //rotateYMatrix = glm::rotate(identityMatrix, glm::radians(180.0f), glm::vec3(0.0f, 1.0f, 0.0f));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.9f, 3.0f, .4f));
    model = als * translateMatrix * rotateZMatrix * rotateXMatrix * scaleMatrix;
    //Triangle triangle = Triangle();
    triangle.drawTriangle(lightingShader, model, 0.8039f, 0.5216f, 0.2471f);


    //sphere
    translateMatrix = glm::translate(identityMatrix, glm::vec3(46.0, 16.0 + 0.15, -18.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.0f, .9f, 1.0f));
    model = als * translateMatrix * scaleMatrix;
    // HalfSphere sphere = HalfSphere();
    sphere.drawHalfSphere(lightingShader, model, 0.545f, 0.271f, 0.075f);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(46.0, 16.0 + 0.15, -18.00));
    rotateXMatrix = glm::rotate(identityMatrix, glm::radians(180.0f), glm::vec3(1.0f, 0.0f, 0.0f));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.0f, .9f, 1.0f));
    model = als * translateMatrix * rotateXMatrix * scaleMatrix;
    // HalfSphere sphere = HalfSphere();
    sphere.drawHalfSphere(lightingShader, model, 0.545f, 0.271f, 0.075f);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(46.0, 15.7 + 0.15, -19.00));
    rotateXMatrix = glm::rotate(identityMatrix, glm::radians(160.0f), glm::vec3(1.0f, 0.0f, 0.0f));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.0f, .9f, 1.0f));
    model = als * translateMatrix * rotateXMatrix * scaleMatrix;
    // HalfSphere sphere = HalfSphere();
    sphere.drawHalfSphere(lightingShader, model, 0.8039f, 0.5216f, 0.2471f);


    translateMatrix = glm::translate(identityMatrix, glm::vec3(45.6, 16.0 + 0.15, -17.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.7f, .5f, 3.5f));
    model = als * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);


    //dorileft
    translateMatrix = glm::translate(identityMatrix, glm::vec3(44.2, 12.5 + 0.15, -17.00));
    rotateZMatrix = glm::rotate(identityMatrix, glm::radians(-23.0f), glm::vec3(0.0f, 0.0f, 1.0f));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 4.3f, .2f));
    model = als * translateMatrix * rotateZMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    //doriright
    translateMatrix = glm::translate(identityMatrix, glm::vec3(47.3, 12.5 + 0.15, -17.00));
    rotateZMatrix = glm::rotate(identityMatrix, glm::radians(23.0f), glm::vec3(0.0f, 0.0f, 1.0f));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 4.3f, .2f));
    model = als * translateMatrix * rotateZMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
    cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);

    //thala
    translateMatrix = glm::translate(identityMatrix, glm::vec3(46.0, 12.7 + 0.15, -17.00));
    rotateXMatrix = glm::rotate(identityMatrix, glm::radians(180.0f), glm::vec3(1.0f, 0.0f, 0.0f));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.0f, 1.2f, 1.0f));
    model = als * translateMatrix * rotateXMatrix * scaleMatrix;
    // HalfSphere sphere = HalfSphere();
    sphere.drawHalfSphere(lightingShader, model, 0.8039f, 0.5216f, 0.2471f);


    //candle

    float xOffset = 50.0f; // Initial X position of the first column
    float zOffset = -18.0f; // Initial Z position of the first row
    float yHeight = 24.0f + 0.15f; // Y position for all candles

    float xGap = 5.0f; // Gap between columns
    float zGap = 5.0f; // Gap between rows

    for (int i = 0; i < 10; ++i) { // Rows
        for (int j = 0; j < 10; ++j) { // Columns
            // Candle body
            glm::mat4 translateMatrix = glm::translate(identityMatrix, glm::vec3(xOffset - j * xGap, yHeight, zOffset + i * zGap));
            glm::mat4 scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.2f, 1.3f, 0.2f));
            glm::mat4 model = als * translateMatrix * scaleMatrix;
            cube.setMaterialisticEimu(1.0f, 1.0f, 1.0f);
            cube.drawCubeWithMaterialisticProperty(lightingShader, model);

            // Candle top
            translateMatrix = glm::translate(identityMatrix, glm::vec3(xOffset - j * xGap + 0.1f, yHeight + 1.3f + 0.15f, zOffset + i * zGap));
            scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.09f, 1.0f, 0.1f));
            model = als * translateMatrix * scaleMatrix;
            sphere.drawHalfSphere(lightingShader, model, 1.0f, 1.0f, 0.0);
        }
    }












}




#pragma once