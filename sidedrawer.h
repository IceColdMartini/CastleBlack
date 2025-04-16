#pragma once
#pragma once
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "shader.h"
#include "drawcube.h"
#include "cube.h"


void sidedrawer(Cube& cube, Shader& lightingShader, glm::mat4 als)
{
	glm::mat4 identityMatrix = glm::mat4(1.0f); // make sure to initialize matrix to identity matrix first
	glm::mat4 translateMatrix, rotateXMatrix, rotateYMatrix, rotateZMatrix, scaleMatrix, model;

	//body
	translateMatrix = glm::translate(identityMatrix, glm::vec3(5.0, 0.1 + 0.15, -12.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.0f, 1.2f, 2.0f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(5.0, 1.2 + 0.15, -10.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.0f, 0.1f, 0.2f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.0f, 0, 0);
	cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(5.0, 1.3 + 0.15, -12.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.0f, 1.2f, 2.0f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(5.0, 2.5 + 0.15, -10.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.0f, 0.1f, 0.2f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.0f, 0, 0);
	cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(5.0, 2.5 + 0.15, -12.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.0f, 1.2f, 2.0f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);


	translateMatrix = glm::translate(identityMatrix, glm::vec3(4.7, 3.7 + 0.15, -12.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.6f, 0.2f, 2.1f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.0f, 0, 0);
	cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(4.9, .2 + 0.15, -12.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.1f, 3.7f, 2.1f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.0f, 0, 0);
	cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(7.0, .2 + 0.15, -12.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.1f, 3.7f, 2.1f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.0f, 0, 0);
	cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(5.8, 2.0 + 0.15, -10.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.2f, 0.2f, 0.2f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
	cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(5.8, 3.3 + 0.15, -10.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.2f, 0.2f, 0.2f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
	cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(5.8, .79 + 0.15, -10.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.2f, 0.2f, 0.2f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
	cube.setMaterialisticEimu(0.0f, 0.0f, 0.0f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);


}