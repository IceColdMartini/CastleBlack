#pragma once
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "shader.h"
#include "drawcube.h"
#include "sphere.h"
#include "cylinder.h"

void wallFireHolder(Cube& cube, Shader& lightingShader, glm::mat4 als)
{

	glm::mat4 temp = glm::mat4(1.0f);
	glm::mat4 temp2 = glm::mat4(1.0f);
	glm::mat4 identityMatrix = glm::mat4(1.0f); // make sure to initialize matrix to identity matrix first
	glm::mat4 translateMatrix, rotateXMatrix, rotateYMatrix, rotateZMatrix, scaleMatrix, ztranslate, xtranslate;

	//////////////////////////////////sphere and cylinder
	Sphere sphere1 = Sphere();

	glm::mat4 modelForSphere = glm::mat4(1.0f);
	glm::mat4 modelForCylinder = glm::mat4(1.0f);

	{
		///bottom
		temp = als;
		temp2 = modelForCylinder;
		Cylinder cylinder1 = Cylinder(.1, 1.5);
		translateMatrix = glm::translate(identityMatrix, glm::vec3(0.0f, 0.75, 0.0f));
		rotateZMatrix = glm::rotate(identityMatrix, glm::radians(-35.0f), glm::vec3(0.0f, 0.0f, 1.0f));
		als = als * modelForCylinder * translateMatrix * rotateZMatrix;
		cylinder1.drawCylinder(lightingShader, als, 0.545f, 0.270f, 0.075f);
		cylinder1.drawCylinder(lightingShader, als * (glm::rotate(identityMatrix, glm::radians(90.0f), glm::vec3(0.0f, 1.0f, 0.0f))), 0.545f, 0.270f, 0.075f);
		als = temp;
		modelForCylinder = temp2;


		//stand 1
		temp = als;
		temp2 = modelForCylinder;
		Cylinder cylinder2 = Cylinder(.05, .8);
		translateMatrix = glm::translate(identityMatrix, glm::vec3(-0.1f, 1.1, 0.0f));
		rotateZMatrix = glm::rotate(identityMatrix, glm::radians(-90.0f), glm::vec3(0.0f, 0.0f, 1.0f));
		als = als * modelForCylinder * translateMatrix * rotateZMatrix;
		cylinder2.drawCylinder(lightingShader, als, 0.545f, 0.270f, 0.075f);
		cylinder2.drawCylinder(lightingShader, als * (glm::rotate(identityMatrix, glm::radians(90.0f), glm::vec3(0.0f, 1.0f, 0.0f))), 0.545f, 0.270f, 0.075f);
		als = temp;
		modelForCylinder = temp2;

		temp = als;
		temp2 = modelForCylinder;
		Cylinder cylinder3 = Cylinder(.05, 0.5);
		translateMatrix = glm::translate(identityMatrix, glm::vec3(-0.25f, 0.7, 0.0f));
		rotateZMatrix = glm::rotate(identityMatrix, glm::radians(-90.0f), glm::vec3(0.0f, 0.0f, 1.0f));
		als = als * modelForCylinder * translateMatrix * rotateZMatrix;
		cylinder3.drawCylinder(lightingShader, als, 0.545f, 0.270f, 0.075f);
		cylinder3.drawCylinder(lightingShader, als * (glm::rotate(identityMatrix, glm::radians(90.0f), glm::vec3(0.0f, 1.0f, 0.0f))), 0.545f, 0.270f, 0.075f);
		als = temp;
		modelForCylinder = temp2;
	}
	//////////////////////
	/*
	float rotateAngle_Y = 0.0;
	//base
	for (float i = 0.0f; i < 360.0f; i += 2.50f) {
		//Center
		temp = als;
		translateMatrix = glm::translate(identityMatrix, glm::vec3(0.35, 1.29, 0.0));
		rotateYMatrix = glm::rotate(identityMatrix, glm::radians(rotateAngle_Y + i), glm::vec3(0.0f, 1.0f, 0.0f));
		scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.35, 0.15, 0.25));
		als = als * translateMatrix * rotateYMatrix * scaleMatrix;
		drawCube(cubeVAO, lightingShader, als, 0.0f, 0.0f, 0.0f); //this model is later sent to the vertex shader. //altogether is a matrix that is multiplied with every parts of the bed, so everything is part of Altogether. when rotated, everything is rotated AllTogether
		//glBindVertexArray(VAO);
		als = temp;
	}
	*/
	temp = als;
	translateMatrix = glm::translate(identityMatrix, glm::vec3(0.35 - .5, 1.29, -.5));
	//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(rotateAngle_Y + i), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.0, 0.15, 1.0));
	als = als * translateMatrix * scaleMatrix;

	//drawCube(cubeVAO, lightingShader, als, 0.0f, 0.0f, 0.0f); //this model is later sent to the vertex shader. //altogether is a matrix that is multiplied with every parts of the bed, so everything is part of Altogether. when rotated, everything is rotated AllTogether

	cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, als);
	als = temp;
}
#pragma once
