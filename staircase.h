#pragma once
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "shader.h"
#include "drawcube.h"
#include "sphere.h"
#include "cylinder.h"
#include "cube.h"


void stairCase(Cube& cube, Shader& lightingShader, glm::mat4 als)
{
	//////////////////////////////////sphere and cylinder
	Sphere sphere = Sphere();
	Cylinder cylinder2 = Cylinder(.1, 1.6);
	glm::mat4 temp = glm::mat4(1.0f);
	glm::mat4 identityMatrix = glm::mat4(1.0f); // make sure to initialize matrix to identity matrix first
	glm::mat4 translateMatrix, rotateXMatrix, rotateYMatrix, rotateZMatrix, scaleMatrix, model, ttranslate;
	float rotateAngle_Z = 25.0;
	glm::mat4 modelForSphere = glm::mat4(1.0f);
	glm::mat4 modelForCylinder = glm::mat4(1.0f);

	//stairs
	translateMatrix = glm::translate(identityMatrix, glm::vec3(0.0, 0.0, 0.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.5, .25, 3.0));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.6, 0.3f, 0.125f);



	for (float i = 0.0; i <= 13.0; i = i + 1.0)
	{
		//siri
		ttranslate = glm::translate(identityMatrix, glm::vec3(static_cast<float>(i) * .5, static_cast<float>(i) * .25, 0.0f));
		scaleMatrix = glm::scale(identityMatrix, glm::vec3(.5, .25, 3.0));
		model = als * ttranslate * scaleMatrix;
		cube.setMaterialisticEimu(0.6, 0.3f, 0.125f);
		cube.drawCubeWithMaterialisticProperty(lightingShader, model);
		//drawCube(cubeVAO, lightingShader, model  , 0.6, 0.3f, 0.125f);

		//bam hater pillar
		//ttranslate = glm::translate(identityMatrix, glm::vec3((static_cast<float>(i) * .5)+.2, (static_cast<float>(i) * .25)+1.05, 0.15f));
		//scaleMatrix = glm::scale(identityMatrix, glm::vec3(.25, 1.5, .25));
		//modelForCylinder = modelForCylinder * ttranslate ;

		//model = als * ttranslate * scaleMatrix;
		//drawCube(cubeVAO, lightingShader, model , 0.6, 0.3f, 0.125f);

		//dan hater pillar
		ttranslate = glm::translate(identityMatrix, glm::vec3((static_cast<float>(i) * .5) + .125, (static_cast<float>(i) * .25) + .25, 2.75f));
		scaleMatrix = glm::scale(identityMatrix, glm::vec3(.25, 1.5, .25));
		model = als * ttranslate * scaleMatrix;
		//drawCube(cubeVAO, lightingShader, model, 0.6, 0.3f, 0.125f);
	}


	for (float j = 0.0; j < 14.0; j++)
	{

		translateMatrix = glm::translate(identityMatrix, glm::vec3(-19.8, 8.9, 5.0));
		modelForCylinder = modelForCylinder * translateMatrix;
		ttranslate = glm::translate(identityMatrix, glm::vec3((static_cast<float>(j) * .5) + .125, (static_cast<float>(j) * .25) + .25, 0.0));
		cylinder2.drawCylinder(lightingShader, modelForCylinder * ttranslate, 0.6, 0.3f, 0.125f);
		cylinder2.drawCylinder(lightingShader, modelForCylinder * ttranslate * (glm::rotate(identityMatrix, glm::radians(90.0f), glm::vec3(0.0f, 1.0f, 0.0f))), 0.6, 0.3f, 0.125f);
		modelForCylinder = temp;


		temp = glm::mat4(1.0f);
		temp = modelForCylinder;
		translateMatrix = glm::translate(identityMatrix, glm::vec3(-19.8, 8.9, 0.0));
		modelForCylinder = modelForCylinder * translateMatrix;
		ttranslate = glm::translate(identityMatrix, glm::vec3((static_cast<float>(j) * .5) + .125, (static_cast<float>(j) * .25) + .25, 2.75));
		cylinder2.drawCylinder(lightingShader, modelForCylinder * ttranslate, 0.6, 0.3f, 0.125f);
		cylinder2.drawCylinder(lightingShader, modelForCylinder * ttranslate * (glm::rotate(identityMatrix, glm::radians(90.0f), glm::vec3(0.0f, 1.0f, 0.0f))), 0.6, 0.3f, 0.125f);
		modelForCylinder = temp;

	}


	//bam hater handle
	translateMatrix = glm::translate(identityMatrix, glm::vec3(0.0, 1.5, 0.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(8.0, .5, .25));
	rotateZMatrix = glm::rotate(identityMatrix, glm::radians(rotateAngle_Z), glm::vec3(0.0f, 0.0f, 1.0f));
	model = als * translateMatrix * rotateZMatrix * scaleMatrix;
	cube.setMaterialisticEimu(0.6, 0.3f, 0.125f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	//drawCube(cubeVAO, lightingShader, model, 0.6, 0.3f, 0.125f);
	sphere.setRadius(1.0);
	modelForSphere = modelForSphere * translateMatrix;
	//sphere.drawSphere(lightingShader, modelForSphere, 0.6, 0.3f, 0.125f);

	//dan hater handle
	translateMatrix = glm::translate(identityMatrix, glm::vec3(0.0, 1.5, 2.75));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(8.0, .5, .25));
	rotateZMatrix = glm::rotate(identityMatrix, glm::radians(rotateAngle_Z), glm::vec3(0.0f, 0.0f, 1.0f));
	model = als * translateMatrix * rotateZMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.6, 0.3f, 0.125f);
	cube.setMaterialisticEimu(0.6, 0.3f, 0.125f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	Sphere sphere2 = Sphere(.3);
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-12.8, 12.0, 5.0));
	temp = modelForSphere;
	modelForSphere = modelForSphere * translateMatrix;
	sphere2.drawSphere(lightingShader, modelForSphere, 0.6, 0.3f, 0.125f);

	modelForSphere = temp;
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-20.1, 8.8, 5.0));
	modelForSphere = modelForSphere * translateMatrix;
	sphere2.drawSphere(lightingShader, modelForSphere, 0.6, 0.3f, 0.125f);

	modelForSphere = temp;
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-20.1, 8.6, 2.0));
	modelForSphere = modelForSphere * translateMatrix;
	sphere2.drawSphere(lightingShader, modelForSphere, 0.6, 0.3f, 0.125f);

	modelForSphere = temp;
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-12.8, 11.9, 1.0));
	modelForSphere = modelForSphere * translateMatrix;
	sphere2.drawSphere(lightingShader, modelForSphere, 0.6, 0.3f, 0.125f);








}


#pragma once
