#pragma once

#pragma once
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "shader.h"
#include "drawcube.h"
#include "cube.h"

//#include <random>
void board(Cube& cube, Shader& lightingShader, glm::mat4 als)

//Board
{


	glm::mat4 identityMatrix = glm::mat4(1.0f); // make sure to initialize matrix to identity matrix first
	glm::mat4 translateMatrix, rotateXMatrix, rotateYMatrix, rotateZMatrix, scaleMatrix, model, ttranslate, ytranslate;

	//left stand
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-12.0, 0.01f, -7.5f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.25f, 5.0, .25f));
	model = als * translateMatrix * scaleMatrix;
	cube.setMaterialisticEimu(0.545f, 0.0f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);


	//right stand
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-8.5, 0.01f, -7.5f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.25f, 5.0, .25f));
	model = als * translateMatrix * scaleMatrix;
	cube.setMaterialisticEimu(0.545f, 0.0f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);


	//board
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-11.75, 2.01f, -7.5f));
	//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(20.0f), glm::vec3(0.0f, 1.0f, 0.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(3.5f, 3.0, .25f));
	model = als * translateMatrix * scaleMatrix;
	cube.setMaterialisticEimu(0.545f, 0.0f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);


	//board top first design
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-12.0, 5.01f, -7.5f));
	//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(20.0f), glm::vec3(0.0f, 1.0f, 0.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(3.75f, .1, .5f));
	model = als * translateMatrix * scaleMatrix;
	cube.setMaterialisticEimu(0.545f, 0.0f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//board top 2nd design
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-12.0, 5.02f, -7.5f));
	//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(20.0f), glm::vec3(0.0f, 1.0f, 0.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(3.75f, .25, .25f));
	model = als * translateMatrix * scaleMatrix;
	cube.setMaterialisticEimu(0.545f, 0.0f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);



	//board top 3rd design
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-12.0, 5.27f, -7.5f));
	//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(20.0f), glm::vec3(0.0f, 1.0f, 0.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(3.75f, .1, .5f));
	model = als * translateMatrix * scaleMatrix;
	cube.setMaterialisticEimu(0.545f, 0.0f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);


	//board bottom first design
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-12.0, 2.01f, -7.5f));
	//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(20.0f), glm::vec3(0.0f, 1.0f, 0.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(3.75f, .1, .5f));
	model = als * translateMatrix * scaleMatrix;
	cube.setMaterialisticEimu(0.545f, 0.0f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);


	//board bottom 2nd design
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-12.0, 2.02f, -7.5f));
	//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(20.0f), glm::vec3(0.0f, 1.0f, 0.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(3.75f, .25, .25f));
	model = als * translateMatrix * scaleMatrix;
	cube.setMaterialisticEimu(0.545f, 0.0f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//board bottom 3rd design
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-12.0, 2.27f, -7.5f));
	//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(20.0f), glm::vec3(0.0f, 1.0f, 0.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(3.75f, .1, .5f));
	model = als * translateMatrix * scaleMatrix;
	cube.setMaterialisticEimu(0.545f, 0.0f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);


	//board bottom ekdom
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-12.5, .01f, -7.5f));
	//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(20.0f), glm::vec3(0.0f, 1.0f, 0.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.5f, .35, .75f));
	model = als * translateMatrix * scaleMatrix;
	cube.setMaterialisticEimu(0.545f, 0.0f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

}