#pragma once
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "shader.h"
#include "drawcube.h"
#include <random>
#include "cube.h"
void bookShelffff(Cube& cube, Shader& lightingShader, glm::mat4 als, float colorArray[], unsigned int wood1, unsigned int wood2)
{

	glm::mat4 identityMatrix = glm::mat4(1.0f); // make sure to initialize matrix to identity matrix first
	glm::mat4 translateMatrix, rotateXMatrix, rotateYMatrix, rotateZMatrix, scaleMatrix, model, ttranslate, ytranslate;



	//bookshelf bottom
	translateMatrix = glm::translate(identityMatrix, glm::vec3(0.0, 0.0, 0.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(3.0, .2, .5));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.6, 0.3f, 0.125f);
	//cube.setMaterialisticEimu(0.6, 0.3f, 0.125f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(wood1, wood2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);

	//bookshelf first rack
	translateMatrix = glm::translate(identityMatrix, glm::vec3(0.0, 0.65, 0.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(3.0, .1, .5));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.6, 0.3f, 0.125f);
	//cube.setMaterialisticEimu(0.6, 0.3f, 0.125f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(wood1, wood2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);

	//bookshelf second rack
	translateMatrix = glm::translate(identityMatrix, glm::vec3(0.0, 0.65 * 2, 0.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(3.0, .1, .5));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.6, 0.3f, 0.125f);
	//cube.setMaterialisticEimu(0.6, 0.3f, 0.125f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(wood1, wood2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);

	//bookshelf third rack
	translateMatrix = glm::translate(identityMatrix, glm::vec3(0.0, 0.65 * 3, 0.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(3.0, .1, .5));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.6, 0.3f, 0.125f);
	//cube.setMaterialisticEimu(0.6, 0.3f, 0.125f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(wood1, wood2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);


	//bookshelf top
	translateMatrix = glm::translate(identityMatrix, glm::vec3(0.0, 0.65 * 4, 0.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(3.0, .2, .5));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.6, 0.3f, 0.125f);
	//cube.setMaterialisticEimu(0.6, 0.3f, 0.125f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(wood1, wood2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);



	//bookshelf left
	translateMatrix = glm::translate(identityMatrix, glm::vec3(0.0, 0.0, 0.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2, 2.8, .5));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.6, 0.3f, 0.125f);
	//cube.setMaterialisticEimu(0.6, 0.3f, 0.125f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(wood1, wood2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);



	//bookshelf right
	translateMatrix = glm::translate(identityMatrix, glm::vec3(3.0, 0.0, 0.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(.2, 2.8, .5));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.6, 0.3f, 0.125f);
	//cube.setMaterialisticEimu(0.6, 0.3f, 0.125f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);
	cube.setTextureProperty(wood1, wood2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);



	//bookshelf back
	translateMatrix = glm::translate(identityMatrix, glm::vec3(0.0, 0.0, 0.0));
	scaleMatrix = glm::scale(identityMatrix, glm::vec3(3.0, 2.8, .05));
	model = als * translateMatrix * scaleMatrix;
	//drawCube(cubeVAO, lightingShader, model, 0.6, 0.3f, 0.125f);
	//cube.setMaterialisticEimu(0.6, 0.3f, 0.125f);
	//cube.drawCubeWithMaterialisticProperty(lightingShader, model);

	cube.setTextureProperty(wood1, wood2, 32.0);
	cube.drawCubeWithTexture(lightingShader, model);

	///////////books



	int index = 0;
	for (float j = 0; j < 5.0; j = j + 1.3)
	{
		ytranslate = glm::translate(identityMatrix, glm::vec3(0.0f, static_cast<float>(j), 0.0f));
		for (float i = 0.0; i < 27.0; i = i + 1.2)
		{
			ttranslate = glm::translate(identityMatrix, glm::vec3(static_cast<float>(i), 0.0f, 0.0f));
			translateMatrix = glm::translate(identityMatrix, glm::vec3(0.2, 0.2, 0.0));
			scaleMatrix = glm::scale(identityMatrix, glm::vec3(.1, .45, .45));
			model = als * translateMatrix * scaleMatrix;
			//drawCube(cubeVAO, lightingShader, model * ttranslate * ytranslate, r,g,b);
			//drawCube(cubeVAO, lightingShader, model * ttranslate * ytranslate, colorArray[index], colorArray[index+1], colorArray[index+2]);
			cube.setMaterialisticEimu(colorArray[index], colorArray[index + 1], colorArray[index + 2]);
			cube.drawCubeWithMaterialisticProperty(lightingShader, model * ttranslate * ytranslate);
			index = index + 3;
		}
	}




}
#pragma once
