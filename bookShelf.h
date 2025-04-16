#pragma once
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "shader.h"
#include "drawcube.h"
#include "cube.h"

//#include <random>
void bookShelf(Cube& cube, Shader& lightingShader, glm::mat4 als)
{

	glm::mat4 identityMatrix = glm::mat4(1.0f); // make sure to initialize matrix to identity matrix first
	glm::mat4 translateMatrix, rotateXMatrix, rotateYMatrix, rotateZMatrix, scaleMatrix, model, ttranslate, ytranslate;



	//bookshelf bottom
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-9.0, 8.9, -28.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.2, .2, .5));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setMaterialisticEimu(0.392f, 0.196f, 0.039f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//bookshelf first rack
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-9.0, 10.0, -28.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.2, .1, .5));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.392f, 0.196f, 0.039f);
	cube.setMaterialisticEimu(0.392f, 0.196f, 0.039f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//bookshelf second rack
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-9.0, 11.0, -28.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.2, .1, .5));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.392f, 0.196f, 0.039f);
	cube.setMaterialisticEimu(0.392f, 0.196f, 0.039f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//bookshelf third rack
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-9.0, 12.0, -28.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.2, .1, .5));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.392f, 0.196f, 0.039f);
	cube.setMaterialisticEimu(0.392f, 0.196f, 0.039f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//bookshelf 4 rack
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-9.0, 13.0, -28.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.2, .1, .5));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.392f, 0.196f, 0.039f);
	cube.setMaterialisticEimu(0.392f, 0.196f, 0.039f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//bookshelf top
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-9.0, 14.0, -28.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.2, .2, .5));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.392f, 0.196f, 0.039f);
	cube.setMaterialisticEimu(0.392f, 0.196f, 0.039f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//bookshelf left
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-9.0, 8.9, -28.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2, 5.3, .5));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.392f, 0.196f, 0.039f);
	cube.setMaterialisticEimu(0.392f, 0.196f, 0.039f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//bookshelf right
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-5.0, 8.9, -28.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2, 5.3, .5));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.392f, 0.196f, 0.039f);
	cube.setMaterialisticEimu(0.392f, 0.196f, 0.039f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//bookshelf back
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-9.0, 8.9, -28.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.2, 5.3, .05));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.6, 0.3f, 0.125f);
	cube.setMaterialisticEimu(0.392f, 0.196f, 0.039f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);




	// Define colors for book covers
	glm::vec3 bookColors[] = {
		glm::vec3(0.8f, 0.2f, 0.2f), // Red
		glm::vec3(0.4f, 0.6f, 0.2f), // Green
		glm::vec3(0.2f, 0.4f, 0.8f), // Blue
		glm::vec3(0.9f, 0.7f, 0.1f)  // Yellow
	};

	glm::vec3 bookPositions[] = {
	glm::vec3(-8.5f, 9.2f, -27.7f),
	glm::vec3(-7.8f, 9.2f, -27.7f),
	glm::vec3(-7.1f, 9.2f, -27.7f),
	glm::vec3(-6.4f, 9.2f, -27.7f),
	glm::vec3(-5.7f, 9.2f, -27.7f),
	// Add more positions as needed
	};

	// Dimensions of a single book
	glm::vec3 bookDimensions = glm::vec3(0.2f, 0.6f, 0.3f); // Adjusted dimensions for vertical books

	// Create books on the bookshelf for all shelves
	for (int shelf = 0; shelf < 5; ++shelf) { // Iterate over each shelf
		for (int i = 0; i < sizeof(bookPositions) / sizeof(bookPositions[0]); ++i) {
			glm::vec3 shelfOffset = glm::vec3(0.0f, shelf * 1.0f, 0.0f); // Offset to stack books on different shelves
			translateMatrix = glm::translate(identityMatrix, bookPositions[i] + shelfOffset);

			// Apply rotation to tilt books slightly to the right
			glm::mat4 rotateMatrix = glm::rotate(identityMatrix, glm::radians(-10.0f), glm::vec3(0.0f, 0.0f, 1.0f));

			// Apply transformation for book cover
			scaleMatrix = glm::scale(identityMatrix, bookDimensions);
			model = als * translateMatrix * rotateMatrix * scaleMatrix;

			// Draw book cover
			glm::vec3 bookColor = bookColors[i % (sizeof(bookColors) / sizeof(bookColors[0]))]; // Cycle through book colors
			//drawCube(cubeVAO, lightingShader, model, bookColor.x, bookColor.y, bookColor.z);
			cube.setMaterialisticEimu(bookColor.x, bookColor.y, bookColor.z);
			cube.drawCubeWithMaterialisticProperty(lightingShader, model);

			// Apply transformation for book spine (side)
			translateMatrix = glm::translate(identityMatrix, bookPositions[i] + glm::vec3(-0.1f, 0.0f, 0.0f) + shelfOffset); // Adjust position for spine
			rotateMatrix = glm::rotate(identityMatrix, glm::radians(-10.0f), glm::vec3(0.0f, 0.0f, 1.0f)); // Apply the same tilt to the spine
			scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.1f, 0.6f, 0.3f)); // Adjust dimensions for spine
			model = als * translateMatrix * rotateMatrix * scaleMatrix;
			//drawCube(cubeVAO, lightingShader, model, 0.5f, 0.5f, 0.5f); // Gray color for spine
			cube.setMaterialisticEimu(0.5f, 0.5f, 0.5f);
			cube.drawCubeWithMaterialisticProperty(lightingShader, model);
		}
	}






}
#pragma once