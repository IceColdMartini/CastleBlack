#pragma once
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "shader.h"
#include "drawcube.h"
#include "sphere.h"
#include "cylinder.h"
#include "halfs.h"
#include "cube.h"

void floorFireHolder1(Cube& cube, Shader& lightingShader, glm::mat4 als)
{

	glm::mat4 temp = glm::mat4(1.0f);
	glm::mat4 temp2 = glm::mat4(1.0f);
	glm::mat4 identityMatrix = glm::mat4(1.0f); // make sure to initialize matrix to identity matrix first
	glm::mat4 translateMatrix, rotateXMatrix, rotateYMatrix, rotateZMatrix, scaleMatrix, ztranslate, xtranslate;

	//////////////////////////////////sphere and cylinder
	HalfSphere halfsphere = HalfSphere();
	float rotateAngle_Z = 0.0f;
	glm::mat4 modelForSphere = glm::mat4(1.0f);
	glm::mat4 modelForCylinder = glm::mat4(1.0f);
	{
		///top

		translateMatrix = glm::translate(identityMatrix, glm::vec3(0.0, 0.0, 0.0));
		als = als * translateMatrix;
		halfsphere.drawHalfSphere(lightingShader, als, 0.545f, 0.270f, 0.075f);
		als = temp;
		scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.0, -1.0, 1.0));
		translateMatrix = glm::translate(identityMatrix, glm::vec3(0.0, 2.0, 0.0));
		als = als * translateMatrix * scaleMatrix;
		halfsphere.drawHalfSphere(lightingShader, als, 0.545f, 0.270f, 0.075f);
		als = temp;
	}
	{
		//stand
		temp = als;
		translateMatrix = glm::translate(identityMatrix, glm::vec3(0.35 - .5, 1.29, -.5));
		//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(rotateAngle_Y + i), glm::vec3(0.0f, 1.0f, 0.0f));
		scaleMatrix = glm::scale(identityMatrix, glm::vec3(.25, 1.0, .25));
		als = als * scaleMatrix;
		cube.setMaterialisticEimu(0.545f, 0.270f, 0.075f);
		//cube.drawCubeWithMaterialisticProperty(lightingShader, als);
		als = temp;
	}
}


void floorFireHolder2(Cube& cube, Shader& lightingShader, glm::mat4 als)
{

	glm::mat4 temp = glm::mat4(1.0f);
	glm::mat4 temp2 = glm::mat4(1.0f);
	glm::mat4 identityMatrix = glm::mat4(1.0f); // make sure to initialize matrix to identity matrix first
	glm::mat4 translateMatrix, rotateXMatrix, rotateYMatrix, rotateZMatrix, scaleMatrix, ztranslate, xtranslate;

	//////////////////////////////////sphere and cylinder
	HalfSphere halfsphere = HalfSphere();
	float rotateAngle_Z = 0.0f;
	glm::mat4 modelForSphere = glm::mat4(1.0f);
	glm::mat4 modelForCylinder = glm::mat4(1.0f);
	{
		///top
		temp = als;
		scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.0, -1.0, 1.0));
		translateMatrix = glm::translate(identityMatrix, glm::vec3(0.0, 2.2, 0.0));
		als = als * translateMatrix * scaleMatrix;
		halfsphere.drawHalfSphere(lightingShader, als, 0.545f, 0.270f, 0.075f);
		als = temp;
	}
	{
		//stand
		temp = als;
		translateMatrix = glm::translate(identityMatrix, glm::vec3(0.0, -3.0, 0.0));
		//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(rotateAngle_Y + i), glm::vec3(0.0f, 1.0f, 0.0f));
		scaleMatrix = glm::scale(identityMatrix, glm::vec3(.25, 3.0, .25));
		als = als * translateMatrix * scaleMatrix;
		cube.setMaterialisticEimu(0.545f, 0.270f, 0.075f);
		cube.drawCubeWithMaterialisticProperty(lightingShader, als);
		als = temp;
	}

	{
		//bottom
		temp = als;
		translateMatrix = glm::translate(identityMatrix, glm::vec3(-.75 - .125, -3.0, -1.0));
		//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(rotateAngle_Y + i), glm::vec3(0.0f, 1.0f, 0.0f));
		scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.0, .25, 2.0));
		als = als * translateMatrix * scaleMatrix;
		cube.setMaterialisticEimu(0.545f, 0.270f, 0.075f);
		cube.drawCubeWithMaterialisticProperty(lightingShader, als);
		als = temp;

	}


	//leg 1
	temp = als;
	translateMatrix = glm::translate(identityMatrix, glm::vec3(0.0, 0.0, 0.0));
	rotateZMatrix = glm::rotate(identityMatrix, glm::radians(30.0f), glm::vec3(0.0f, 0.0f, 1.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.25, 3.0, 0.25));
	als = als * translateMatrix * rotateZMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, als, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, als);
	als = temp;


	//leg 2
	temp = als;

	rotateYMatrix = glm::rotate(identityMatrix, glm::radians(-30.0f), glm::vec3(0.0f, 0.0f, 1.0f));
	//scaleMatrix = glm::scale(identityMatrix, glm::vec3(.25, 1.0, 0.25));
	als = als * translateMatrix * rotateYMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, als, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, als);
	als = temp;


	//leg 3
	temp = als;

	//translateMatrix = glm::translate(identityMatrix, glm::vec3(0.0, 0.0, 0.0));
	rotateYMatrix = glm::rotate(identityMatrix, glm::radians(-30.0f), glm::vec3(-1.0f, 0.0f, -1.0f));
	//scaleMatrix = glm::scale(identityMatrix, glm::vec3(.25, 1.0, 0.25));
	als = als * translateMatrix * rotateYMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, als, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, als);
	als = temp;

	//leg 4
	//translateMatrix = glm::translate(identityMatrix, glm::vec3(0.0, 0.0, 0.0));
	temp = als;
	rotateYMatrix = glm::rotate(identityMatrix, glm::radians(30.0f), glm::vec3(-1.0f, 0.0f, -1.0f));
	//scaleMatrix = glm::scale(identityMatrix, glm::vec3(.25, 1.0, 0.25));
	als = als * translateMatrix * rotateYMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, als, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, als);
	als = temp;


}

#pragma once
