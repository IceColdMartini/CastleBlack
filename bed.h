#pragma once
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "shader.h"
#include "drawcube.h"
#include "cylinder.h"
#include "sphere.h"
#include "halfs.h"
#include "traizoid.h"
#include "lalsofa.h"
#include "roundTable.h"
#include "lamp.h"
#include "bookShelf.h"
#include "cube.h"
#include "triangle.h"
#include "benchtool.h"
#include "ebook.h"
#include "almari.h"
#include "board.h"
#include "floorfire.h"
#include "staircase.h"
#include "jharbati.h"







void bed(Cube& cube, Shader& lightingShader, glm::mat4 als, float colorArray[], unsigned int tiles1, unsigned int tiles2, unsigned int bedpichon1, unsigned int bedpichon2, unsigned int window1, unsigned int window2, unsigned int fr1, unsigned int fr2, unsigned int dumb1, unsigned int dumb2, unsigned int table1, unsigned int table2, unsigned int p1, unsigned int p2, unsigned int door1, unsigned int door2, unsigned int board1, unsigned int board2, unsigned int s1, unsigned int s2, unsigned int carpet1, unsigned int carpet2, unsigned int snape1, unsigned int snape2, unsigned int hagrid1, unsigned int hagrid2, unsigned int minevera1, unsigned int minevera2, unsigned int flag1, unsigned int flag2)
{
	Shader lightingWithTextureShader("vertexShaderForPhongShadingWithTexture.vs", "fragmentShaderForPhongShadingWithTexture.fs");
	//Shader lightingShader("vertexShaderForGouraudShading.vs", "fragmentShaderForGouraudShading.fs");
	Shader ourShader("vertexShader.vs", "fragmentShader.fs");


	float rotateAngle_Y = 0.0;
	glm::mat4 rotateY = glm::mat4(1.0f);
	glm::mat4 rotateZ = glm::mat4(1.0f);
	float rotateAngle_Z = 0.0f;


	glm::mat4 identityMatrix = glm::mat4(1.0f); // make sure to initialize matrix to identity matrix firs
	glm::mat4 translateMatrix, rotateXMatrix, rotateYMatrix, rotateZMatrix, scaleMatrix, model;





	//bedbody
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-1.0, 0.1 + 0.15, -12.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(5.0f, 2.0f, 8.0f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.502f, 0, 0);
	//cube.setMaterialisticEimu(0.545f, 0.270f, 0.075f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, als);



	cube.setTextureProperty(tiles1, tiles2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);

	//bed stand1
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-1.9, 0.5, -5.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.7f, 7.0f, 0.7f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.270f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);


	//bed stand2
	translateMatrix = glm::translate(identityMatrix, glm::vec3(4.363, 0.5, -5.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.7f, 7.0f, 0.7f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.270f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//bed stand1 er nicher
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-1.9, 0.1, -5.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.7f, 7.0f, 0.7f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.0f, 0, 0);
	cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//bed stand2 er nicher
	translateMatrix = glm::translate(identityMatrix, glm::vec3(4.363, 0.1, -5.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.7f, 7.0f, 0.7f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.0f, 0, 0);
	cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//bed stand3
	translateMatrix = glm::translate(identityMatrix, glm::vec3(4.363, 0.5, -12.5));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.7f, 7.0f, 0.7f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.270f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//bed stand4
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-1.9, 0.5, -12.5));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.7f, 7.0f, 0.7f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.270f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//bed stand3 er nicher
	translateMatrix = glm::translate(identityMatrix, glm::vec3(4.363, 0.1, -12.5));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.7f, 7.0f, 0.7f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.0f, 0, 0);
	cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//bed stand4 er niche 
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-1.9, 0.1, -12.5));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.7f, 7.0f, 0.7f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.0f, 0, 0);
	cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//standupper
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-2.1, 7.4, -13.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(7.4f, 0.35f, 8.9f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.270f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);


	translateMatrix = glm::translate(identityMatrix, glm::vec3(-1.7123, 7.7, -4.1));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(6.7f, 0.1f, .2f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.392f, 0.196f, 0.039f);
	cube.setMaterialisticEimu(0.392f, 0.196f, 0.039f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);


	translateMatrix = glm::translate(identityMatrix, glm::vec3(-1.8, 7.4, -12.9));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(6.8f, 1.0f, 8.72f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.270f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);


	translateMatrix = glm::translate(identityMatrix, glm::vec3(-1.7123, 8.4, -4.2));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(6.7f, 0.1f, .2f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.392f, 0.196f, 0.039f);
	cube.setMaterialisticEimu(0.392f, 0.196f, 0.039f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);


	translateMatrix = glm::translate(identityMatrix, glm::vec3(-2.1, 8.4, -13.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(7.4f, 0.25f, 8.9f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(-2.1, 8.4, -13.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(7.4f, 0.25f, 8.9f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.039f);
	cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);


	//bed er pichon
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-1.0, 0.1 + 0.15, -12.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(5.0f, 6.7f, 1.0f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.8039f, 0, 0);
	//cube.setMaterialisticEimu(0.8039f, 0, 0);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(bedpichon1, bedpichon2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);


	//blanket
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-1.0, 2.2, -12.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(5.0f, 0.2f, 3.8f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.7373f, 0.6745f, 0.5843f);
	cube.setMaterialisticEimu(0.7373f, 0.6745f, 0.5843f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);



	//pillow
	translateMatrix = glm::translate(identityMatrix, glm::vec3(0.5, 2.2, -12.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.0f, 0.6f, 3.0f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.8039f, 0.5216f, 0.2471f);
	cube.setMaterialisticEimu(0.8039f, 0.5216f, 0.2471f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);


	//trunk
	translateMatrix = glm::translate(identityMatrix, glm::vec3(0.1, 0.3 + 0.15, -4.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(3.0f, 1.0f, 2.0f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.2706f, 0.0745f);
	cube.setMaterialisticEimu(0.545f, 0.2706f, 0.0745f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);


	translateMatrix = glm::translate(identityMatrix, glm::vec3(0.1, 0.1 + 0.15, -4.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(3.0f, 0.2f, 2.0f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
	cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);


	translateMatrix = glm::translate(identityMatrix, glm::vec3(0.1, 1.3 + 0.15, -4.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(3.0f, 0.02f, 2.0f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
	cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(0.1, 1.365 + 0.15, -4.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(3.0f, 0.4f, 2.0f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.2706f, 0.0745f);
	cube.setMaterialisticEimu(0.545f, 0.2706f, 0.0745f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(1.3, 1.0 + 0.15, -2.05));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.5f, 0.2f, 0.5f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
	cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);



	//room er bookshelf1
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-10.5, 1.0 + 0.15, -21.5));
	//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.0f, 2.0f, 3.0f));
	model = als * translateMatrix * scaleMatrix;
	bookShelffff(cube, lightingShader, model, colorArray, 3, 4);



	////////agunnnnn
	// Define the number of floor fire holders
	const int numFloorFireHolderss = 1;

	for (int i = 0; i < numFloorFireHolderss; ++i) {
		// Calculate the z-position for each floor fire holder
		float zPosition = 15.0f + i * 7.0; // Replace someGapValue with the appropriate gap between holders

		// Translate, rotate, and scale the floor fire holder
		translateMatrix = glm::translate(identityMatrix, glm::vec3(3.5f, 4 + 0.15, zPosition));
		// Rotate if needed
		// rotateYMatrix = glm::rotate(identityMatrix, glm::radians(90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
		scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.0f, 1.0f, 2.0f));
		model = als * translateMatrix * scaleMatrix;

		// Draw the floor fire holder for each iteration
		floorFireHolder2(cube, lightingShader, model);
	}




	//carpet


	translateMatrix = glm::translate(identityMatrix, glm::vec3(-18.0, 0.1 + 0.15, -2.10));
	//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(), glm::vec3(-.2f, -1.0f, 1.0f));
	rotateXMatrix = glm::rotate(identityMatrix, glm::radians(-23.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(15.0f, 0.2f, 15.0f));
	model = als * translateMatrix * rotateXMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.502f, 0, 0);
	//cube.setMaterialisticEimu(0.502f, 0, 0);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(bedpichon1, bedpichon2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);


	//wallbesidebed
	translateMatrix = glm::translate(identityMatrix, glm::vec3(7.0, -1.0 + 0.15, -28.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.80f, 31.0f, 60.0f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.58f, 0, 0.137f);
	cube.setTextureProperty(tiles1, tiles2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);



	//window
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-20.0, 6.0 + 0.15, -28.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(3.50f, 4.8f, .50f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.7373f, 0.6745f, 0.5843f);
	//cube.setMaterialisticEimu(0.7373f, 0.6745f, 0.5843f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(window1, window2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);


	//kath right
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-16.5, 5.5 + 0.15, -28.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.50f, 5.8f, .50f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//kath left
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-20.6, 5.5 + 0.15, -28.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.50f, 5.8f, .50f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//kather nich
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-20.1, 5.5 + 0.15, -28.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(3.90f, .5f, .50f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//kath upore
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-20.1, 10.9 + 0.15, -28.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(3.90f, .5f, .50f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);






	//arekta janlaaaaaa
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-16.0, 6.0 + 0.15, -28.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(3.50f, 4.8f, .50f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.7373f, 0.6745f, 0.5843f);
	//cube.setMaterialisticEimu(0.7373f, 0.6745f, 0.5843f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(window1, window2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);


	//kath right
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-12.5, 5.5 + 0.15, -28.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.50f, 5.8f, .50f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//kath left
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-16.60, 5.5 + 0.15, -28.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.50f, 5.8f, .50f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//kather nich
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-16.10, 5.5 + 0.15, -28.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(3.90f, .5f, .50f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//kath upore
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-16.10, 10.9 + 0.15, -28.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(3.90f, .5f, .50f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);








	///////////////////////uporer janlaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa

	translateMatrix = glm::translate(identityMatrix, glm::vec3(-20.0, 11.2 + 0.15, -28.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(3.50f, 4.8f, .50f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.7373f, 0.6745f, 0.5843f);
	//cube.setMaterialisticEimu(0.7373f, 0.6745f, 0.5843f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(window1, window2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);


	//kath right
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-16.5, 10.7 + 0.15, -28.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.50f, 5.8f, .50f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//kath left
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-20.6, 10.7 + 0.15, -28.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.50f, 5.8f, .50f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//kather nich
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-20.1, 10.7 + 0.15, -28.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(3.90f, .5f, .50f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//kath upore
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-20.1, 16.1 + 0.15, -28.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(3.90f, .5f, .50f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);






	//arekta janlaaaaaa
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-16.0, 11.2 + 0.15, -28.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(3.50f, 4.8f, .50f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.7373f, 0.6745f, 0.5843f);
	//cube.setMaterialisticEimu(0.7373f, 0.6745f, 0.5843f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(window1, window2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);


	//kath right
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-12.5, 10.7 + 0.15, -28.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.50f, 5.8f, .50f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//kath left
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-16.60, 10.7 + 0.15, -28.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.50f, 5.8f, .50f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//kather nich
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-16.10, 10.7 + 0.15, -28.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(3.90f, .5f, .50f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//kath upore
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-16.10, 16.1 + 0.15, -28.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(3.90f, .5f, .50f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);




	//janler upore pataton
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-21.00, 16.5 + 0.15, -28.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(10.0f, .5f, 1.50f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(-20.2, 17.1 + 0.15, -28.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(9.0f, .1f, 1.2f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.392f, 0.196f, 0.039f);
	cube.setMaterialisticEimu(0.392f, 0.196f, 0.039f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(-21.7, 17.2 + 0.15, -28.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(11.5f, .5f, 1.50f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);














	/////////arekta bedddddddddddddddddddd


	//bedbody
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-26.0, 0.1 + 0.15, -12.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(5.0f, 2.0f, 8.0f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.502f, 0, 0);
	//cube.setMaterialisticEimu(0.502f, 0, 0);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(tiles1, tiles2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);

	//bed stand1
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-26.9, 0.5, -5.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.7f, 7.0f, 0.7f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.271f, 0.039f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//bed stand2
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-21.0, 0.5, -5.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.7f, 7.0f, 0.7f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.271f, 0.039f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//bed stand1 er nicher
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-26.9, 0.1, -5.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.7f, 7.0f, 0.7f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.0f, 0, 0);
	cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//bed stand2 er nicher
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-21.0, 0.1, -5.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.7f, 7.0f, 0.7f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.0f, 0, 0);
	cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//bed stand3
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-21.0, 0.5, -12.5));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.7f, 7.0f, 0.7f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.271f, 0.039f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//bed stand4
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-26.9, 0.5, -12.5));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.7f, 7.0f, 0.7f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.271f, 0.039f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//bed stand3 er nicher
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-21.0, 0.1, -12.5));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.7f, 7.0f, 0.7f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.0f, 0, 0);
	cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//bed stand4 er niche 
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-26.9, 0.1, -12.5));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.7f, 7.0f, 0.7f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.0f, 0, 0);
	cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//standupper
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-27.1, 7.4, -13.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(7.4f, 0.35f, 8.9f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.271f, 0.039f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);


	translateMatrix = glm::translate(identityMatrix, glm::vec3(-26.7123, 7.7, -4.1));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(6.7f, 0.1f, .2f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.392f, 0.196f, 0.039f);
	cube.setMaterialisticEimu(0.392f, 0.196f, 0.039f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);


	translateMatrix = glm::translate(identityMatrix, glm::vec3(-26.8, 7.4, -12.9));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(6.8f, 1.0f, 8.72f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.271f, 0.039f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);


	translateMatrix = glm::translate(identityMatrix, glm::vec3(-26.7123, 8.4, -4.2));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(6.7f, 0.1f, .2f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.392f, 0.196f, 0.039f);
	cube.setMaterialisticEimu(0.392f, 0.196f, 0.039f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);


	translateMatrix = glm::translate(identityMatrix, glm::vec3(-27.1, 8.4, -13.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(7.4f, 0.25f, 8.9f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.271f, 0.039f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(-27.1, 8.4, -13.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(7.4f, 0.25f, 8.9f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.039f);
	cube.setMaterialisticEimu(0.545f, 0.271f, 0.039f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);


	//bed er pichon
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-26.0, 0.1 + 0.15, -12.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(5.0f, 6.7f, 1.0f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.8039f, 0, 0);
	//cube.setMaterialisticEimu(0.8039f, 0, 0);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(bedpichon1, bedpichon2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);

	//blanket
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-26.0, 2.2, -12.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(5.0f, 0.2f, 3.8f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.7373f, 0.6745f, 0.5843f);
	cube.setMaterialisticEimu(0.7373f, 0.6745f, 0.5843f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//pillow
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-25.5, 2.2, -12.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.0f, 0.6f, 3.0f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.8039f, 0.5216f, 0.2471f);
	cube.setMaterialisticEimu(0.8039f, 0.5216f, 0.2471f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(-23.3, 2.2, -12.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.0f, 0.6f, 3.0f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.8039f, 0.5216f, 0.2471f);
	cube.setMaterialisticEimu(0.8039f, 0.5216f, 0.2471f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//trunk
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-25.1, 0.3 + 0.15, -4.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(3.0f, 1.0f, 2.0f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.2706f, 0.0745f);
	cube.setMaterialisticEimu(0.545f, 0.2706f, 0.0745f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(-25.1, 0.1 + 0.15, -4.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(3.0f, 0.2f, 2.0f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
	cube.setMaterialisticEimu(0.0f, 0.0f, 0.0);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(-25.1, 1.3 + 0.15, -4.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(3.0f, 0.02f, 2.0f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
	cube.setMaterialisticEimu(0.0f, 0.0f, 0.0);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(-25.1, 1.365 + 0.15, -4.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(3.0f, 0.4f, 2.0f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.2706f, 0.0745f);
	cube.setMaterialisticEimu(0.545f, 0.2706f, 0.0745f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(-23.7, 1.0 + 0.15, -2.05));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.5f, 0.2f, 0.5f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
	cube.setMaterialisticEimu(0.0f, 0.0, 0.0);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);




	//almari1
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-28.7, 1.0 + 0.15, 12.05));
	rotateYMatrix = glm::rotate(identityMatrix, glm::radians(90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(3.0f, 3.0f, 3.0f));
	model = als * translateMatrix * rotateYMatrix * scaleMatrix;
	almari(cube, lightingShader, model);



	///eksetsofa(majhe)



	translateMatrix = glm::translate(identityMatrix, glm::vec3(-18.0, 0.3 + 0.15, 8.00));
	rotateYMatrix = glm::rotate(identityMatrix, glm::radians(80.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.5f, 4.5f, 4.0f));
	model = als * translateMatrix * rotateYMatrix * scaleMatrix;
	lalsofa(cube, lightingShader, model, colorArray, 3, 4);


	translateMatrix = glm::translate(identityMatrix, glm::vec3(-3.0, 0.5 + 0.15, 4.00));
	rotateYMatrix = glm::rotate(identityMatrix, glm::radians(-90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.5f, 4.5f, 4.0f));
	model = als * translateMatrix * rotateYMatrix * scaleMatrix;
	lalsofa(cube, lightingShader, model, colorArray, 3, 4);


	translateMatrix = glm::translate(identityMatrix, glm::vec3(-1.10, 0.5 + 0.15f, -1.00));
	//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(-80.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.8f, 1.5f, 1.5f));
	model = als * translateMatrix * scaleMatrix;
	lamp(cube, lightingShader, model);





	//broom head
	translateMatrix = glm::translate(identityMatrix, glm::vec3(3.0, 0.1 + 0.15, 4.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.0f, .5f, .3f));
	model = als * translateMatrix * scaleMatrix;
	HalfSphere sphere = HalfSphere();
	sphere.drawHalfSphere(lightingShader, model, 0.5f, 0.271f, 0.075f);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(3.0, 0.0 + 0.3, 4.00));
	rotateXMatrix = glm::rotate(identityMatrix, glm::radians(180.0f), glm::vec3(1.0f, 0.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.0f, .5f, .3f));
	model = als * translateMatrix * rotateXMatrix * scaleMatrix;
	//HalfSphere sphere = HalfSphere();
	sphere.drawHalfSphere(lightingShader, model, 0.5f, 0.271f, 0.075f);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(2.0, 0.1 + 0.15, 4.5));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.8f, 0.06f, 0.06f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.392f, 0.196f, 0.039);
	cube.setMaterialisticEimu(0.392f, 0.196f, 0.039);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(2.0, 0.2 + 0.15, 4.5));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.8f, 0.06f, 0.06f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.392f, 0.196f, 0.039);
	cube.setMaterialisticEimu(0.392f, 0.196f, 0.039);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(2.0, 0.3 + 0.15, 4.5));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.8f, 0.06f, 0.06f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.392f, 0.196f, 0.039);
	cube.setMaterialisticEimu(0.392f, 0.196f, 0.039);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(2.1, 0.4 + 0.15, 4.5));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.7f, 0.06f, 0.06f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.392f, 0.196f, 0.039);
	cube.setMaterialisticEimu(0.392f, 0.196f, 0.039);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(2.2, 0.5 + 0.15, 4.5));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.4f, 0.06f, 0.06f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.392f, 0.196f, 0.039);
	cube.setMaterialisticEimu(0.392f, 0.196f, 0.039);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(2.3, 0.6 + 0.15, 4.5));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.1f, 0.06f, 0.06f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.392f, 0.196f, 0.039);
	cube.setMaterialisticEimu(0.392f, 0.196f, 0.039);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);






	//broom leg
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-.5f, 0.19 + 0.15, 4.5));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.6f, .1f, .1f));
	model = als * translateMatrix * scaleMatrix;
	Cylinder cylinder = Cylinder();
	cylinder.drawCylinder(lightingShader, model, 0.0f, 0.0f, 0.0f);


	translateMatrix = glm::translate(identityMatrix, glm::vec3(-3.5, 0.15 + 0.15, 4.5));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.5f, .25f, .2f));
	model = als * translateMatrix * scaleMatrix;
	//HalfSphere sphere = HalfSphere();
	sphere.drawHalfSphere(lightingShader, model, 0.0f, 0.0f, 0.0f);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(-3.5, 0.05 + 0.3, 4.5));
	rotateXMatrix = glm::rotate(identityMatrix, glm::radians(180.0f), glm::vec3(1.0f, 0.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.5f, .25f, .2f));
	model = als * translateMatrix * rotateXMatrix * scaleMatrix;
	//HalfSphere sphere = HalfSphere();
	sphere.drawHalfSphere(lightingShader, model, 0.0f, 0.0f, 0.0f);


	translateMatrix = glm::translate(identityMatrix, glm::vec3(1.6, 0.16 + 0.15, 4.5));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.5f, 0.2f, 0.1f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.5f, 0.01f, 0.0);
	cube.setMaterialisticEimu(0.5f, 0.01f, 0.0);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);









	///////////////CCommonroommmmmmmmmmm banacchiiiiiiiiiiiiiiiiii///////////////////////



	///eksetsofa(majhe)

	translateMatrix = glm::translate(identityMatrix, glm::vec3(-82.1, 0.3 + 0.15, 6.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(7.0f, 8.0f, 7.0f));
	model = als * translateMatrix * scaleMatrix;
	lalsofa(cube, lightingShader, model, colorArray, 3, 4);


	translateMatrix = glm::translate(identityMatrix, glm::vec3(-95.1, 0.3 + 0.15, 22.00));
	rotateYMatrix = glm::rotate(identityMatrix, glm::radians(80.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(7.0f, 8.0f, 7.0f));
	model = als * translateMatrix * rotateYMatrix * scaleMatrix;
	lalsofa(cube, lightingShader, model, colorArray, 3, 4);


	translateMatrix = glm::translate(identityMatrix, glm::vec3(-62.1, 0.3 + 0.15, 17.00));
	rotateYMatrix = glm::rotate(identityMatrix, glm::radians(-90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(7.0f, 8.0f, 7.0f));
	model = als * translateMatrix * rotateYMatrix * scaleMatrix;
	lalsofa(cube, lightingShader, model, colorArray, 3, 4);


	translateMatrix = glm::translate(identityMatrix, glm::vec3(-79.4, 0.3 + 0.15, 22.00));
	//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(-90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.8f, 3.0f, 6.0f));
	model = als * translateMatrix * scaleMatrix;
	coffeTable(cube, lightingShader, model);





	translateMatrix = glm::translate(identityMatrix, glm::vec3(-69.1, 0.3 + 0.15, 20.00));
	//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(-80.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.8f, 3.0f, 6.0f));
	model = als * translateMatrix * scaleMatrix;
	lamp(cube, lightingShader, model);





	//areksetsofaaaaaaa
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-57.1, 0.3 + 0.15, -4.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(7.0f, 8.0f, 7.0f));
	model = als * translateMatrix * scaleMatrix;
	lalsofa(cube, lightingShader, model, colorArray, 3, 4);


	translateMatrix = glm::translate(identityMatrix, glm::vec3(-70.1, 0.3 + 0.15, 12.00));
	rotateYMatrix = glm::rotate(identityMatrix, glm::radians(80.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(7.0f, 8.0f, 7.0f));
	model = als * translateMatrix * rotateYMatrix * scaleMatrix;
	lalsofa(cube, lightingShader, model, colorArray, 3, 4);


	translateMatrix = glm::translate(identityMatrix, glm::vec3(-37.1, 0.3 + 0.15, 7.00));
	rotateYMatrix = glm::rotate(identityMatrix, glm::radians(-90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(7.0f, 8.0f, 7.0f));
	model = als * translateMatrix * rotateYMatrix * scaleMatrix;
	lalsofa(cube, lightingShader, model, colorArray, 3, 4);


	translateMatrix = glm::translate(identityMatrix, glm::vec3(-54.4, 0.3 + 0.15, 12.00));
	//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(-90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.8f, 3.0f, 6.0f));
	model = als * translateMatrix * scaleMatrix;
	coffeTable(cube, lightingShader, model);


	translateMatrix = glm::translate(identityMatrix, glm::vec3(-29.1, 0.3 + 0.15, 7.00));
	//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(-80.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.8f, 3.0f, 6.0f));
	model = als * translateMatrix * scaleMatrix;
	lamp(cube, lightingShader, model);


	translateMatrix = glm::translate(identityMatrix, glm::vec3(-44.1, 0.3 + 0.15, 10.00));
	//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(-80.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.8f, 3.0f, 6.0f));
	model = als * translateMatrix * scaleMatrix;
	lamp(cube, lightingShader, model);







	/////arektaaaaaaaaaaaaaaaaaa


	translateMatrix = glm::translate(identityMatrix, glm::vec3(-107.1, 0.3 + 0.15, -4.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(7.0f, 8.0f, 7.0f));
	model = als * translateMatrix * scaleMatrix;
	lalsofa(cube, lightingShader, model, colorArray, 3, 4);


	translateMatrix = glm::translate(identityMatrix, glm::vec3(-120.1, 0.3 + 0.15, 12.00));
	rotateYMatrix = glm::rotate(identityMatrix, glm::radians(80.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(7.0f, 8.0f, 7.0f));
	model = als * translateMatrix * rotateYMatrix * scaleMatrix;
	lalsofa(cube, lightingShader, model, colorArray, 3, 4);


	translateMatrix = glm::translate(identityMatrix, glm::vec3(-87.1, 0.3 + 0.15, 7.00));
	rotateYMatrix = glm::rotate(identityMatrix, glm::radians(-90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(7.0f, 8.0f, 7.0f));
	model = als * translateMatrix * rotateYMatrix * scaleMatrix;
	lalsofa(cube, lightingShader, model, colorArray, 3, 4);


	translateMatrix = glm::translate(identityMatrix, glm::vec3(-104.4, 0.3 + 0.15, 12.00));
	//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(-90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.8f, 3.0f, 6.0f));
	model = als * translateMatrix * scaleMatrix;
	coffeTable(cube, lightingShader, model);


	translateMatrix = glm::translate(identityMatrix, glm::vec3(-79.1, 0.3 + 0.15, 7.00));
	//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(-80.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.8f, 3.0f, 6.0f));
	model = als * translateMatrix * scaleMatrix;
	lamp(cube, lightingShader, model);

	/*  ////jharbati
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-65.0, 5.5 + 0.15, -52));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(3.9f, 2.6f, 2.0f));
	model = als * translateMatrix * scaleMatrix;
	jharbati(cube, lightingShader, model);
	*/





	translateMatrix = glm::translate(identityMatrix, glm::vec3(-90.1, -26.3 + 0.15, 54.00));
	//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(80.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.0f, 3.0f, 3.0f));
	model = als * translateMatrix * scaleMatrix;
	bookShelf(cube, lightingShader, model);


	translateMatrix = glm::translate(identityMatrix, glm::vec3(-14.1, -26.3 + 0.15, 54.00));
	//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(80.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.0f, 3.0f, 3.0f));
	model = als * translateMatrix * scaleMatrix;
	bookShelf(cube, lightingShader, model);






	//broom leg
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-68.0f, 0.19 + 0.15, -30.5));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.9f, 20.1f, .2f));
	model = als * translateMatrix * scaleMatrix;
	//Cylinder cylinder = Cylinder();
	cylinder.drawCylinder(lightingShader, model, 0.545f, 0.271f, 0.075f);


	translateMatrix = glm::translate(identityMatrix, glm::vec3(-85.0f, 0.19 + 0.15, -30.5));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.9f, 20.1f, .2f));
	model = als * translateMatrix * scaleMatrix;
	//Cylinder cylinder = Cylinder();
	cylinder.drawCylinder(lightingShader, model, 0.545f, 0.271f, 0.075f);



	translateMatrix = glm::translate(identityMatrix, glm::vec3(-80.58, 21.19 + 0.15, -30.5));
	rotateZMatrix = glm::rotate(identityMatrix, glm::radians(23.0f), glm::vec3(0.0f, 0.0f, 1.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(6.0f, 2.9f, 2.4f));
	model = als * translateMatrix * rotateZMatrix * scaleMatrix;
	// HalfSphere sphere = HalfSphere();
	sphere.drawHalfSphere(lightingShader, model, 0.545f, 0.271f, 0.075f);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(-72.58, 21.19 + 0.15, -30.5));
	rotateZMatrix = glm::rotate(identityMatrix, glm::radians(-23.0f), glm::vec3(0.0f, 0.0f, 1.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(6.0f, 2.9f, 2.4f));
	model = als * translateMatrix * rotateZMatrix * scaleMatrix;
	// HalfSphere sphere = HalfSphere();
	sphere.drawHalfSphere(lightingShader, model, 0.545f, 0.271f, 0.075f);


	translateMatrix = glm::translate(identityMatrix, glm::vec3(-83.6, 7.16 + 0.15, -30.6));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(14.0f, 1.5f, 0.9f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(-83.6, 0.16 + 0.15, -30.6));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.5f, 8.5f, 0.9f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(-70.6, 0.16 + 0.15, -30.6));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.5f, 8.5f, 0.9f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);


	//fireplace 
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-82.0, 0.16 + 0.15, -30.6));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(11.5f, 7.4f, 0.9f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	//cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(fr1, fr2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);


	//fireplace er upore dumbol
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-81.8, 8.0 + 0.15, -30.6));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(10.5f, 13.4f, 0.9f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	//cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(dumb1, dumb2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);


	//hagrid

	translateMatrix = glm::translate(identityMatrix, glm::vec3(-63.8, 8.0 + 0.15, -30.6));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(11.0f, 14.0f, 1.0f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	//cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(hagrid1, hagrid2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);


	translateMatrix = glm::translate(identityMatrix, glm::vec3(-64.8, 21.5 + 0.15, -30.6));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(12.0f, 1.2f, 1.0f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	//cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(table1, table2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(-63.8, 7.0 + 0.15, -30.6));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(11.5f, 1.4f, 1.0f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	//cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(table1, table2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(-64.8, 7.0 + 0.15, -30.6));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.2f, 14.9f, 1.0f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	//cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(table1, table2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(-52.8, 7.0 + 0.15, -30.6));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.1f, 15.1f, 1.0f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	//cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(table1, table2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);





	//snape
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-100.8, 8.0 + 0.15, -30.6));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(9.5f, 13.4f, 1.0f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	//cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(snape1, snape2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(-101.8, 21.0 + 0.15, -30.6));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(11.5f, 1.4f, 1.0f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	//cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(table1, table2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(-101.8, 7.0 + 0.15, -30.6));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(11.5f, 1.4f, 1.0f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	//cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(table1, table2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(-101.8, 7.0 + 0.15, -30.6));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.4f, 14.4f, 1.0f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	//cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(table1, table2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(-91.8, 7.0 + 0.15, -30.6));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.4f, 14.4f, 1.0f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	//cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(table1, table2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);


	//minevera1
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-126.8, 8.0 + 0.15, 0.0));
	rotateYMatrix = glm::rotate(identityMatrix, glm::radians(82.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(9.5f, 13.4f, 1.0f));
	model = als * translateMatrix * rotateYMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	//cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(minevera1, minevera2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);

	//minevera2
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-31.6, 12.0 + 0.15, 0.0));
	rotateYMatrix = glm::rotate(identityMatrix, glm::radians(82.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(9.5f, 13.4f, .8f));
	model = als * translateMatrix * rotateYMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	//cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(minevera1, minevera2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);

	//door
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-32.5, 0.0 + 0.15, -10.0));
	rotateYMatrix = glm::rotate(identityMatrix, glm::radians(-87.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(15.0f, 28.5f, 1.5f));
	model = als * translateMatrix * rotateYMatrix * scaleMatrix;
	cube.setTextureProperty(door1, door2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);

	//gryff flag
	translateMatrix = glm::translate(identityMatrix, glm::vec3(6.3, 9.0 + 0.15, -8.0));
	rotateYMatrix = glm::rotate(identityMatrix, glm::radians(-87.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(12.0f, 10.5f, .5f));
	model = als * translateMatrix * rotateYMatrix * scaleMatrix;
	cube.setTextureProperty(flag1, flag2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);
















	////////potion classsssssssssssssssss////////////////////////////////////////////////
	//deyaler left cylinder
	translateMatrix = glm::translate(identityMatrix, glm::vec3(25.0, 65 + 0.15, -30.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.0f, 29.0f, 1.7f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cylinder.drawCylinder(lightingShader, model, 0.545f, 0.271f, 0.075f);

	//right cyllinder
	translateMatrix = glm::translate(identityMatrix, glm::vec3(106.0, 65 + 0.15, -30.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.0f, 29.0f, 1.7f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cylinder.drawCylinder(lightingShader, model, 0.545f, 0.271f, 0.075f);


	/* //window diboooooooooooo
	translateMatrix = glm::translate(identityMatrix, glm::vec3(8.0, 37 + 0.15, -30.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(73.5f, 57.4f, 0.9f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	//cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(p1, p2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);
	*/


	//left
	translateMatrix = glm::translate(identityMatrix, glm::vec3(46.0, 102.5 + 0.3, -28.00));
	//rotateXMatrix = glm::rotate(identityMatrix, glm::radians(180.0f), glm::vec3(1.0f, 0.0f, 0.0f));
	rotateZMatrix = glm::rotate(identityMatrix, glm::radians(22.0f), glm::vec3(0.0f, 0.0f, 1.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(22.5f, 2.9f, .4f));
	model = als * translateMatrix * rotateZMatrix * scaleMatrix;
	//HalfSphere sphere = HalfSphere();
	sphere.drawHalfSphere(lightingShader, model, 0.5f, 0.271f, 0.075f);
	//right
	translateMatrix = glm::translate(identityMatrix, glm::vec3(84.0, 102.5 + 0.3, -28.00));
	//rotateXMatrix = glm::rotate(identityMatrix, glm::radians(180.0f), glm::vec3(1.0f, 0.0f, 0.0f));
	rotateZMatrix = glm::rotate(identityMatrix, glm::radians(-22.0f), glm::vec3(0.0f, 0.0f, 1.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(22.5f, 2.9f, .4f));
	model = als * translateMatrix * rotateZMatrix * scaleMatrix;
	//HalfSphere sphere = HalfSphere();
	sphere.drawHalfSphere(lightingShader, model, 0.5f, 0.271f, 0.075f);

	/* //left wall dhore cylinder
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-10.0, 67 + 0.15, -23.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.0f, 25.0f, 2.7f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cylinder.drawCylinder(lightingShader, model, 0.545f, 0.271f, 0.075f);
	*/

	//table
	//top
	translateMatrix = glm::translate(identityMatrix, glm::vec3(20.8, 55.0 + 0.15, -0.5));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(43.5f, 2.4f, 22.9f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	//cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(table1, table2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);

	//leg piche left
	translateMatrix = glm::translate(identityMatrix, glm::vec3(20.8, 41.0 + 0.15, -0.5));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.5f, 17.4f, 3.9f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	//cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(table1, table2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);

	//leg piche right
	translateMatrix = glm::translate(identityMatrix, glm::vec3(60.8, 41.0 + 0.15, -0.5));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.5f, 17.4f, 3.9f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	//cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(table1, table2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);

	//leg shamne right
	translateMatrix = glm::translate(identityMatrix, glm::vec3(59.5, 41.0 + 0.15, 18.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.5f, 17.4f, 3.9f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	//cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(table1, table2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);

	//leg shamne left
	translateMatrix = glm::translate(identityMatrix, glm::vec3(20.8, 41.0 + 0.15, 18.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.5f, 17.4f, 3.9f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	//cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(table1, table2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);



	////////////////////////// Table er shamne chamoch
	int numIteratio = 6;
	float distanceBetweenGro = 5.0f;

	// Draw on positive horizontal x-axis
	for (int i = 0; i < numIteratio; ++i) {

		translateMatrix = glm::translate(identityMatrix, glm::vec3(28.8 + i * distanceBetweenGro, 56.0 + 0.15, 25.5));
		scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 1.4f, .9f));
		model = als * translateMatrix * scaleMatrix;
		cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
		cube.drawCubeWithMaterialisticProperty(lightingShader, model);

		translateMatrix = glm::translate(identityMatrix, glm::vec3(28.8 + i * distanceBetweenGro, 56.0 + 0.15, 25.5));
		scaleMatrix = glm::scale(identityMatrix, glm::vec3(.4f, .001f, 2.9f));
		model = als * translateMatrix * scaleMatrix;
		cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
		cube.drawCubeWithMaterialisticProperty(lightingShader, model);

		translateMatrix = glm::translate(identityMatrix, glm::vec3(28.8 + i * distanceBetweenGro, 49.0 + 0.15, 25.5));
		scaleMatrix = glm::scale(identityMatrix, glm::vec3(.4f, 8.0f, .5f));
		model = als * translateMatrix * scaleMatrix;
		cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
		cube.drawCubeWithMaterialisticProperty(lightingShader, model);

		// Chamocher golla
		translateMatrix = glm::translate(identityMatrix, glm::vec3(28.9 + i * distanceBetweenGro, 48.7 + 0.3, 28.00));
		rotateZMatrix = glm::rotate(identityMatrix, glm::radians(90.0f), glm::vec3(0.0f, 0.0f, 1.0f));
		//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
		rotateXMatrix = glm::rotate(identityMatrix, glm::radians(-90.0f), glm::vec3(1.0f, 0.0f, 0.0f));
		//rotateXMatrix = glm::rotate(identityMatrix, glm::radians(90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
		//rotateZMatrix = glm::rotate(identityMatrix, glm::radians(270.0f), glm::vec3(0.0f, 0.0f, 1.0f));
		rotateYMatrix = glm::rotate(identityMatrix, glm::radians(180.0f), glm::vec3(0.0f, 1.0f, 0.0f));
		scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.0f, 1.2f, .6f));
		model = als * translateMatrix * rotateZMatrix * rotateXMatrix * rotateYMatrix * scaleMatrix;
		//HalfSphere sphere = HalfSphere();
		sphere.drawHalfSphere(lightingShader, model, 0.5f, 0.271f, 0.075f);
	}



	//ekta korai
	translateMatrix = glm::translate(identityMatrix, glm::vec3(33.0, 68.7 + 0.3, 8.00));
	rotateXMatrix = glm::rotate(identityMatrix, glm::radians(180.0f), glm::vec3(1.0f, 0.0f, 0.0f));
	//rotateZMatrix = glm::rotate(identityMatrix, glm::radians(-22.0f), glm::vec3(0.0f, 0.0f, 1.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(6.5f, 8.9f, 2.6f));
	model = als * translateMatrix * rotateXMatrix * scaleMatrix;
	//HalfSphere sphere = HalfSphere();
	sphere.drawHalfSphere(lightingShader, model, 0.5f, 0.271f, 0.075f);


	//upore tube
	translateMatrix = glm::translate(identityMatrix, glm::vec3(33.0, 68.7 + 0.3, 8.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(3.3f, 1.9f, 2.0f));
	model = als * translateMatrix * scaleMatrix;

	// Draw the cylinder for each pillar
	Torus torus = Torus();
	torus.drawTorus(lightingShader, model, 0.5f, 0.271f, 0.075f);




	//baamn korai er niche left

	translateMatrix = glm::translate(identityMatrix, glm::vec3(27.8, 57.9 + 0.15, 7.0));
	rotateZMatrix = glm::rotate(identityMatrix, glm::radians(-22.0f), glm::vec3(0.0f, 0.0f, 1.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.9f, 4.0f, 1.5f));
	model = als * translateMatrix * rotateZMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	//cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(table1, table2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);

	//baam korai niche majhe
	translateMatrix = glm::translate(identityMatrix, glm::vec3(32.8, 57.9 + 0.15, 7.1));
	//rotateZMatrix = glm::rotate(identityMatrix, glm::radians(22.0f), glm::vec3(0.0f, 0.0f, 1.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.9f, 5.9f, 1.5f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	//cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(table1, table2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);

	//baam korai niche right
	translateMatrix = glm::translate(identityMatrix, glm::vec3(36.8, 57.3 + 0.15, 7.0));
	rotateZMatrix = glm::rotate(identityMatrix, glm::radians(22.0f), glm::vec3(0.0f, 0.0f, 1.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.9f, 6.0f, 1.5f));
	model = als * translateMatrix * rotateZMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	//cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(table1, table2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);



	//arekta korai
	translateMatrix = glm::translate(identityMatrix, glm::vec3(55.0, 68.7 + 0.3, 8.00));
	rotateXMatrix = glm::rotate(identityMatrix, glm::radians(180.0f), glm::vec3(1.0f, 0.0f, 0.0f));
	//rotateZMatrix = glm::rotate(identityMatrix, glm::radians(-22.0f), glm::vec3(0.0f, 0.0f, 1.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(6.5f, 8.9f, 2.6f));
	model = als * translateMatrix * rotateXMatrix * scaleMatrix;
	//HalfSphere sphere = HalfSphere();
	sphere.drawHalfSphere(lightingShader, model, 0.5f, 0.271f, 0.075f);

	//upore tube
	translateMatrix = glm::translate(identityMatrix, glm::vec3(55.0, 68.7 + 0.3, 8.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(3.3f, 1.9f, 2.0f));
	model = als * translateMatrix * scaleMatrix;

	// Draw the cylinder for each pillar
	//Torus torus = Torus();
	torus.drawTorus(lightingShader, model, 0.5f, 0.271f, 0.075f);


	//dann korai er niche left

	translateMatrix = glm::translate(identityMatrix, glm::vec3(49.8, 57.9 + 0.15, 7.0));
	rotateZMatrix = glm::rotate(identityMatrix, glm::radians(-22.0f), glm::vec3(0.0f, 0.0f, 1.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.9f, 4.0f, 1.5f));
	model = als * translateMatrix * rotateZMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	//cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(table1, table2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);

	//daan korai niche majhe
	translateMatrix = glm::translate(identityMatrix, glm::vec3(54.8, 57.9 + 0.15, 7.1));
	//rotateZMatrix = glm::rotate(identityMatrix, glm::radians(22.0f), glm::vec3(0.0f, 0.0f, 1.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.9f, 5.9f, 1.5f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	//cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(table1, table2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);

	//daan korai niche right
	translateMatrix = glm::translate(identityMatrix, glm::vec3(58.8, 57.3 + 0.15, 7.0));
	rotateZMatrix = glm::rotate(identityMatrix, glm::radians(22.0f), glm::vec3(0.0f, 0.0f, 1.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.9f, 6.0f, 1.5f));
	model = als * translateMatrix * rotateZMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	//cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(table1, table2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);




	//majhe korai
	translateMatrix = glm::translate(identityMatrix, glm::vec3(45.0, 68.7 + 0.3, 17.00));
	rotateXMatrix = glm::rotate(identityMatrix, glm::radians(180.0f), glm::vec3(1.0f, 0.0f, 0.0f));
	//rotateZMatrix = glm::rotate(identityMatrix, glm::radians(-22.0f), glm::vec3(0.0f, 0.0f, 1.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(6.5f, 8.9f, 2.6f));
	model = als * translateMatrix * rotateXMatrix * scaleMatrix;
	//HalfSphere sphere = HalfSphere();
	sphere.drawHalfSphere(lightingShader, model, 0.5f, 0.271f, 0.075f);


	//upore tube
	translateMatrix = glm::translate(identityMatrix, glm::vec3(45.0, 68.7 + 0.3, 17.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(3.3f, 1.9f, 2.0f));
	model = als * translateMatrix * scaleMatrix;

	// Draw the cylinder for each pillar
	//Torus torus = Torus();
	torus.drawTorus(lightingShader, model, 0.5f, 0.271f, 0.075f);


	//mid korai er niche left

	translateMatrix = glm::translate(identityMatrix, glm::vec3(40.5, 57.9 + 0.15, 16.9));
	rotateZMatrix = glm::rotate(identityMatrix, glm::radians(-22.0f), glm::vec3(0.0f, 0.0f, 1.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.9f, 4.0f, 1.5f));
	model = als * translateMatrix * rotateZMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	//cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(table1, table2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);

	//mid korai niche majhe
	translateMatrix = glm::translate(identityMatrix, glm::vec3(44.8, 57.9 + 0.15, 17.1));
	//rotateZMatrix = glm::rotate(identityMatrix, glm::radians(22.0f), glm::vec3(0.0f, 0.0f, 1.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.9f, 5.9f, 1.5f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	//cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(table1, table2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);

	//mid korai niche right
	translateMatrix = glm::translate(identityMatrix, glm::vec3(48.9, 57.3 + 0.15, 16.7));
	rotateZMatrix = glm::rotate(identityMatrix, glm::radians(22.0f), glm::vec3(0.0f, 0.0f, 1.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.9f, 5.9f, 1.5f));
	model = als * translateMatrix * rotateZMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	//cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(table1, table2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);


	//table er nicher korai
	translateMatrix = glm::translate(identityMatrix, glm::vec3(42.0, 53.7 + 0.3, 17.00));
	rotateXMatrix = glm::rotate(identityMatrix, glm::radians(180.0f), glm::vec3(1.0f, 0.0f, 0.0f));
	//rotateZMatrix = glm::rotate(identityMatrix, glm::radians(-22.0f), glm::vec3(0.0f, 0.0f, 1.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(6.5f, 8.9f, 2.6f));
	model = als * translateMatrix * rotateXMatrix * scaleMatrix;
	//HalfSphere sphere = HalfSphere();
	sphere.drawHalfSphere(lightingShader, model, 0.5f, 0.271f, 0.075f);


	//mid korai er niche left

	translateMatrix = glm::translate(identityMatrix, glm::vec3(37.5, 42.9 + 0.15, 16.9));
	rotateZMatrix = glm::rotate(identityMatrix, glm::radians(-22.0f), glm::vec3(0.0f, 0.0f, 1.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.9f, 4.0f, 1.5f));
	model = als * translateMatrix * rotateZMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	//cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(table1, table2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);

	//mid korai niche majhe
	translateMatrix = glm::translate(identityMatrix, glm::vec3(41.8, 42.9 + 0.15, 17.1));
	//rotateZMatrix = glm::rotate(identityMatrix, glm::radians(22.0f), glm::vec3(0.0f, 0.0f, 1.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.9f, 5.9f, 1.5f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	//cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(table1, table2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);

	//mid korai niche right
	translateMatrix = glm::translate(identityMatrix, glm::vec3(45.9, 42.3 + 0.15, 16.7));
	rotateZMatrix = glm::rotate(identityMatrix, glm::radians(22.0f), glm::vec3(0.0f, 0.0f, 1.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.9f, 5.9f, 1.5f));
	model = als * translateMatrix * rotateZMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	//cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(table1, table2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);




	//////////////arektaaaaaaaaaaa  table(right)
	//top
	translateMatrix = glm::translate(identityMatrix, glm::vec3(80.8, 55.0 + 0.15, -0.5));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(43.5f, 2.4f, 22.9f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	//cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(table1, table2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);

	//leg piche left
	translateMatrix = glm::translate(identityMatrix, glm::vec3(80.8, 41.0 + 0.15, -0.5));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.5f, 17.4f, 3.9f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	//cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(table1, table2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);

	//leg piche right
	translateMatrix = glm::translate(identityMatrix, glm::vec3(120.8, 41.0 + 0.15, -0.5));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.5f, 17.4f, 3.9f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	//cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(table1, table2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);

	//leg shamne right
	translateMatrix = glm::translate(identityMatrix, glm::vec3(119.5, 41.0 + 0.15, 18.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.5f, 17.4f, 3.9f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	//cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(table1, table2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);

	//leg shamne left
	translateMatrix = glm::translate(identityMatrix, glm::vec3(80.8, 41.0 + 0.15, 18.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.5f, 17.4f, 3.9f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	//cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(table1, table2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);








	/*
	//dhowa
	translateMatrix = glm::translate(identityMatrix, glm::vec3(45.0, 70.7 + 0.3, 17.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.09f, 1.0f, 0.1f));
	model = als * translateMatrix * scaleMatrix;
	sphere.drawHalfSphere(lightingShader, model, 0.0f, 1.0f, 0.0);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(44.0, 70.7 + 0.3, 17.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.09f, 1.0f, 0.1f));
	model = als * translateMatrix * scaleMatrix;
	sphere.drawHalfSphere(lightingShader, model, 0.0f, 1.0f, 0.0);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(46.0, 70.7 + 0.3, 17.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.09f, 1.0f, 0.1f));
	model = als * translateMatrix * scaleMatrix;
	sphere.drawHalfSphere(lightingShader, model, 0.0f, 1.0f, 0.0);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(47.0, 72.7 + 0.3, 17.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.09f, 1.0f, 0.1f));
	model = als * translateMatrix * scaleMatrix;
	sphere.drawHalfSphere(lightingShader, model, 0.0f, 1.0f, 0.0);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(48.0, 71.7 + 0.3, 16.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.09f, 1.0f, 0.1f));
	model = als * translateMatrix * scaleMatrix;
	sphere.drawHalfSphere(lightingShader, model, 0.0f, 1.0f, 0.0);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(45.0, 70.7 + 0.3, 15.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.09f, 1.0f, 0.1f));
	model = als * translateMatrix * scaleMatrix;
	sphere.drawHalfSphere(lightingShader, model, 0.0f, 1.0f, 0.0);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(42.0, 70.7 + 0.3, 16.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.09f, 1.0f, 0.1f));
	model = als * translateMatrix * scaleMatrix;
	sphere.drawHalfSphere(lightingShader, model, 0.0f, 1.0f, 0.0);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(43.0, 70.7 + 0.3, 17.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.09f, 1.0f, 0.1f));
	model = als * translateMatrix * scaleMatrix;
	sphere.drawHalfSphere(lightingShader, model, 0.0f, 1.0f, 0.0);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(43.0, 71.7 + 0.3, 17.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.09f, 1.0f, 0.1f));
	model = als * translateMatrix * scaleMatrix;
	sphere.drawHalfSphere(lightingShader, model, 0.0f, 1.0f, 0.0);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(42.0, 71.7 + 0.3, 17.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.09f, 1.0f, 0.1f));
	model = als * translateMatrix * scaleMatrix;
	sphere.drawHalfSphere(lightingShader, model, 0.0f, 1.0f, 0.0);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(43.0, 71.7 + 0.3, 16.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.09f, 1.0f, 0.1f));
	model = als * translateMatrix * scaleMatrix;
	sphere.drawHalfSphere(lightingShader, model, 0.0f, 1.0f, 0.0);


	*/


	// Define the distance between each group along the x-axis
	float distanceBetweenGroups = 14.8f;

	for (int i = 0; i < 3; ++i) {
		// Triangle
		translateMatrix = glm::translate(identityMatrix, glm::vec3(89.8 + i * distanceBetweenGroups, 62.0 + 0.15, 6.5));
		rotateXMatrix = glm::rotate(identityMatrix, glm::radians(90.0f), glm::vec3(1.0f, 0.0f, 0.0f));
		scaleMatrix = glm::scale(identityMatrix, glm::vec3(7.0f, 6.5f, .4f));
		model = als * translateMatrix * rotateXMatrix * scaleMatrix;
		Triangle triangle = Triangle();
		triangle.drawTriangle(lightingShader, model, 0.0f, 0.0f, 0.0f);

		// Dori 1
		translateMatrix = glm::translate(identityMatrix, glm::vec3(87.8 + i * distanceBetweenGroups, 56.0 + 0.15, 5.5));
		scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 6.0f, .2f));
		model = als * translateMatrix * scaleMatrix;
		cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
		cube.drawCubeWithMaterialisticProperty(lightingShader, model);

		// Dori 2
		translateMatrix = glm::translate(identityMatrix, glm::vec3(91.8 + i * distanceBetweenGroups, 56.0 + 0.15, 5.5));
		scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 6.0f, .2f));
		model = als * translateMatrix * scaleMatrix;
		cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
		cube.drawCubeWithMaterialisticProperty(lightingShader, model);

		// Dori 3
		translateMatrix = glm::translate(identityMatrix, glm::vec3(89.9 + i * distanceBetweenGroups, 56.0 + 0.15, 7.7));
		scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 6.0f, .2f));
		model = als * translateMatrix * scaleMatrix;
		cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
		cube.drawCubeWithMaterialisticProperty(lightingShader, model);

		// Choto Korai
		translateMatrix = glm::translate(identityMatrix, glm::vec3(89.9 + i * distanceBetweenGroups, 65.99 + 0.15, 7.7));
		rotateXMatrix = glm::rotate(identityMatrix, glm::radians(180.0f), glm::vec3(1.0f, 0.0f, 0.0f));
		scaleMatrix = glm::scale(identityMatrix, glm::vec3(3.7f, 3.1f, 1.6f));
		model = als * translateMatrix * rotateXMatrix * scaleMatrix;
		sphere.drawHalfSphere(lightingShader, model, 0.5f, 0.271f, 0.075f);
	}


	int numIterations = 2;

	for (int i = 0; i < numIterations; ++i) {
		// Dari Palla
		translateMatrix = glm::translate(identityMatrix, glm::vec3(92.8 + i * distanceBetweenGroups, 67.7 + 0.15, 16.6));
		rotateZMatrix = glm::rotate(identityMatrix, glm::radians(21.0f), glm::vec3(0.0f, 0.0f, 1.0f));
		scaleMatrix = glm::scale(identityMatrix, glm::vec3(8.9f, .6f, .9f));
		model = als * translateMatrix * rotateZMatrix * scaleMatrix;
		cube.setTextureProperty(table1, table2, 32.0);
		cube.drawCubeWithTexture(lightingShader, model);

		// Left
		translateMatrix = glm::translate(identityMatrix, glm::vec3(92.8 + i * distanceBetweenGroups, 62.3 + 0.15, 16.6));
		scaleMatrix = glm::scale(identityMatrix, glm::vec3(.5f, 5.9f, .9f));
		model = als * translateMatrix * scaleMatrix;
		cube.setTextureProperty(table1, table2, 32.0);
		cube.drawCubeWithTexture(lightingShader, model);

		// Right
		translateMatrix = glm::translate(identityMatrix, glm::vec3(100.8 + i * distanceBetweenGroups, 64.9 + 0.15, 16.6));
		scaleMatrix = glm::scale(identityMatrix, glm::vec3(.5f, 6.3f, .9f));
		model = als * translateMatrix * scaleMatrix;
		cube.setTextureProperty(table1, table2, 32.0);
		cube.drawCubeWithTexture(lightingShader, model);

		// Middle
		translateMatrix = glm::translate(identityMatrix, glm::vec3(96.8 + i * distanceBetweenGroups, 58.5 + 0.15, 16.6));
		scaleMatrix = glm::scale(identityMatrix, glm::vec3(.5f, 13.0f, .9f));
		model = als * translateMatrix * scaleMatrix;
		cube.setTextureProperty(table1, table2, 32.0);
		cube.drawCubeWithTexture(lightingShader, model);

		// Right (small)
		translateMatrix = glm::translate(identityMatrix, glm::vec3(100.0 + i * distanceBetweenGroups, 64.1 + 0.15, 16.6));
		rotateZMatrix = glm::rotate(identityMatrix, glm::radians(21.0f), glm::vec3(0.0f, 0.0f, 1.0f));
		scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.1f, .5f, 2.0f));
		model = als * translateMatrix * rotateZMatrix * scaleMatrix;
		cube.setTextureProperty(table1, table2, 32.0);
		cube.drawCubeWithTexture(lightingShader, model);

		// Left (small)
		translateMatrix = glm::translate(identityMatrix, glm::vec3(92.4 + i * distanceBetweenGroups, 62.3 + 0.15, 16.6));
		rotateZMatrix = glm::rotate(identityMatrix, glm::radians(21.0f), glm::vec3(0.0f, 0.0f, 1.0f));
		scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.1f, .5f, 2.0f));
		model = als * translateMatrix * rotateZMatrix * scaleMatrix;
		cube.setTextureProperty(table1, table2, 32.0);
		cube.drawCubeWithTexture(lightingShader, model);
	}



	////jharbati
	translateMatrix = glm::translate(identityMatrix, glm::vec3(80.0, 70.8 + 0.15, 28.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(6.8f, 5.0f, 3.6f));
	model = als * translateMatrix * scaleMatrix;
	jharbati(cube, lightingShader, model);





	//table candles
	translateMatrix = glm::translate(identityMatrix, glm::vec3(86.4, 57.3 + 0.15, 19.9));
	//rotateZMatrix = glm::rotate(identityMatrix, glm::radians(21.0f), glm::vec3(0.0f, 0.0f, 1.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 4.9f, .5f));
	model = als * translateMatrix * scaleMatrix;
	cube.setMaterialisticEimu(0.0, 0.0, 0.0);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(86.0, 62.0 + 0.15, 19.8));
	//rotateZMatrix = glm::rotate(identityMatrix, glm::radians(21.0f), glm::vec3(0.0f, 0.0f, 1.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.2f, .2f, 1.0f));
	model = als * translateMatrix * scaleMatrix;
	cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//bottom
	translateMatrix = glm::translate(identityMatrix, glm::vec3(86.3, 62.2 + 0.15, 19.8));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.3, 1.7f, .2f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, als, 1.0, 1.0, 1.0);
	cube.setMaterialisticEimu(1.0, 1.0, 1.0);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);


	//top
	translateMatrix = glm::translate(identityMatrix, glm::vec3(86.4, 64.0 + 0.15, 19.8));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.12f, 1.2f, 0.1f));
	model = als * translateMatrix * scaleMatrix;
	sphere.drawHalfSphere(lightingShader, model, 1.0f, 1.0f, 0.0);



	//table candles
	translateMatrix = glm::translate(identityMatrix, glm::vec3(94.4, 57.3 + 0.15, 19.9));
	//rotateZMatrix = glm::rotate(identityMatrix, glm::radians(21.0f), glm::vec3(0.0f, 0.0f, 1.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 4.9f, .5f));
	model = als * translateMatrix * scaleMatrix;
	cube.setMaterialisticEimu(0.0, 0.0, 0.0);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(94.0, 62.0 + 0.15, 19.8));
	//rotateZMatrix = glm::rotate(identityMatrix, glm::radians(21.0f), glm::vec3(0.0f, 0.0f, 1.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.2f, .2f, 1.0f));
	model = als * translateMatrix * scaleMatrix;
	cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//bottom
	translateMatrix = glm::translate(identityMatrix, glm::vec3(94.3, 62.2 + 0.15, 19.8));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.3, 1.7f, .2f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, als, 1.0, 1.0, 1.0);
	cube.setMaterialisticEimu(1.0, 1.0, 1.0);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);


	//top
	translateMatrix = glm::translate(identityMatrix, glm::vec3(94.4, 64.0 + 0.15, 19.8));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.12f, 1.2f, 0.1f));
	model = als * translateMatrix * scaleMatrix;
	sphere.drawHalfSphere(lightingShader, model, 1.0f, 1.0f, 0.0);




	//table candles
	translateMatrix = glm::translate(identityMatrix, glm::vec3(102.4, 57.3 + 0.15, 19.9));
	//rotateZMatrix = glm::rotate(identityMatrix, glm::radians(21.0f), glm::vec3(0.0f, 0.0f, 1.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 4.9f, .5f));
	model = als * translateMatrix * scaleMatrix;
	cube.setMaterialisticEimu(0.0, 0.0, 0.0);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(102.0, 62.0 + 0.15, 19.8));
	//rotateZMatrix = glm::rotate(identityMatrix, glm::radians(21.0f), glm::vec3(0.0f, 0.0f, 1.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.2f, .2f, 1.0f));
	model = als * translateMatrix * scaleMatrix;
	cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//bottom
	translateMatrix = glm::translate(identityMatrix, glm::vec3(102.3, 62.2 + 0.15, 19.8));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.3, 1.7f, .2f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, als, 1.0, 1.0, 1.0);
	cube.setMaterialisticEimu(1.0, 1.0, 1.0);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);


	//top
	translateMatrix = glm::translate(identityMatrix, glm::vec3(102.4, 64.0 + 0.15, 19.8));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.12f, 1.2f, 0.1f));
	model = als * translateMatrix * scaleMatrix;
	sphere.drawHalfSphere(lightingShader, model, 1.0f, 1.0f, 0.0);



	//table candles
	translateMatrix = glm::translate(identityMatrix, glm::vec3(110.4, 57.3 + 0.15, 19.9));
	//rotateZMatrix = glm::rotate(identityMatrix, glm::radians(21.0f), glm::vec3(0.0f, 0.0f, 1.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 4.9f, .5f));
	model = als * translateMatrix * scaleMatrix;
	cube.setMaterialisticEimu(0.0, 0.0, 0.0);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(110.0, 62.0 + 0.15, 19.8));
	//rotateZMatrix = glm::rotate(identityMatrix, glm::radians(21.0f), glm::vec3(0.0f, 0.0f, 1.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.2f, .2f, 1.0f));
	model = als * translateMatrix * scaleMatrix;
	cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//bottom
	translateMatrix = glm::translate(identityMatrix, glm::vec3(110.3, 62.2 + 0.15, 19.8));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.3, 1.7f, .2f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, als, 1.0, 1.0, 1.0);
	cube.setMaterialisticEimu(1.0, 1.0, 1.0);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);


	//top
	translateMatrix = glm::translate(identityMatrix, glm::vec3(110.4, 64.0 + 0.15, 19.8));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.12f, 1.2f, 0.1f));
	model = als * translateMatrix * scaleMatrix;
	sphere.drawHalfSphere(lightingShader, model, 1.0f, 1.0f, 0.0);



	//table candles
	translateMatrix = glm::translate(identityMatrix, glm::vec3(118.4, 57.3 + 0.15, 19.9));
	//rotateZMatrix = glm::rotate(identityMatrix, glm::radians(21.0f), glm::vec3(0.0f, 0.0f, 1.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2f, 4.9f, .5f));
	model = als * translateMatrix * scaleMatrix;
	cube.setMaterialisticEimu(0.0, 0.0, 0.0);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(118.0, 62.0 + 0.15, 19.8));
	//rotateZMatrix = glm::rotate(identityMatrix, glm::radians(21.0f), glm::vec3(0.0f, 0.0f, 1.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.2f, .2f, 1.0f));
	model = als * translateMatrix * scaleMatrix;
	cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//bottom
	translateMatrix = glm::translate(identityMatrix, glm::vec3(118.3, 62.2 + 0.15, 19.8));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.3, 1.7f, .2f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, als, 1.0, 1.0, 1.0);
	cube.setMaterialisticEimu(1.0, 1.0, 1.0);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);


	//top
	translateMatrix = glm::translate(identityMatrix, glm::vec3(118.4, 64.0 + 0.15, 19.8));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.12f, 1.2f, 0.1f));
	model = als * translateMatrix * scaleMatrix;
	sphere.drawHalfSphere(lightingShader, model, 1.0f, 1.0f, 0.0);




	//table candles
	translateMatrix = glm::translate(identityMatrix, glm::vec3(27.4, 57.3 + 0.15, 19.9));
	//rotateZMatrix = glm::rotate(identityMatrix, glm::radians(21.0f), glm::vec3(0.0f, 0.0f, 1.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.5f, 6.9f, .6f));
	model = als * translateMatrix * scaleMatrix;
	cube.setMaterialisticEimu(0.0, 0.0, 0.0);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(27.0, 64.0 + 0.15, 19.8));
	//rotateZMatrix = glm::rotate(identityMatrix, glm::radians(21.0f), glm::vec3(0.0f, 0.0f, 1.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.0f, .6f, 1.0f));
	model = als * translateMatrix * scaleMatrix;
	cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//bottom
	translateMatrix = glm::translate(identityMatrix, glm::vec3(27.9, 64.1 + 0.15, 19.8));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.7, 5.1f, .2f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, als, 1.0, 1.0, 1.0);
	cube.setMaterialisticEimu(1.0, 1.0, 1.0);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);


	//top
	translateMatrix = glm::translate(identityMatrix, glm::vec3(28.3, 69.2 + 0.15, 19.8));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.21f, 3.9f, 0.23f));
	model = als * translateMatrix * scaleMatrix;
	sphere.drawHalfSphere(lightingShader, model, 1.0f, 1.0f, 0.0);


	//class er bench
	for (int i = 0; i < 2; ++i) {
		// Inner loop: 3 times on positive z axis
		for (int j = 0; j < 3; ++j) {
			// class er bench
			translateMatrix = glm::translate(identityMatrix, glm::vec3(4.3 + i * 90.0, 34.2 + 0.15, 49.0 + j * 43.0));
			//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(80.0f), glm::vec3(0.0f, 1.0f, 0.0f));
			scaleMatrix = glm::scale(identityMatrix, glm::vec3(16.0f, 11.0f, 12.0f));
			model = als * translateMatrix * scaleMatrix;
			benchToll(cube, lightingShader, model);
		}
	}




	//class er bookshelf1
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-3.3, 36.0 + 0.15, 7.8));
	rotateYMatrix = glm::rotate(identityMatrix, glm::radians(90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(8.0f, 8.0f, 5.0f));
	model = als * translateMatrix * rotateYMatrix * scaleMatrix;
	bookShelffff(cube, lightingShader, model, colorArray, 3, 4);


	//class er bookshelf2
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-8.3, 36.0 + 0.15, 7.8));
	rotateYMatrix = glm::rotate(identityMatrix, glm::radians(90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(8.0f, 8.0f, 5.0f));
	model = als * translateMatrix * rotateYMatrix * scaleMatrix;
	bookShelffff(cube, lightingShader, model, colorArray, 3, 4);

	//class er bookshelf3
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-13.3, 36.0 + 0.15, 7.8));
	rotateYMatrix = glm::rotate(identityMatrix, glm::radians(90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(8.0f, 8.0f, 5.0f));
	model = als * translateMatrix * rotateYMatrix * scaleMatrix;
	bookShelffff(cube, lightingShader, model, colorArray, 3, 4);

	//class er bookshelf4
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-20.3, 36.0 + 0.15, 7.8));
	rotateYMatrix = glm::rotate(identityMatrix, glm::radians(90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(8.0f, 8.0f, 5.0f));
	model = als * translateMatrix * rotateYMatrix * scaleMatrix;
	bookShelffff(cube, lightingShader, model, colorArray, 3, 4);

	//almari1
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-20.3, 36.2 + 0.15, 55.9));
	//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(8.0f, 9.0f, 9.0f));
	model = als * translateMatrix * rotateYMatrix * scaleMatrix;
	almari(cube, lightingShader, model);


	//pillars
	// Define the number of pillars
	const int numPillars = 6;

	for (int i = 0; i < numPillars; ++i) {
		// Calculate the z-position for each pillar
		float zPosition = -5.8f + i * 26.2f; // Assuming 2.2 units gap between pillars

		// Translate and scale the pillar
		translateMatrix = glm::translate(identityMatrix, glm::vec3(154.3, 75.2 + 0.15, zPosition));
		scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.9f, 47.1f, 2.2f));
		model = als * translateMatrix * scaleMatrix;

		// Draw the cylinder for each pillar
		cylinder.drawCylinder(lightingShader, model, 0.545f, 0.271f, 0.075f);
	}



	//board
	//almari1
	translateMatrix = glm::translate(identityMatrix, glm::vec3(165.0, 37.2 + 0.15, 39.9));
	//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(10.0f, 9.0f, 9.0f));
	model = als * translateMatrix * scaleMatrix;
	board(cube, lightingShader, model);


	////////agunnnnn
	// Define the number of floor fire holders
	const int numFloorFireHolders = 3;

	for (int i = 0; i < numFloorFireHolders; ++i) {
		// Calculate the z-position for each floor fire holder
		float zPosition = 52.9f + i * 30.0; // Replace someGapValue with the appropriate gap between holders

		// Translate, rotate, and scale the floor fire holder
		translateMatrix = glm::translate(identityMatrix, glm::vec3(69.0, 49.0 + 0.15, zPosition));
		// Rotate if needed
		// rotateYMatrix = glm::rotate(identityMatrix, glm::radians(90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
		scaleMatrix = glm::scale(identityMatrix, glm::vec3(5.0f, 5.0f, 9.0f));
		model = als * translateMatrix * scaleMatrix;

		// Draw the floor fire holder for each iteration
		floorFireHolder2(cube, lightingShader, model);
	}



	const int numFloorFireHolder = 3;

	for (int i = 0; i < numFloorFireHolder; ++i) {
		// Calculate the z-position for each floor fire holder
		float zPosition = 60.9f + i * 28.0; // Replace someGapValue with the appropriate gap between holders

		// Translate, rotate, and scale the floor fire holder
		translateMatrix = glm::translate(identityMatrix, glm::vec3(-20.0, 49.0 + 0.15, zPosition));
		// Rotate if needed
		// rotateYMatrix = glm::rotate(identityMatrix, glm::radians(90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
		scaleMatrix = glm::scale(identityMatrix, glm::vec3(5.0f, 5.0f, 9.0f));
		model = als * translateMatrix * scaleMatrix;

		// Draw the floor fire holder for each iteration
		floorFireHolder2(cube, lightingShader, model);
	}






	//////////////////////////////DADA CLAsSroommmmmmm/////////////////

	translateMatrix = glm::translate(identityMatrix, glm::vec3(-100.0, 40.2 + 0.15, 10.0));
	//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(5.0f, 5.0f, 5.0f));
	model = als * translateMatrix * scaleMatrix;
	stairCase(cube, lightingShader, model);


	//shiri er cube
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-66.0, 57.0 + 0.15, 12.5));
	//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(33.0f, 1.0f, 11.1f));
	model = als * translateMatrix * scaleMatrix;
	cube.setTextureProperty(table1, table2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);

	//shamner handle
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-66.0, 66.9 + 0.15, 14.0));
	//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(33.0f, 1.0f, 1.1f));
	model = als * translateMatrix * scaleMatrix;
	cube.setTextureProperty(table1, table2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);

	//pichoner handle
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-66.0, 66.9 + 0.15, 8.5));
	//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(33.0f, 1.0f, 1.1f));
	model = als * translateMatrix * scaleMatrix;
	cube.setTextureProperty(table1, table2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);



	for (int i = 0; i < 10; ++i) {
		// Calculate x position based on loop index
		float xPosition = -63.3 + i * 3.0f;

		// Shiri pillars
		glm::mat4 translateMatrix = glm::translate(identityMatrix, glm::vec3(xPosition, 62.5 + 0.15, 13.3));
		glm::mat4 scaleMatrix = glm::scale(identityMatrix, glm::vec3(.5, 4.9, .5));
		glm::mat4 model = als * translateMatrix * scaleMatrix;
		cylinder.drawCylinder(lightingShader, model, 0.6, 0.3f, 0.125f);

	}

	for (int i = 0; i < 10; ++i) {
		// Calculate x position based on loop index
		float xPosition = -63.3 + i * 3.0f;

		// Shiri pillars
		glm::mat4 translateMatrix = glm::translate(identityMatrix, glm::vec3(xPosition, 62.5 + 0.15, 19.3));
		glm::mat4 scaleMatrix = glm::scale(identityMatrix, glm::vec3(.5, 4.9, .5));
		glm::mat4 model = als * translateMatrix * scaleMatrix;
		cylinder.drawCylinder(lightingShader, model, 0.6, 0.3f, 0.125f);

	}

	/////shiri er niche golla
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-57.5, 55.0 + 0.15, 18.0));
	//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(8.5f, 2.0f, 7.5f));
	model = als * translateMatrix * scaleMatrix;
	cube.setTextureProperty(table1, table2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(-56.5, 40.0 + 0.15, 12.0));
	//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(8.5f, 1.8f, 9.5f));
	model = als * translateMatrix * scaleMatrix;
	cube.setTextureProperty(table1, table2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);

	//base
	for (float i = 0.0f; i < 360.0f; i += 2.50f) {
		//Center

		translateMatrix = glm::translate(identityMatrix, glm::vec3(-52.0, 40.9 + 0.15, 15.5));
		rotateYMatrix = glm::rotate(identityMatrix, glm::radians(rotateAngle_Y + i), glm::vec3(0.0f, 1.0f, 0.0f));
		scaleMatrix = glm::scale(identityMatrix, glm::vec3(3.0, 14.0, 1.5));
		model = als * translateMatrix * rotateYMatrix * scaleMatrix;
		//drawCube(cubeVAO, lightingShader, model, 1.0f, 0.0f, 0.0f); //this model is later sent to the vertex shader. //altogether is a matrix that is multiplied with every parts of the bed, so everything is part of Altogether. when rotated, everything is rotated AllTogether
		//glBindVertexArray(VAO);
		cube.setTextureProperty(table1, table2, 32.0);
		cube.drawCubeWithTexture(lightingShader, model);

	}

	//shiri er sather dorja left
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-61.0, 64.0 + 0.15, -12.0));
	//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.5f, 28.8f, 1.5f));
	model = als * translateMatrix * scaleMatrix;
	cube.setTextureProperty(table1, table2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);

	//shiri er sather dorja right
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-44.0, 64.0 + 0.15, -12.0));
	//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.5f, 28.8f, 1.5f));
	model = als * translateMatrix * scaleMatrix;
	cube.setTextureProperty(table1, table2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);

	//shiri er sather dorja nicher pataton
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-61.0, 64.0 + 0.15, -12.0));
	//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(17.0f, 1.5f, 1.5f));
	model = als * translateMatrix * scaleMatrix;
	cube.setTextureProperty(table1, table2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);

	//shiri er sather dorja uporer pataton
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-64.0, 93.0 + 0.15, -12.0));
	//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(24.0f, 2.6f, 1.5f));
	model = als * translateMatrix * scaleMatrix;
	cube.setTextureProperty(table1, table2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);


	translateMatrix = glm::translate(identityMatrix, glm::vec3(-61.0, 95.7 + 0.15, -12.0));
	//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(17.0f, 2.0f, 1.5f));
	model = als * translateMatrix * scaleMatrix;
	cube.setTextureProperty(table1, table2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(-57.0, 97.7 + 0.15, -12.0));
	//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(10.0f, 2.0f, 1.5f));
	model = als * translateMatrix * scaleMatrix;
	cube.setTextureProperty(table1, table2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);

	//door er majher cube for texture
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-60.5, 64.7 + 0.15, -12.0));
	//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(17.0f, 28.8f, 1.5f));
	model = als * translateMatrix * scaleMatrix;
	cube.setTextureProperty(door1, door2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);



	//deyaler design
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-240.5, 35.7 + 0.15, -22.5));
	//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(11.5f, 8.0f, 166.5f));
	model = als * translateMatrix * scaleMatrix;
	cube.setTextureProperty(tiles1, tiles2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);


	//pillars dada

	float initialZ = -22.5f;
	float spacing = 35.5f; // Adjust the spacing between the cubes as needed

	for (int i = 0; i < 5; ++i) {
		glm::mat4 translateMatrix = glm::translate(identityMatrix, glm::vec3(-240.5f, 43.7f + 0.15f, initialZ + i * spacing));
		glm::mat4 scaleMatrix = glm::scale(identityMatrix, glm::vec3(11.5f, 58.0f, 13.5f));
		glm::mat4 model = als * translateMatrix * scaleMatrix;

		cube.setTextureProperty(tiles1, tiles2, 32.0);
		cube.drawCubeWithTexture(lightingShader, model);
	}


	float initialZz = -20.0f;
	float spacingg = 36.0f; // Adjust the spacing between the cubes as needed

	for (int i = 0; i < 5; ++i) {
		glm::mat4 translateMatrix = glm::translate(identityMatrix, glm::vec3(-240.5f, 99.9f + 0.15f, initialZz + i * spacingg));
		glm::mat4 rotateYMatrix = glm::rotate(identityMatrix, glm::radians(20.0f), glm::vec3(0.0f, 0.0f, 1.0f));
		glm::mat4 scaleMatrix = glm::scale(identityMatrix, glm::vec3(47.0f, 8.0f, 3.0f));
		glm::mat4 model = als * translateMatrix * rotateYMatrix * scaleMatrix;

		cube.setTextureProperty(tiles1, tiles2, 32.0);
		cube.drawCubeWithTexture(lightingShader, model);
	}
	//potion
	float initialZzz = -20.0f;
	float spacinggg = 36.0f; // Adjust the spacing between the cubes as needed

	for (int i = 0; i < 5; ++i) {
		glm::mat4 translateMatrix = glm::translate(identityMatrix, glm::vec3(-30.5f, 99.9f + 0.15f, initialZzz + i * spacinggg));
		glm::mat4 rotateYMatrix = glm::rotate(identityMatrix, glm::radians(23.0f), glm::vec3(0.0f, 0.0f, 1.0f));
		glm::mat4 scaleMatrix = glm::scale(identityMatrix, glm::vec3(47.0f, 8.0f, 3.0f));
		glm::mat4 model = als * translateMatrix * rotateYMatrix * scaleMatrix;

		cube.setTextureProperty(tiles1, tiles2, 32.0);
		cube.drawCubeWithTexture(lightingShader, model);
	}

	float initialZzzz = -22.5f;
	float spacingggg = 35.5f; // Adjust the spacing between the cubes as needed

	for (int i = 0; i < 5; ++i) {
		glm::mat4 translateMatrix = glm::translate(identityMatrix, glm::vec3(-30.0f, 71.7f + 0.15f, initialZzzz + i * spacingggg));
		glm::mat4 scaleMatrix = glm::scale(identityMatrix, glm::vec3(5.5f, 30.0f, 13.5f));
		glm::mat4 model = als * translateMatrix * scaleMatrix;

		cube.setTextureProperty(tiles1, tiles2, 32.0);
		cube.drawCubeWithTexture(lightingShader, model);
	}




	//class er bench
	for (int i = 0; i < 2; ++i) {
		// Inner loop: 3 times on positive z axis
		for (int j = 0; j < 3; ++j) {
			// class er bench
			translateMatrix = glm::translate(identityMatrix, glm::vec3(-210.3 + i * 115.0, 34.2 + 0.15, 54.0 + j * 43.0));
			//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(80.0f), glm::vec3(0.0f, 1.0f, 0.0f));
			scaleMatrix = glm::scale(identityMatrix, glm::vec3(16.0f, 11.0f, 12.0f));
			model = als * translateMatrix * scaleMatrix;
			benchToll(cube, lightingShader, model);
		}
	}


	//board er texture
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-212.5, 59.7 + 0.15, -10.5));
	//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(30.0f, 22.0, .25f));
	model = als * translateMatrix * scaleMatrix;
	cube.setTextureProperty(board1, board2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);

	//board
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-100.0, 35.2 + 0.15, 39.9));
	//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(10.0f, 10.0f, 9.0f));
	model = als * translateMatrix * scaleMatrix;
	board(cube, lightingShader, model);

	//skeleton texture
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-160.5, 79.7 + 0.15, 15.5));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(25.0f, 22.0, .25f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, als, 1.0, 1.0, 1.0);
	cube.setTextureProperty(s1, s2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);


	//skeleton texture
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-160.5, 95.7 + 0.15, 15.5));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.3f, 20.0, .2f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, als, 1.0, 1.0, 1.0);
	cube.setMaterialisticEimu(0.0, 0.0, 0.0);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(-135.5, 95.7 + 0.15, 15.5));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.3f, 20.0, .2f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, als, 1.0, 1.0, 1.0);
	cube.setMaterialisticEimu(0.0, 0.0, 0.0);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);


	//bookshelf
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-170.3, 36.2 + 0.15, -10.8));
	//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(10.0f, 10.0f, 5.0f));
	model = als * translateMatrix * scaleMatrix;
	bookShelffff(cube, lightingShader, model, colorArray, 3, 4);

	//almari1
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-122.3, 36.2 + 0.15, -10.8));
	//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(8.0f, 9.0f, 9.0f));
	model = als * translateMatrix * scaleMatrix;
	almari(cube, lightingShader, model);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(-135.4, 36.2 + 0.15, 7.00));
	//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(-90.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(20.8f, 15.0f, 7.0f));
	model = als * translateMatrix * scaleMatrix;
	coffeTable(cube, lightingShader, model);

	//carpet dada
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-150.5, 36.2 + 0.15, 25.5));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(40.3f, .2f, 115.0f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, als, 1.0, 1.0, 1.0);
	cube.setTextureProperty(carpet1, carpet2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);

	////jharbati
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-110.0, 63.3 + 0.15, 24.5));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(9.8f, 7.0f, 4.1f));
	model = als * translateMatrix * scaleMatrix;
	jharbati(cube, lightingShader, model);




}