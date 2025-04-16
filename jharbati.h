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

void jharbati(Cube& cube, Shader& lightingShader, glm::mat4 als)
{

	glm::mat4 temp = glm::mat4(1.0f);
	glm::mat4 identityMatrix = glm::mat4(1.0f); // make sure to initialize matrix to identity matrix first
	glm::mat4 translateMatrix, rotateXMatrix, rotateYMatrix, rotateZMatrix, scaleMatrix, ztranslate, xtranslate, model;
	float rotateAngle_Y = 0.0;


	translateMatrix = glm::translate(identityMatrix, glm::vec3(-2.7, 6.2 + 0.15, 15));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.5f, .5f, 1.6f));
	model = als * translateMatrix * scaleMatrix;

	// Draw the cylinder for each pillar
	Torus torus = Torus();
	torus.drawTorus(lightingShader, model, 1.0f, 0.0f, 0.0f);


	translateMatrix = glm::translate(identityMatrix, glm::vec3(-2.7, 7.001 + 0.15, 15));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.39f, .5f, 1.6f));
	model = als * translateMatrix * scaleMatrix;

	// Draw the cylinder for each pillar
	//Torus torus = Torus();
	torus.drawTorus(lightingShader, model, 1.0f, 0.0f, 0.0f);



	//dorileft
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-3.89, 6.2 + 0.15, 15));
	rotateZMatrix = glm::rotate(identityMatrix, glm::radians(-22.9f), glm::vec3(0.0f, 0.0f, 1.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.1f, 2.3f, .2f));
	model = als * translateMatrix * rotateZMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
	cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//doriright
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-1.7, 6.2 + 0.15, 15));
	rotateZMatrix = glm::rotate(identityMatrix, glm::radians(23.1f), glm::vec3(0.0f, 0.0f, 1.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.1f, 2.3f, .2f));
	model = als * translateMatrix * rotateZMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
	cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);


	//mathay chotto
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-3.1, 8.2 + 0.15, 15));
	//rotateZMatrix = glm::rotate(identityMatrix, glm::radians(-22.9f), glm::vec3(0.0f, 0.0f, 1.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.68f, .6f, .2f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
	cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//kath stand
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-4.3, 6.0 + 0.15, 15));
	//rotateZMatrix = glm::rotate(identityMatrix, glm::radians(-22.9f), glm::vec3(0.0f, 0.0f, 1.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.68f, .2f, .2f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
	cube.setMaterialisticEimu(0.0f, 0.2f, 0.0f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//candle
	//bottom
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-4.2, 6.22 + 0.15, 15));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.1, .8f, .2f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, als, 1.0, 1.0, 1.0);
	cube.setMaterialisticEimu(1.0, 1.0, 1.0);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);


	//top
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-4.16, 6.9 + 0.25, 15.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.08f, .6f, 0.1f));
	model = als * translateMatrix * scaleMatrix;
	HalfSphere sphere = HalfSphere();
	sphere.drawHalfSphere(lightingShader, model, 1.0f, 1.0f, 0.0);





	translateMatrix = glm::translate(identityMatrix, glm::vec3(-1.9, 6.0 + 0.15, 15));
	//rotateZMatrix = glm::rotate(identityMatrix, glm::radians(-22.9f), glm::vec3(0.0f, 0.0f, 1.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.68f, .2f, .2f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
	cube.setMaterialisticEimu(0.0f, 0.2f, 0.0f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//bottom
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-1.6, 6.22 + 0.15, 15));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.1, .8f, .2f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, als, 1.0, 1.0, 1.0);
	cube.setMaterialisticEimu(1.0, 1.0, 1.0);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);


	//top
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-1.54, 6.9 + 0.25, 15.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.08f, .6f, 0.1f));
	model = als * translateMatrix * scaleMatrix;
	//HalfSphere sphere = HalfSphere();
	sphere.drawHalfSphere(lightingShader, model, 1.0f, 1.0f, 0.0);




	translateMatrix = glm::translate(identityMatrix, glm::vec3(-2.7, 6.0 + 0.15, 18.2));
	//rotateZMatrix = glm::rotate(identityMatrix, glm::radians(-22.9f), glm::vec3(0.0f, 0.0f, 1.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, .2f, .96f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
	cube.setMaterialisticEimu(0.0f, 0.2f, 0.0f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	//candle majhe
	//bottom
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-2.7, 6.22 + 0.15, 18.5));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.1, .8f, .2f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, als, 1.0, 1.0, 1.0);
	cube.setMaterialisticEimu(1.0, 1.0, 1.0);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);


	//top
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-2.65, 6.93 + 0.25, 18.5));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.08f, .6f, 0.1f));
	model = als * translateMatrix * scaleMatrix;
	//HalfSphere sphere = HalfSphere();
	sphere.drawHalfSphere(lightingShader, model, 1.0f, 1.0f, 0.0);



	translateMatrix = glm::translate(identityMatrix, glm::vec3(-3.2, 6.0 + 0.15, 18.2));
	rotateYMatrix = glm::rotate(identityMatrix, glm::radians(-22.9f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, .2f, .8f));
	model = als * translateMatrix * rotateYMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
	cube.setMaterialisticEimu(0.0f, 0.2f, 0.0f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//candle majhe theke left
	//bottom
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-3.43, 6.22 + 0.15, 18.6));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.1, .8f, .2f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, als, 1.0, 1.0, 1.0);
	cube.setMaterialisticEimu(1.0, 1.0, 1.0);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);


	//top
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-3.4, 6.94 + 0.25, 18.6));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.08f, .6f, 0.1f));
	model = als * translateMatrix * scaleMatrix;
	//HalfSphere sphere = HalfSphere();
	sphere.drawHalfSphere(lightingShader, model, 1.0f, 1.0f, 0.0);





	translateMatrix = glm::translate(identityMatrix, glm::vec3(-2.2, 6.0 + 0.15, 18.2));
	rotateYMatrix = glm::rotate(identityMatrix, glm::radians(22.9f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, .2f, .8f));
	model = als * translateMatrix * rotateYMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
	cube.setMaterialisticEimu(0.0f, 0.2f, 0.0f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//candle majhe theke right
	//bottom
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-2.0, 6.22 + 0.15, 18.6));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.1, .8f, .2f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, als, 1.0, 1.0, 1.0);
	cube.setMaterialisticEimu(1.0, 1.0, 1.0);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);


	//top
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-1.92, 6.94 + 0.25, 18.6));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.08f, .6f, 0.1f));
	model = als * translateMatrix * scaleMatrix;
	//HalfSphere sphere = HalfSphere();
	sphere.drawHalfSphere(lightingShader, model, 1.0f, 1.0f, 0.0);

}