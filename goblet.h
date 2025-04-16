#pragma once
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
#include "halfs.h"
#include "almari.h"
#include "lalsofa.h"

void goblet(Cube& cube, Shader& lightingShader, glm::mat4 als, float colorArray[], unsigned int fire1, unsigned int fire2, unsigned int table1, unsigned int table2, unsigned int roq1, unsigned int roq2, unsigned int tiara1, unsigned int tiara2, unsigned int carpet1, unsigned int carpet2, unsigned int l1, unsigned int l2)
{

	glm::mat4 temp = glm::mat4(1.0f);
	glm::mat4 identityMatrix = glm::mat4(1.0f); // make sure to initialize matrix to identity matrix first
	glm::mat4 translateMatrix, rotateXMatrix, rotateYMatrix, rotateZMatrix, scaleMatrix, ztranslate, xtranslate, model;
	float rotateAngle_Y = 0.0;


	translateMatrix = glm::translate(identityMatrix, glm::vec3(5.3, 0.2 + 0.15, 7.5));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.7f, 1.1f, 2.2f));
	model = als * translateMatrix * scaleMatrix;

	// Draw the cylinder for each pillar
	Cylinder cylinder = Cylinder();
	cylinder.drawCylinder(lightingShader, model, 0.251f, 0.251f, 0.251f);


	//sphere
	translateMatrix = glm::translate(identityMatrix, glm::vec3(5.3, 1.3 + 0.15, 8.5));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.5f, .5f, .5f));
	model = als * translateMatrix * scaleMatrix;
	HalfSphere sphere = HalfSphere();
	sphere.drawHalfSphere(lightingShader, model, 0.251f, 0.251f, 0.251f);


	translateMatrix = glm::translate(identityMatrix, glm::vec3(5.3, 1.8 + 0.1, 7.8));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.3f, .6f, .5f));
	model = als * translateMatrix * scaleMatrix;

	// Draw the cylinder for each pillar
	//Cylinder cylinder = Cylinder();
	cylinder.drawCylinder(lightingShader, model, 0.251f, 0.251f, 0.251f);


	//korai
	translateMatrix = glm::translate(identityMatrix, glm::vec3(5.3, 4.7 + 0.15, 8.5));
	rotateXMatrix = glm::rotate(identityMatrix, glm::radians(180.0f), glm::vec3(1.0f, 0.0f, 0.0f));
	//rotateZMatrix = glm::rotate(identityMatrix, glm::radians(-22.0f), glm::vec3(0.0f, 0.0f, 1.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.0f, 2.4f, 2.0f));
	model = als * translateMatrix * rotateXMatrix * scaleMatrix;
	//HalfSphere sphere = HalfSphere();
	sphere.drawHalfSphere(lightingShader, model, 0.251f, 0.251f, 0.251f);

	//torus
	translateMatrix = glm::translate(identityMatrix, glm::vec3(5.3, 4.7 + 0.15, 8.5));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.5f, .5f, 1.6f));
	model = als * translateMatrix * scaleMatrix;

	// Draw the cylinder for each pillar
	Torus torus = Torus();
	torus.drawTorus(lightingShader, model, 0.251f, 0.251f, 0.251f);



	//fire
	translateMatrix = glm::translate(identityMatrix, glm::vec3(4.325, 4.7 + 0.15, 9.2));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.85f, 1.9f, .009f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.502f, 0, 0);
	//cube.setMaterialisticEimu(0.545f, 0.270f, 0.075f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, als);
	cube.setTextureProperty(fire1, fire2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);




	//table top
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-4.6, 3.2 + 0.15, -16.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(20.0f, .30f, 3.0f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.0941f, 0.0471f, 0.0196f);
	cube.setTextureProperty(table1, table2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);




	//table right leg
	translateMatrix = glm::translate(identityMatrix, glm::vec3(14.6, -.5 + 0.15, -16.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.5f, 3.7f, 0.7f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.3686f, 0.1490f, 0.0196f);
	cube.setMaterialisticEimu(0.392f, 0.196f, 0.039f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//table left leg
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-4.3, -.5 + 0.15, -16.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.5f, 3.7f, 0.7f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.3686f, 0.1490f, 0.0196f);
	cube.setMaterialisticEimu(0.392f, 0.196f, 0.039f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);


	//table er niche left
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-4.4, -0.7 + 0.15, -16.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.0f, .7f, 0.7f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.0f, 0, 0);
	cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//table er niche right
	translateMatrix = glm::translate(identityMatrix, glm::vec3(14.4, -0.7 + 0.15, -16.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.0f, .7f, 0.7f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.0f, 0, 0);
	cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);



	//arekta chairrrrrrrrrrrrr
	//table top
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-4.0, 1.8 + 0.15, -13.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(18.5f, .30f, 3.0f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.3686f, 0.1490f, 0.0196f);
	cube.setTextureProperty(table1, table2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);

	//table left leg
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-3.9, -.5 + 0.15, -13.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.5f, 2.4f, 0.7f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.3686f, 0.1490f, 0.0196f);
	cube.setMaterialisticEimu(0.3686f, 0.1490f, 0.0196f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);


	//table right leg
	translateMatrix = glm::translate(identityMatrix, glm::vec3(14.1, -.5 + 0.15, -13.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.5f, 2.4f, 0.7f));
	model = als * translateMatrix * scaleMatrix;
	// drawCube(cubeVAO, lightingShader, model, 0.3686f, 0.1490f, 0.0196f);
	cube.setMaterialisticEimu(0.3686f, 0.1490f, 0.0196f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);


	//roq
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-1.5, 3.6 + 0.15, -16.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.0f, 4.7f, 1.0f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.8039f, 0, 0);
	//cube.setMaterialisticEimu(0.8039f, 0, 0);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(roq1, roq2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);


	//tiara
	translateMatrix = glm::translate(identityMatrix, glm::vec3(10.0, 3.6 + 0.15, -16.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.3f, 4.3f, 1.0f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.8039f, 0, 0);
	//cube.setMaterialisticEimu(0.8039f, 0, 0);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(tiara1, tiara2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);

	//almari1
	translateMatrix = glm::translate(identityMatrix, glm::vec3(17.0, 0.2 + 0.15, 0.00));
	rotateYMatrix = glm::rotate(identityMatrix, glm::radians(-90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.0f, 2.0f, 2.0f));
	model = als * translateMatrix * rotateYMatrix * scaleMatrix;
	almari(cube, lightingShader, model);

	//2
	translateMatrix = glm::translate(identityMatrix, glm::vec3(17.0, 0.2 + 0.15, 10.00));
	rotateYMatrix = glm::rotate(identityMatrix, glm::radians(-90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.0f, 2.0f, 2.0f));
	model = als * translateMatrix * rotateYMatrix * scaleMatrix;
	almari(cube, lightingShader, model);


	//3
	translateMatrix = glm::translate(identityMatrix, glm::vec3(17.0, 0.2 + 0.15, 20.00));
	rotateYMatrix = glm::rotate(identityMatrix, glm::radians(-90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.0f, 2.0f, 2.0f));
	model = als * translateMatrix * rotateYMatrix * scaleMatrix;
	almari(cube, lightingShader, model);


	//4
	translateMatrix = glm::translate(identityMatrix, glm::vec3(17, 0.2 + 0.15, 30.00));
	rotateYMatrix = glm::rotate(identityMatrix, glm::radians(-90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.0f, 2.0f, 2.0f));
	model = als * translateMatrix * rotateYMatrix * scaleMatrix;
	almari(cube, lightingShader, model);


	//ulta chair
	translateMatrix = glm::translate(identityMatrix, glm::vec3(14, 8.0, 30.00));
	rotateXMatrix = glm::rotate(identityMatrix, glm::radians(120.0f), glm::vec3(1.0f, 0.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.8f, .1f, 1.0f));
	model = als * translateMatrix * rotateXMatrix;
	chair(cube, lightingShader, model, colorArray, 3, 4);

	//chair
	translateMatrix = glm::translate(identityMatrix, glm::vec3(14, 8.0, 10.00));
	rotateXMatrix = glm::rotate(identityMatrix, glm::radians(120.0f), glm::vec3(1.0f, 0.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.8f, .1f, 1.0f));
	model = als * translateMatrix * rotateXMatrix;
	chair(cube, lightingShader, model, colorArray, 3, 4);


	//shojachair
	translateMatrix = glm::translate(identityMatrix, glm::vec3(10, 0.5, 10.00));
	//rotateXMatrix = glm::rotate(identityMatrix, glm::radians(120.0f), glm::vec3(1.0f, 0.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.0f, 1.0f, 1.0f));
	model = als * translateMatrix * scaleMatrix;
	chair(cube, lightingShader, model, colorArray, 3, 4);


	////jharbati
	translateMatrix = glm::translate(identityMatrix, glm::vec3(16.0, -4.8 + 0.15, 4));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.8f, .8f, 1.6f));
	model = als * translateMatrix * scaleMatrix;
	jharbati(cube, lightingShader, model);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(14.0, -4.8 + 0.15, 8));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.8f, .8f, 1.6f));
	model = als * translateMatrix * scaleMatrix;
	jharbati(cube, lightingShader, model);



	//carpet
	translateMatrix = glm::translate(identityMatrix, glm::vec3(5.0, 0.1 + 0.15, 12.10));
	//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(), glm::vec3(-.2f, -1.0f, 1.0f));
	rotateXMatrix = glm::rotate(identityMatrix, glm::radians(-23.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(15.0f, 0.2f, 15.0f));
	model = als * translateMatrix * rotateXMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.502f, 0, 0);
	//cube.setMaterialisticEimu(0.502f, 0, 0);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(carpet1, carpet2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);


	//sofaaaaa
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-1.1, 0.3 + 0.15, 3.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(3.0f, 3.5f, 3.5f));
	model = als * translateMatrix * scaleMatrix;
	lalsofa(cube, lightingShader, model, colorArray, 3, 4);

	//ulta
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-4.3, 3.0 + 0.15, 16.00));
	rotateXMatrix = glm::rotate(identityMatrix, glm::radians(170.0f), glm::vec3(1.0f, 0.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(3.0f, 3.5f, 3.5f));
	model = als * translateMatrix * rotateXMatrix * scaleMatrix;
	lalsofa(cube, lightingShader, model, colorArray, 3, 4);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(0.1, 6.4 + 0.15, 20.00));
	rotateZMatrix = glm::rotate(identityMatrix, glm::radians(80.0f), glm::vec3(0.0f, 0.0f, 1.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.8f, 1.0f, 1.0f));
	model = als * translateMatrix * rotateZMatrix * scaleMatrix;
	lamp(cube, lightingShader, model);



	//minevera2
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-7.0, 4.0 + 0.15, 10.0));
	rotateYMatrix = glm::rotate(identityMatrix, glm::radians(82.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(5.5f, 4.4f, .1f));
	model = als * translateMatrix * rotateYMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	//cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(l1, l2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);



}