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
#include "floorfire.h"
#include "staircase.h"


void tv(Cube& cube, Shader& lightingShader, glm::mat4 als)
{


	float rotateAngle_Y = 0.0;
	glm::mat4 rotateY = glm::mat4(1.0f);
	glm::mat4 rotateZ = glm::mat4(1.0f);
	float rotateAngle_Z = 0.0f;


	glm::mat4 identityMatrix = glm::mat4(1.0f); // make sure to initialize matrix to identity matrix firs
	glm::mat4 translateMatrix, rotateXMatrix, rotateYMatrix, rotateZMatrix, scaleMatrix, model;

	//tv drawer 
	translateMatrix = glm::translate(identityMatrix, glm::vec3(0.5 * 4.2, 0.5 * 0.2f, 0.5 * 1.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.9f, 1.6f, 0.1f));
	glm::mat4 modeltabledw = translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, modeltabledw, 0.729f, 0.451f, 0.42f);
	cube.setMaterialisticEimu(0.729f, 0.451f, 0.42f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, modeltabledw);



	translateMatrix = glm::translate(identityMatrix, glm::vec3(0.5 * 7.8, 0.5 * 0.2f, 0.5 * 1.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.9f, 1.6f, 0.1f));
	glm::mat4 modeltabledw1 = translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, modeltabledw1, 0.729f, 0.451f, 0.42f);
	cube.setMaterialisticEimu(0.729f, 0.451f, 0.42f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, modeltabledw1);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(0.5 * 6.2f, 0.5 * 0.2f, 0.5 * 1.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.5f, 0.7f, 0.1f));
	glm::mat4 modeldwm1 = translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, modeldwm1, 0.729f, 0.451f, 0.42f);
	cube.setMaterialisticEimu(0.729f, 0.451f, 0.42f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, modeldwm1);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(0.5 * 6.2f, 0.5 * 0.2 + 0.5 * 0.7 + 0.5 * 0.2f, 0.5 * 1.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.5f, 0.7f, 0.1f));
	glm::mat4 modeldwm2 = translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, modeldwm2, 0.729f, 0.451f, 0.42f);
	cube.setMaterialisticEimu(0.729f, 0.451f, 0.42f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, modeldwm2);

	//Tv
	//tv stand
	translateMatrix = glm::translate(identityMatrix, glm::vec3(0.5 * 6.5f, 0.5 * 2.0f, 0.5 * 0.1f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.0f, 0.1f, 0.8f));
	glm::mat4 modelstnd = translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, modelstnd, 0.0f, 0.1f, 0.0f);
	cube.setMaterialisticEimu(0.0f, 0.1f, 0.0f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, modelstnd);


	translateMatrix = glm::translate(identityMatrix, glm::vec3(0.5 * 6.95f, 0.5 * 2.0f, 0.5 * 0.1f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.16f, 0.65f, 0.1f));
	rotateXMatrix = glm::rotate(identityMatrix, glm::radians(40.0f), glm::vec3(1.0f, 0.0f, 0.0f));
	glm::mat4 modelstnd1 = translateMatrix * rotateXMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, modelstnd1, 0.0f, 0.1f, 0.0f);
	cube.setMaterialisticEimu(0.0f, 0.1f, 0.0f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, modelstnd1);

	//tv
	translateMatrix = glm::translate(identityMatrix, glm::vec3(0.5 * 5.0f, 0.5 * 2.3f, 0.5 * 0.5f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(4.0f, 2.0f, 0.1f));
	glm::mat4 modeltv = translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, modeltv, 0.0f, 0.1f, 0.0f);
	cube.setMaterialisticEimu(0.0f, 0.1f, 0.0f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, modeltv);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(0.5 * 5.1f, 0.5 * 2.4f, 0.5 * 0.53f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(3.8f, 1.8f, 0.1f));
	glm::mat4 modelt = translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, modelt, 0.2f, 0.2f, 0.3f);
	cube.setMaterialisticEimu(0.2f, 0.2f, 0.3f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, modelt);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(0.5 * 0.0, 0.5 * 5.5f, 0.5 * 1.75));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.0f, 0.1f, 2.5f));
	glm::mat4 modelwall = translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, modelwall, 0.739f, 0.461f, 0.46f);
	cube.setMaterialisticEimu(0.739f, 0.461f, 0.46f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, modelwall);


	translateMatrix = glm::translate(identityMatrix, glm::vec3(0.5 * 0.0, 0.5 * 5.5f, 0.5 * 9.75));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.0f, 0.1f, 2.5f));
	//glm::mat4 translateMatrix1 = glm::translate(identityMatrix, glm::vec3(-(0.5 * 7.0), -0.5 * 9.5f, -(0.5 * 7.0)));
	//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(rotate), glm::vec3(0.0f, 1.0f, 0.0f));
	glm::mat4 modelwall1 = translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, modelwall1, 0.739f, 0.461f, 0.46f);
	cube.setMaterialisticEimu(0.739f, 0.461f, 0.46f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, modelwall1);




	translateMatrix = glm::translate(identityMatrix, glm::vec3(0.5 * 0.0, 0.5 * 3.5f, 0.5 * 5.75));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.0f, 0.1f, 2.5f));
	//glm::mat4 translateMatrix1 = glm::translate(identityMatrix, glm::vec3(-(0.5 * 7.0), -0.5 * 9.5f, -(0.5 * 7.0)));
	//rotateYMatrix = glm::rotate(identityMatrix, glm::radians(rotate), glm::vec3(0.0f, 1.0f, 0.0f));
	glm::mat4 modelwall2 = translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, modelwall2, 0.739f, 0.461f, 0.46f);
	cube.setMaterialisticEimu(0.739f, 0.461f, 0.46f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, modelwall2);







	translateMatrix = glm::translate(identityMatrix, glm::vec3(7.0f, 0.0f, 1.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.0f, 2.8f, 4.2f));
	glm::mat4 bigdesk = translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, bigdesk, 0.739f, 0.461f, 0.46f);
	cube.setMaterialisticEimu(0.739f, 0.461f, 0.46f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, bigdesk);

	translateMatrix = glm::translate(identityMatrix, glm::vec3(6.2f, 0.0f, 1.0f));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.2f, 2.7f, 1.0f));
	glm::mat4 smalldesk = translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, smalldesk, 0.729f, 0.451f, 0.42f);
	cube.setMaterialisticEimu(0.729f, 0.451f, 0.42f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, smalldesk);
}