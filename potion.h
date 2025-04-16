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



void potion(Cube& cube, Shader& lightingShader, glm::mat4 als, float colorArray[], unsigned int tiles1, unsigned int tiles2)
{

	glm::mat4 identityMatrix = glm::mat4(1.0f); // make sure to initialize matrix to identity matrix first
	glm::mat4 translateMatrix, rotateXMatrix, rotateYMatrix, rotateZMatrix, scaleMatrix, model;

	translateMatrix = glm::translate(identityMatrix, glm::vec3(-1.0, 0.1 + 0.15, -12.00));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.7f, 7.0f, 0.7f));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
	cube.setMaterialisticEimu(0.545f, 0.270f, 0.075f);
	cube.drawCubeWithMaterialisticProperty(lightingShader, model);
}



#pragma once
