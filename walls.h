#pragma once
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "shader.h"
#include "drawcube.h"
#include "cube.h"
#include "triangle.h"
#include "pyramid.h"
#include "cylinder.h"
#include "torus.h"
#include "curve.h"
//#include "sphere2.h"

// Function prototype
void drawMedievalTower(Cube& cube, BezierCurve& towerBody, BezierCurve& spire, Shader& lightingShader, glm::mat4 alTogether, unsigned int castlediffMap, unsigned int castlespecMap, unsigned int windowdiffMap, unsigned int windowspecMap);

void walls(Cube& cube, Shader& lightingShader, glm::mat4 alTogether, float colorArray[], unsigned int tiles1, unsigned int tiles2, unsigned int gt1, unsigned int gt2, unsigned int cas1, unsigned int cas2, unsigned int choto1, unsigned int choto2, unsigned int casdoor1, unsigned int casdoor2, float door_ang, float door_ang1, unsigned int grass1, unsigned int grass2)
{

    glm::mat4 identityMatrix = glm::mat4(1.0f); // make sure to initialize matrix to identity matrix first
    glm::mat4 translateMatrix, rotateXMatrix, rotateYMatrix, rotateZMatrix, scaleMatrix, model, temp;

    /*//floor
    translateMatrix = glm::translate(identityMatrix, glm::vec3(-48.5, -0.5, -6.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(82, .5, 68.0));
    model = alTogether * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.545f, 0.271f, 0.075f);
    cube.setMaterialisticEimu(0.545f, 0.271f, 0.075f);
    //cube.setTextureProperty(cas1, cas2, 32.0);
    cube.drawCubeWithMaterialisticProperty(lightingShader, model);
    */




    //back wall with increased thickness
    translateMatrix = glm::translate(identityMatrix, glm::vec3(-48.5, -0.5, -6.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(82, 26, 0.5));  // Increased thickness
    model = alTogether * translateMatrix * scaleMatrix;
    cube.setTextureProperty(cas1, cas2, 32.0);  // Using castle texture
    cube.drawCubeWithTexture(lightingShader, model);

    /*  ////////////////front wall of dining
     translateMatrix = glm::translate(identityMatrix, glm::vec3(1.5, -0.45, 11));
     scaleMatrix = glm::scale(identityMatrix, glm::vec3(11, 7, 0.25));
     model = alTogether * translateMatrix * scaleMatrix;
     //drawCube(cubeVAO, lightingShader, model, 0.6, 0.0f, 0.125f);
     cube.setTextureProperty(tiles1, tiles2, 32.0);
     cube.drawCubeWithTexture(lightingShader, model);

     translateMatrix = glm::translate(identityMatrix, glm::vec3(5.0, -0.45, 11.2));

     scaleMatrix = glm::scale(identityMatrix, glm::vec3(3, 6.4, 0.15));
     model = alTogether * translateMatrix * scaleMatrix;
     //drawCube(cubeVAO, lightingShader, model, 0.6, 0.0f, 0.125f);
     cube.setTextureProperty(gt1, gt2, 32.0);
     cube.drawCubeWithTexture(lightingShader, model);

     */

     /*
     //left wall
     translateMatrix = glm::translate(identityMatrix, glm::vec3(6, -0.45, -6.5));
     scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.25, 8, 25));
     model = alTogether * translateMatrix * scaleMatrix;
     drawCube(cubeVAO, lightingShader, model, 0.6, 0.0f, 0.125f);
     */

     //uporer talar right e wall
    translateMatrix = glm::translate(identityMatrix, glm::vec3(33.5, -0.5, -6.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.5, 26, 73));  // Extended length
    model = alTogether * translateMatrix * scaleMatrix;
    cube.setTextureProperty(cas1, cas2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);

    //uporer talar lefttttttt e wall
    translateMatrix = glm::translate(identityMatrix, glm::vec3(-48.5, -0.5, -6.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.5, 26, 73));  // Extended length
    model = alTogether * translateMatrix * scaleMatrix;
    cube.setTextureProperty(cas1, cas2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);

    //right wall with proper connection
    translateMatrix = glm::translate(identityMatrix, glm::vec3(33.5, -0.5, -6.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.5, 26, 73));  // Extended length
    model = alTogether * translateMatrix * scaleMatrix;
    cube.setTextureProperty(cas1, cas2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);

    //right wall( nichtalar ekdom left)
    translateMatrix = glm::translate(identityMatrix, glm::vec3(-48.4, -0.45, 66));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.25, 26, -74));
    model = alTogether * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.58f, 0, 0.137f);
    //cube.drawCubeWithMaterialisticProperty(lightingShader, model);
    cube.setTextureProperty(tiles1, tiles2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);


    //uporer talay left wall
    translateMatrix = glm::translate(identityMatrix, glm::vec3(-6.5, 6.7, 3));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.25, 18, 25));
    model = alTogether * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.58f, 0, 0.137f);
    //cube.drawCubeWithMaterialisticProperty(lightingShader, model);
    cube.setTextureProperty(tiles1, tiles2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);

    //arekta right wall
    translateMatrix = glm::translate(identityMatrix, glm::vec3(-25.5, -0.45, 6));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.25, 8, -25));
    model = alTogether * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.58f, 0, 0.137f);
    cube.setTextureProperty(tiles1, tiles2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);


    //uporer talar ceiling
    translateMatrix = glm::translate(identityMatrix, glm::vec3(-48.5, 25.4 - 0.5, -6.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(82, .9, 35.0));
    model = alTogether * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.098f, 0.098f, 0.439f);
    //cube.drawCubeWithMaterialisticProperty(lightingShader, model);
    //cube.setMaterialisticEimu(0.58f, 0, 0.137f);
    //cube.drawCubeWithMaterialisticProperty(lightingShader, model);
    cube.setTextureProperty(tiles1, tiles2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);

    //uporer talar floor
    translateMatrix = glm::translate(identityMatrix, glm::vec3(-48.5, 6.4 - 0.5, -6.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(82, 1.0, 35.0));
    model = alTogether * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.098f, 0.098f, 0.439f);
    //cube.drawCubeWithMaterialisticProperty(lightingShader, model);
    //cube.setMaterialisticEimu(0.58f, 0, 0.137f);
    //cube.drawCubeWithMaterialisticProperty(lightingShader, model);
    cube.setTextureProperty(tiles1, tiles2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);


    /* //ceiling
     translateMatrix = glm::translate(identityMatrix, glm::vec3(-26.5, 6 - 0.5, -6.5));
     scaleMatrix = glm::scale(identityMatrix, glm::vec3(45, .5, 25));
     model = alTogether * translateMatrix * scaleMatrix;
     //drawCube(cubeVAO, lightingShader, model, 0.098f, 0.098f, 0.439f);
     //cube.drawCubeWithMaterialisticProperty(lightingShader, model);
     cube.setMaterialisticEimu(0.6471f, 0.1647f, 0.1647f);
     cube.drawCubeWithMaterialisticProperty(lightingShader, model);
     */






     //left wall
    translateMatrix = glm::translate(identityMatrix, glm::vec3(12.7, -0.45, -6.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(0.25, 8, 10));
    model = alTogether * translateMatrix * scaleMatrix;
    //drawCube(cubeVAO, lightingShader, model, 0.58f, 0, 0.137f);
    cube.setTextureProperty(tiles1, tiles2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);


    //front face of palace left with consistent texture
    translateMatrix = glm::translate(identityMatrix, glm::vec3(-47.8, 0.05, 66));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(30, 25.2, 0.5));
    model = alTogether * translateMatrix * scaleMatrix;
    cube.setTextureProperty(cas1, cas2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);

    //chotochoto

    for (int i = 0; i < 8; ++i) {
        temp = alTogether;

        translateMatrix = glm::translate(identityMatrix, glm::vec3(-47.8 + i * 4.0, 25.3, 66));
        scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.0, 2.2, 0.5));
        model = temp * translateMatrix * scaleMatrix;

        cube.setTextureProperty(cas1, cas2, 32.0);
        cube.drawCubeWithTexture(lightingShader, model);
    }




    //lrft deyale window1
    for (int i = 0; i < 3; ++i) {
        temp = alTogether;

        translateMatrix = glm::translate(identityMatrix, glm::vec3(-47.8 + i * 10.0, 9.5, 66.9));
        scaleMatrix = glm::scale(identityMatrix, glm::vec3(7.0, 7.5, 0.1));
        model = temp * translateMatrix * scaleMatrix;

        cube.setTextureProperty(choto1, choto2, 32.0);
        cube.drawCubeWithTexture(lightingShader, model);
    }


    //front face of palace right with consistent texture
    translateMatrix = glm::translate(identityMatrix, glm::vec3(34.4, 0.05, 66));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(-29, 25.2, 0.5));
    model = alTogether * translateMatrix * scaleMatrix;
    cube.setTextureProperty(cas1, cas2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);


    ///right janlas
    for (int i = 0; i < 3; ++i) {
        temp = alTogether;

        translateMatrix = glm::translate(identityMatrix, glm::vec3(5.8 + i * 10.0, 9.5, 66.9));
        scaleMatrix = glm::scale(identityMatrix, glm::vec3(7.0, 7.5, 0.1));
        model = temp * translateMatrix * scaleMatrix;

        cube.setTextureProperty(choto1, choto2, 32.0);
        cube.drawCubeWithTexture(lightingShader, model);
    }

    for (int i = 0; i < 8; ++i) {
        temp = alTogether;

        translateMatrix = glm::translate(identityMatrix, glm::vec3(5.4 + i * 3.8, 25.3, 66));
        scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.0, 2.2, 0.5));
        model = temp * translateMatrix * scaleMatrix;

        cube.setTextureProperty(cas1, cas2, 32.0);
        cube.drawCubeWithTexture(lightingShader, model);
    }

    //gate1
    translateMatrix = glm::translate(identityMatrix, glm::vec3(-18.0, 0.05, 66.00));
    rotateYMatrix = glm::rotate(identityMatrix, glm::radians(door_ang), glm::vec3(0.0f, 1.0f, 0.0f));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(11.4f, 25.2f, .5f));
    model = alTogether * translateMatrix * rotateYMatrix * scaleMatrix;
    cube.setTextureProperty(casdoor1, casdoor2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);

    // Add ambient lighting boost for doors
    lightingShader.setFloat("material.shininess", 16.0f); // Reduce shininess for more even lighting

    for (int i = 0; i < 5; ++i) {
        glm::mat4 temp = alTogether;

        // Spikes
        translateMatrix = glm::translate(identityMatrix, glm::vec3(-17.0 + i * 5, 25.21, 66.00));
        scaleMatrix = glm::scale(identityMatrix, glm::vec3(.6f, 2.6f, .1f));
        model = temp * translateMatrix * scaleMatrix;
        cube.setTextureProperty(cas1, cas2, 32.0);
        cube.drawCubeWithTexture(lightingShader, model);

        // Triangle
        translateMatrix = glm::translate(identityMatrix, glm::vec3(-16.6 + i * 5, 28.3 + 0.15, 66.5));
        scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.5f, 2.2f, .1f));
        model = temp * translateMatrix * scaleMatrix;
        Triangle triangle = Triangle();
        triangle.drawTriangle(lightingShader, model, 0.0f, 0.0f, 0.0f);
    }





    //gate2
    translateMatrix = glm::translate(identityMatrix, glm::vec3(-5.9, 0.05, 66.00));  // Keep original position
    rotateYMatrix = glm::rotate(identityMatrix, glm::radians(-door_ang), glm::vec3(0.0f, -1.0f, 0.0f));  // Changed to negative Y-axis for inward rotation
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(11.4f, 25.2f, .5f));
    model = alTogether * translateMatrix * rotateYMatrix * scaleMatrix;
    cube.setTextureProperty(casdoor1, casdoor2, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);







    // Define control points for tower body (with a more pronounced medieval shape)
    GLfloat towerBodyPoints[] = {
        1.0f, 0.0f, 0.0f,     // Base
        1.05f, 0.2f, 0.0f,    // Slight outward at bottom
        1.02f, 0.4f, 0.0f,    // Slight inward
        1.0f, 0.6f, 0.0f,     // Middle
        1.02f, 0.8f, 0.0f,    // Slight outward for top
        1.05f, 0.9f, 0.0f,    // Wider for battlements
        1.1f, 1.0f, 0.0f      // Top platform for battlements
    };

    // Define control points for spire (with wider spread)
    GLfloat spirePoints[] = {
        2.2f, 0.0f, 0.0f,     // Much wider base to spread out
        2.0f, 0.1f, 0.0f,     // Gradual inward curve
        1.6f, 0.3f, 0.0f,     // Slower taper
        1.2f, 0.5f, 0.0f,     // Continue taper
        0.8f, 0.7f, 0.0f,     // Maintain spread
        0.4f, 0.9f, 0.0f,     // Final taper
        0.0f, 1.0f, 0.0f      // Pointed tip
    };

    // Create Bezier curves for tower parts with textures
    BezierCurve towerBody(towerBodyPoints, 21, cas1, cas2, 32.0f);
    BezierCurve spire(spirePoints, 21, cas1, cas2, 32.0f);

    // Draw towers at each corner with adjusted positions
    // Adjust the positions to be exactly at the edges
    glm::vec3 backLeft = glm::vec3(-51.0f, -0.5f, -9.0f);    // Moved slightly outward
    glm::vec3 backRight = glm::vec3(36.0f, -0.5f, -9.0f);    // Moved slightly outward
    glm::vec3 frontLeft = glm::vec3(-51.0f, -0.5f, 69.0f);   // Moved slightly outward
    glm::vec3 frontRight = glm::vec3(36.0f, -0.5f, 69.0f);   // Moved slightly outward

    // Draw towers at each corner
    std::vector<glm::vec3> towerPositions = { backLeft, backRight, frontLeft, frontRight };

    for (const auto& pos : towerPositions) {
        glm::mat4 temp = alTogether;
        translateMatrix = glm::translate(identityMatrix, pos);
        scaleMatrix = glm::scale(identityMatrix, glm::vec3(2.5f, 2.8f, 2.5f));  // Adjusted scale for better fit
        model = temp * translateMatrix * scaleMatrix;
        drawMedievalTower(cube, towerBody, spire, lightingShader, model, cas1, cas2, choto1, choto2);
    }

    //floor with stone road texture
    translateMatrix = glm::translate(identityMatrix, glm::vec3(-48.5, -0.5, -6.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(50, .5, 68.0));
    model = alTogether * translateMatrix * scaleMatrix;
    cube.setTextureProperty(grass1, grass2, 32.0);  // Using stone road texture
    cube.drawCubeWithTexture(lightingShader, model);

    translateMatrix = glm::translate(identityMatrix, glm::vec3(-10, -0.5, -6.5));
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(50, .5, 68.0));
    model = alTogether * translateMatrix * scaleMatrix;
    cube.setTextureProperty(grass1, grass2, 32.0);  // Using stone road texture
    cube.drawCubeWithTexture(lightingShader, model);


    //grassfloor
    translateMatrix = glm::translate(identityMatrix, glm::vec3(-93.5, -6.0, -26.5)); // Moved further out in x and z
    scaleMatrix = glm::scale(identityMatrix, glm::vec3(174, .7, 128.0));  // Increased width and depth
    model = alTogether * translateMatrix * scaleMatrix;

    // Create a new cube instance with adjusted texture coordinates for smaller tiling
    Cube groundCube = Cube(grass1, grass2, 32.0f, 0.0f, 0.0f, 20.0f, 13.0f); // Also adjusted tiling to maintain texture density
    groundCube.drawCubeWithTexture(lightingShader, model);








}

void drawMedievalTower(Cube& cube, BezierCurve& towerBody, BezierCurve& spire, Shader& lightingShader, glm::mat4 alTogether, unsigned int castlediffMap, unsigned int castlespecMap, unsigned int windowdiffMap, unsigned int windowspecMap) {
    glm::mat4 model = glm::mat4(1.0f);
    glm::mat4 translate = glm::mat4(1.0f);
    glm::mat4 identityMatrix = glm::mat4(1.0f);
    glm::mat4 scale = glm::mat4(1.0f);
    glm::mat4 rotate = glm::mat4(1.0f);

    // Simple base cube with proper width to match tower
    scale = glm::scale(identityMatrix, glm::vec3(5, 0.5, 5));  // Flatter base that matches tower width
    translate = glm::translate(identityMatrix, glm::vec3(-2.5, 0.0, -2.5));
    model = alTogether * translate * scale;
    cube.setTextureProperty(castlediffMap, castlespecMap, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);

    // Main tower body using Bezier curve with texture
    scale = glm::scale(identityMatrix, glm::vec3(2.2, 12.0, 2.2));  // Back to original width
    translate = glm::translate(identityMatrix, glm::vec3(0.0, 0.25, 0.0));  // Slightly raised to sit on flatter base
    model = alTogether * translate * scale;
    towerBody.drawBezierCurveWithTexture(lightingShader, model);

    // Gothic-style windows with flag texture
    for (int i = 0; i < 4; i++) {
        float angle = i * 90.0f;
        rotate = glm::rotate(identityMatrix, glm::radians(angle), glm::vec3(0.0f, 1.0f, 0.0f));

        // Main window
        translate = glm::translate(identityMatrix, glm::vec3(0.0, 6.0, 2.3));
        scale = glm::scale(identityMatrix, glm::vec3(1.0f, 2.0f, 0.1f));
        model = alTogether * rotate * translate * scale;
        cube.setTextureProperty(windowdiffMap, windowspecMap, 32.0);  // Using flag texture
        cube.drawCubeWithTexture(lightingShader, model);

        // Window arch
        translate = glm::translate(identityMatrix, glm::vec3(0.0, 7.8, 2.3));
        scale = glm::scale(identityMatrix, glm::vec3(1.0f, 0.6f, 0.1f));
        model = alTogether * rotate * translate * scale;
        cube.drawCubeWithTexture(lightingShader, model);

        // Window frame vertical sides
        translate = glm::translate(identityMatrix, glm::vec3(-0.55, 6.0, 2.35));
        scale = glm::scale(identityMatrix, glm::vec3(0.1f, 2.4f, 0.05f));
        model = alTogether * rotate * translate * scale;
        cube.setTextureProperty(castlediffMap, castlespecMap, 32.0);
        cube.drawCubeWithTexture(lightingShader, model);

        translate = glm::translate(identityMatrix, glm::vec3(0.55, 6.0, 2.35));
        model = alTogether * rotate * translate * scale;
        cube.drawCubeWithTexture(lightingShader, model);
    }

    // Stone band detail below battlements
    translate = glm::translate(identityMatrix, glm::vec3(0.0, 12.0, 0.0));
    scale = glm::scale(identityMatrix, glm::vec3(2.4f, 0.3f, 2.4f));  // Back to original width
    model = alTogether * translate * scale;
    cube.setTextureProperty(castlediffMap, castlespecMap, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);

    // Enhanced battlements/crenellations
    for (int i = 0; i < 12; i++) {
        float angle = i * 30.0f;
        float radius = 2.3f;  // Back to original radius
        float xPos = radius * cos(glm::radians(angle));
        float zPos = radius * sin(glm::radians(angle));

        // Main merlon
        translate = glm::translate(identityMatrix, glm::vec3(xPos, 12.4, zPos));
        rotate = glm::rotate(identityMatrix, glm::radians(angle), glm::vec3(0.0f, 1.0f, 0.0f));
        scale = glm::scale(identityMatrix, glm::vec3(0.4f, 1.0f, 0.3f));  // Original merlon size
        model = alTogether * translate * rotate * scale;
        cube.setTextureProperty(castlediffMap, castlespecMap, 32.0);
        cube.drawCubeWithTexture(lightingShader, model);

        // Top detail of merlon
        translate = glm::translate(identityMatrix, glm::vec3(xPos, 13.3, zPos));
        scale = glm::scale(identityMatrix, glm::vec3(0.45f, 0.2f, 0.35f));  // Original top detail size
        model = alTogether * translate * rotate * scale;
        cube.setTextureProperty(castlediffMap, castlespecMap, 32.0);
        cube.drawCubeWithTexture(lightingShader, model);
    }

    // Spire using Bezier curve with texture
    scale = glm::scale(identityMatrix, glm::vec3(1.1, 5.0, 1.1));  // Back to original width
    translate = glm::translate(identityMatrix, glm::vec3(0.0, 13.5, 0.0));
    model = alTogether * translate * scale;
    spire.drawBezierCurveWithTexture(lightingShader, model);

    // Decorative finial at the very top
    translate = glm::translate(identityMatrix, glm::vec3(0.0, 19.0, 0.0));
    scale = glm::scale(identityMatrix, glm::vec3(0.2f, 0.6f, 0.2f));  // Original finial size
    model = alTogether * translate * scale;
    cube.setTextureProperty(castlediffMap, castlespecMap, 32.0);
    cube.drawCubeWithTexture(lightingShader, model);
}

#pragma once