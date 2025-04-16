#pragma once
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "shader.h"
#include "drawcube.h"
#include "cube.h"

void almari(Cube& cube, Shader& lightingShader, glm::mat4 als)
{

	glm::mat4 identityMatrix = glm::mat4(1.0f); // make sure to initialize matrix to identity matrix first
	glm::mat4 translateMatrix, rotateXMatrix, rotateYMatrix, rotateZMatrix, scaleMatrix, model;


	//almari right side part
	translateMatrix = glm::translate(identityMatrix, glm::vec3(0.0, 0.0, 0.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.0, 3.0, 1.0));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.6, 0.0f, 0.125f);
	cube.setMaterialisticEimu(0.6, 0.0f, 0.125f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);


	//almari divide
	translateMatrix = glm::translate(identityMatrix, glm::vec3(1.0, 0.0, 0.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.1, 3.0, 1.0));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
	cube.setMaterialisticEimu(0.0f, 0, 0);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);


	//almari left side
	translateMatrix = glm::translate(identityMatrix, glm::vec3(1.1, 0.0, 0.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.0, 3.0, 1.0));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.6, 0.0f, 0.125f);
	cube.setMaterialisticEimu(0.6, 0.0f, 0.125f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);


	//almari top
	translateMatrix = glm::translate(identityMatrix, glm::vec3(0.0, 3.0, 0.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.1, 0.1, 1.0));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.0f, 0.0f, 0.0f);
	cube.setMaterialisticEimu(0.0f, 0, 0);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);
}

#pragma once
