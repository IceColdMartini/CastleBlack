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
//#include "Pyramid.h"
//#include "Pyramid.cpp"


void library(Cube& cube, Shader& lightingShader, glm::mat4 als, float colorArray[], unsigned int tiles1, unsigned int tiles2)
{

	glm::mat4 temp = glm::mat4(1.0f);
	glm::mat4 identityMatrix = glm::mat4(1.0f); // make sure to initialize matrix to identity matrix first
	glm::mat4 translateMatrix, rotateXMatrix, rotateYMatrix, rotateZMatrix, scaleMatrix, ztranslate, xtranslate, model;
	float rotateAngle_Y = 0.0;
	//////////////////////////////////sphere and cylinder
	Sphere sphere1 = Sphere();

	//glm::mat4 modelForSphere = glm::mat4(1.0f);
	//glm::mat4 modelForCylinder = glm::mat4(1.0f);





	//pillars
	// Define the number of pillars
	const int numPillars = 6;

	for (int i = 0; i < numPillars; ++i) {
		// Calculate the z-position for each pillar
		float zPosition = -12.8f + i * 9.2f; // Assuming 2.2 units gap between pillars

		// Translate and scale the pillar
		translateMatrix = glm::translate(identityMatrix, glm::vec3(9.3, 5.2 + 0.15, zPosition));
		scaleMatrix = glm::scale(identityMatrix, glm::vec3(.3f, 5.1f, 2.2f));
		model = als * translateMatrix * scaleMatrix;

		// Draw the cylinder for each pillar
		Cylinder cylinder = Cylinder();
		cylinder.drawCylinder(lightingShader, model, 0.545f, 0.271f, 0.075f);
	}

	const int numPillarss = 6;

	for (int i = 0; i < numPillarss; ++i) {
		// Calculate the z-position for each pillar
		float zPositionn = -12.8f + i * 9.2f; // Assuming 2.2 units gap between pillars

		// Translate and scale the pillar
		translateMatrix = glm::translate(identityMatrix, glm::vec3(-16.9, 5.2 + 0.15, zPositionn));
		scaleMatrix = glm::scale(identityMatrix, glm::vec3(.3f, 5.1f, 2.2f));
		model = als * translateMatrix * scaleMatrix;

		// Draw the cylinder for each pillar
		Cylinder cylinder = Cylinder();
		cylinder.drawCylinder(lightingShader, model, 0.545f, 0.271f, 0.075f);
	}



	float initialZ = -7.8f;
	float spacing = 9.0f; // Adjust the spacing between the shelves as needed

	for (int i = 0; i < 5; ++i) {
		glm::mat4 translateMatrix = glm::translate(identityMatrix, glm::vec3(3.3f, 0.0f + 0.15f, initialZ + i * spacing));
		glm::mat4 scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.5f, 2.7f, 1.5f));
		glm::mat4 model = als * translateMatrix * scaleMatrix;

		bookShelffff(cube, lightingShader, model, colorArray, 3, 4);
	}


	float initialZz = -7.8f;
	float spacingg = 9.0f; // Adjust the spacing between the shelves as needed

	for (int i = 0; i < 5; ++i) {
		glm::mat4 translateMatrix = glm::translate(identityMatrix, glm::vec3(-14.3f, 0.0f + 0.15f, initialZz + i * spacingg));
		glm::mat4 scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.5f, 2.7f, 1.5f));
		glm::mat4 model = als * translateMatrix * scaleMatrix;

		bookShelffff(cube, lightingShader, model, colorArray, 3, 4);
	}


	// class er bench
	translateMatrix = glm::translate(identityMatrix, glm::vec3(1.5, 0.2 + 0.15, 13.0));
	rotateYMatrix = glm::rotate(identityMatrix, glm::radians(90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(5.0f, 2.0f, 1.3f));
	model = als * translateMatrix * rotateYMatrix * scaleMatrix;
	benchToll(cube, lightingShader, model);


	translateMatrix = glm::translate(identityMatrix, glm::vec3(-2.0, 0.2 + 0.15, 13.0));
	rotateYMatrix = glm::rotate(identityMatrix, glm::radians(90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(5.0f, 2.0f, 1.3f));
	model = als * translateMatrix * rotateYMatrix * scaleMatrix;
	benchToll(cube, lightingShader, model);


	translateMatrix = glm::translate(identityMatrix, glm::vec3(-5.5, 0.2 + 0.15, 13.0));
	rotateYMatrix = glm::rotate(identityMatrix, glm::radians(90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(5.0f, 2.0f, 1.3f));
	model = als * translateMatrix * rotateYMatrix * scaleMatrix;
	benchToll(cube, lightingShader, model);



	///////////////////library benchs
	translateMatrix = glm::translate(identityMatrix, glm::vec3(1.5, 0.2 + 0.15, 21.0));
	rotateYMatrix = glm::rotate(identityMatrix, glm::radians(90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(5.0f, 2.0f, 1.3f));
	model = als * translateMatrix * rotateYMatrix * scaleMatrix;
	benchToll(cube, lightingShader, model);


	translateMatrix = glm::translate(identityMatrix, glm::vec3(-2.0, 0.2 + 0.15, 21.0));
	rotateYMatrix = glm::rotate(identityMatrix, glm::radians(90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(5.0f, 2.0f, 1.3f));
	model = als * translateMatrix * rotateYMatrix * scaleMatrix;
	benchToll(cube, lightingShader, model);


	translateMatrix = glm::translate(identityMatrix, glm::vec3(-5.5, 0.2 + 0.15, 21.0));
	rotateYMatrix = glm::rotate(identityMatrix, glm::radians(90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(5.0f, 2.0f, 1.3f));
	model = als * translateMatrix * rotateYMatrix * scaleMatrix;
	benchToll(cube, lightingShader, model);


	///////almari1
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-5.5, 0.0 + 0.15, -12.0));
	//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.0f, 1.3f, 1.0f));
	model = als * translateMatrix * scaleMatrix;
	almari(cube, lightingShader, model);


	///////almari2
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-2.0, 0.0 + 0.15, -12.0));
	//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.0f, 1.3f, 1.0f));
	model = als * translateMatrix * scaleMatrix;
	almari(cube, lightingShader, model);


	//lamp
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-3.5, 0.1 + 0.15, -1.0));
	//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(-80.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.0f, 1.0f, 1.0f));
	model = als * translateMatrix * scaleMatrix;
	lamp(cube, lightingShader, model);


	//lamp2
	translateMatrix = glm::translate(identityMatrix, glm::vec3(0.5, 0.1 + 0.15, -1.0));
	//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(-80.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.0f, 1.0f, 1.0f));
	model = als * translateMatrix * scaleMatrix;
	lamp(cube, lightingShader, model);


	//lamp3
	translateMatrix = glm::translate(identityMatrix, glm::vec3(5.0, 0.1 + 0.15, -1.0));
	//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(-80.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.0f, 1.0f, 1.0f));
	model = als * translateMatrix * scaleMatrix;
	lamp(cube, lightingShader, model);



	////jharbati
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-1.0, 2.8 + 0.15, 15));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.8f, .8f, 1.6f));
	model = als * translateMatrix * scaleMatrix;
	jharbati(cube, lightingShader, model);




	//Pyramid myPyramid(glm::mat4(1.0f), "Texture/palace_window.jpg");
	//myPyramid.draw(lightingShader);

}
#pragma once
