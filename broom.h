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

void broom(Cube& cube, Shader& lightingShader, glm::mat4 als)
{



	glm::mat4 temp = glm::mat4(1.0f);
	glm::mat4 identityMatrix = glm::mat4(1.0f); // make sure to initialize matrix to identity matrix first
	glm::mat4 translateMatrix, rotateXMatrix, rotateYMatrix, rotateZMatrix, scaleMatrix, ztranslate, xtranslate, model;
	float rotateAngle_Y = 0.0;

	//broom leg
	translateMatrix = glm::translate(identityMatrix, glm::vec3(-.5f, 0.19 + 0.15, 45.5));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(1.6f, .1f, .1f));
	model = als * translateMatrix * scaleMatrix;
	Cylinder cylinder = Cylinder();
	cylinder.drawCylinder(lightingShader, model, 0.0f, 0.0f, 0.0f);

	Sphere sphere2 = Sphere(.3);
	temp = als;
	translateMatrix = glm::translate(identityMatrix, glm::vec3(1.0f, 0.21 + 0.15, 45.5));
	als = als * translateMatrix;
	sphere2.drawSphere(lightingShader, als, 0.6, 0.3f, 0.125f);
	als = temp;

}