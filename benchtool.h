#pragma once
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "shader.h"
#include "cube.h"

void benchToll(Cube& cube, Shader& lightingShader, glm::mat4 als)
{

	glm::mat4 identityMatrix = glm::mat4(1.0f); // make sure to initialize matrix to identity matrix first
	glm::mat4 translateMatrix, rotateXMatrix, rotateYMatrix, rotateZMatrix, scaleMatrix, model;
	float rotateAngle_Y = 22.5;

	//toll top
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-0.1, 0.5, 0.2));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(3.0f, .1f, -0.5f));
	model = als * translateMatrix * scaleMatrix;
	cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	//toll left leg1
	translateMatrix = glm::translate(identityMatrix, glm::vec3(0.0, 0.0, 0.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.1f, .5f, 0.1f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//toll left leg2
	translateMatrix = glm::translate(identityMatrix, glm::vec3(0.0, 0.0, -0.25));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.1f, .5f, 0.1f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//toll right leg1
	translateMatrix = glm::translate(identityMatrix, glm::vec3(2.75, 0.0, 0.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.1f, .5f, 0.1f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//toll right leg2
	translateMatrix = glm::translate(identityMatrix, glm::vec3(2.75, 0.0, -0.25));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.1f, .5f, 0.1f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);



	//bench top
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-0.1, .8, -0.5));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(3.0, .1, -.75));
	rotateYMatrix = glm::rotate(identityMatrix, glm::radians(rotateAngle_Y), glm::vec3(1.0f, 0.0f, 0.0f));
	//rotateXMatrix = glm::rotate(identityMatrix, glm::radians(), glm::vec3(1.375f, 1.25f, -0.875f));
	model = als * translateMatrix * rotateYMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//bench left leg1
	translateMatrix = glm::translate(identityMatrix, glm::vec3(0.0, 0.0, -1.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.1f, 1.05f, 0.1f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//bench left leg2
	translateMatrix = glm::translate(identityMatrix, glm::vec3(0.0, 0.0, -0.75));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.1f, .95, 0.1f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//bench right leg1
	translateMatrix = glm::translate(identityMatrix, glm::vec3(2.75, 0.0, -1.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.1f, 1.05f, 0.1f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//bench right leg2
	translateMatrix = glm::translate(identityMatrix, glm::vec3(2.75, 0.0, -0.75));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.1f, .95, 0.1f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);


	//left lomba kath
	translateMatrix = glm::translate(identityMatrix, glm::vec3(0.0, 0.0, 0.2));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.1f, .1f, -1.4f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	//right lomba kath
	translateMatrix = glm::translate(identityMatrix, glm::vec3(2.75, 0.0, 0.2));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.1f, .1f, -1.4f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);


}
#pragma once
