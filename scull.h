#pragma once
#pragma once
#pragma once
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "shader.h"
#include "drawcube.h"
#include "sphere.h"
#include "cylinder.h"
#include "chair.h"
#include <random>
#include "dining.h"
#include "floorfire.h"
#include "wallfireholder.h"
#include "roundTable.h"
#include "jharbati.h"
#include "ebook.h"
#include "torus.h"
#include "benchtool.h"
#include "lamp.h"

void scull(Cube& cube, Shader& lightingShader, glm::mat4 als)
{

    glm::mat4 temp = glm::mat4(1.0f);
    glm::mat4 identityMatrix = glm::mat4(1.0f); // make sure to initialize matrix to identity matrix first
    glm::mat4 translateMatrix, rotateXMatrix, rotateYMatrix, rotateZMatrix, scaleMatrix, ztranslate, xtranslate, model;
    float rotateAngle_Y = 0.0;





    //triangleright
    translateMatrix = glm::translate(identityMatrix, glm::vec3(-1.0, 4 + 0.15, 8.00));
    rotateZMatrix = glm::rotate(identityMatrix, glm::radians(-23.0f), glm::vec3(0.0f, 0.0f, 1.0f));
    rotateXMatrix = glm::rotate(identityMatrix, glm::radians(29.0f), glm::vec3(1.0f, 0.0f, 0.0f));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.9f, 3.0f, .4f));
    model = als * translateMatrix * rotateZMatrix * rotateXMatrix * scaleMatrix;
    Triangle triangle = Triangle();
    triangle.drawTriangle(lightingShader, model, 0.8039f, 0.5216f, 0.2471f);

    //triangleleft
    translateMatrix = glm::translate(identityMatrix, glm::vec3(1.0, 4 + 0.15, 8.00));
    rotateZMatrix = glm::rotate(identityMatrix, glm::radians(23.0f), glm::vec3(0.0f, 0.0f, 1.0f));
    rotateXMatrix = glm::rotate(identityMatrix, glm::radians(-29.0f), glm::vec3(1.0f, 0.0f, 0.0f));
    //rotateYMatrix = glm::rotate(identityMatrix, glm::radians(180.0f), glm::vec3(0.0f, 1.0f, 0.0f));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.9f, 3.0f, .4f));
    model = als * translateMatrix * rotateZMatrix * rotateXMatrix * scaleMatrix;
    //Triangle triangle = Triangle();
    triangle.drawTriangle(lightingShader, model, 0.8039f, 0.5216f, 0.2471f);


    //sphere
    translateMatrix = glm::translate(identityMatrix, glm::vec3(0.0, 4 + 0.15, 8.00));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.0f, .9f, 1.0f));
    model = als * translateMatrix * scaleMatrix;
    HalfSphere sphere = HalfSphere();
    sphere.drawHalfSphere(lightingShader, model, 0.545f, 0.271f, 0.075f);



    translateMatrix = glm::translate(identityMatrix, glm::vec3(0.0, 4 + 0.15, 8.00));
    rotateXMatrix = glm::rotate(identityMatrix, glm::radians(160.0f), glm::vec3(1.0f, 0.0f, 0.0f));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.0f, .9f, 1.0f));
    model = als * translateMatrix * rotateXMatrix * scaleMatrix;
    // HalfSphere sphere = HalfSphere();
    sphere.drawHalfSphere(lightingShader, model, 0.8039f, 0.5216f, 0.2471f);





}
#pragma once
