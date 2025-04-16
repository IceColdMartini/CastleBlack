//
//  pointLight.h
//  test
//
//  Created by Nazirul Hasan on 22/9/23.
//

#ifndef pointLight_h
#define pointLight_h

#include <glad/glad.h>
#include <glm/glm.hpp>
#include "shader.h"

class PointLight { //point light class
public:
    //the attributes of light
    glm::vec3 position;
    glm::vec3 ambient;
    glm::vec3 diffuse;
    glm::vec3 specular;
    glm::vec3 direction;
    float k_c;
    float k_l;
    float k_q;
    int lightNumber; //which light

    //constructor
    PointLight(float posX, float posY, float posZ, float ambR, float ambG, float ambB, float diffR, float diffG, float diffB, float specR, float specG, float specB, float constant, float linear, float quadratic, int num) {

        position = glm::vec3(posX, posY, posZ);
        ambient = glm::vec3(ambR, ambG, ambB);
        diffuse = glm::vec3(diffR, diffG, diffB);
        specular = glm::vec3(specR, specG, specB);
        k_c = constant;
        k_l = linear;
        k_q = quadratic;
        lightNumber = num;
    }
    //input is a shader, ekhan theke set up hochhe fragment shader e
    void setUpPointLight(Shader& lightingShader)
    {
        lightingShader.use();
        //setting up all the properties for each light
        if (lightNumber == 1) {
            lightingShader.setVec3("pointLights[0].position", position);
            lightingShader.setVec3("pointLights[0].ambient", ambientOn * ambient);  //turn off hoile ambientOn 0, so ultimately ambient = 0 . complemete shutdown, we can add some number to make sure there is little light/color, even if everything is turned off, its called ambient light
            lightingShader.setVec3("pointLights[0].diffuse", diffuseOn * diffuse);
            lightingShader.setVec3("pointLights[0].specular", specularOn * specular);
            lightingShader.setFloat("pointLights[0].k_c", k_c);
            lightingShader.setFloat("pointLights[0].k_l", k_l);
            lightingShader.setFloat("pointLights[0].k_q", k_q);
        }

        else if (lightNumber == 2)
        {
            lightingShader.setVec3("pointLights[1].position", position);
            lightingShader.setVec3("pointLights[1].ambient", ambientOn * ambient);
            lightingShader.setVec3("pointLights[1].diffuse", diffuseOn * diffuse);
            lightingShader.setVec3("pointLights[1].specular", specularOn * specular);
            lightingShader.setFloat("pointLights[1].k_c", k_c);
            lightingShader.setFloat("pointLights[1].k_l", k_l);
            lightingShader.setFloat("pointLights[1].k_q", k_q);
        }
        else if (lightNumber == 3)
        {
            lightingShader.setVec3("pointLights[2].position", position);
            lightingShader.setVec3("pointLights[2].ambient", ambientOn * ambient);
            lightingShader.setVec3("pointLights[2].diffuse", diffuseOn * diffuse);
            lightingShader.setVec3("pointLights[2].specular", specularOn * specular);
            lightingShader.setFloat("pointLights[2].k_c", k_c);
            lightingShader.setFloat("pointLights[2].k_l", k_l);
            lightingShader.setFloat("pointLights[2].k_q", k_q);
        }
        else if (lightNumber == 4)
        {
            lightingShader.setVec3("pointLights[3].position", position);
            lightingShader.setVec3("pointLights[3].ambient", ambientOn * ambient);
            lightingShader.setVec3("pointLights[3].diffuse", diffuseOn * diffuse);
            lightingShader.setVec3("pointLights[3].specular", specularOn * specular);
            lightingShader.setFloat("pointLights[3].k_c", k_c);
            lightingShader.setFloat("pointLights[3].k_l", k_l);
            lightingShader.setFloat("pointLights[3].k_q", k_q);
        }
        else if (lightNumber == 5)
        {
            lightingShader.setVec3("pointLights[4].position", position);
            lightingShader.setVec3("pointLights[4].ambient", ambientOn * ambient);
            lightingShader.setVec3("pointLights[4].diffuse", diffuseOn * diffuse);
            lightingShader.setVec3("pointLights[4].specular", specularOn * specular);
            lightingShader.setFloat("pointLights[4].k_c", k_c);
            lightingShader.setFloat("pointLights[4].k_l", k_l);
            lightingShader.setFloat("pointLights[4].k_q", k_q);
        }
        else if (lightNumber == 6)
        {
            lightingShader.setVec3("pointLights[5].position", position);
            lightingShader.setVec3("pointLights[5].ambient", ambientOn * ambient);
            lightingShader.setVec3("pointLights[5].diffuse", diffuseOn * diffuse);
            lightingShader.setVec3("pointLights[5].specular", specularOn * specular);
            lightingShader.setFloat("pointLights[5].k_c", k_c);
            lightingShader.setFloat("pointLights[5].k_l", k_l);
            lightingShader.setFloat("pointLights[5].k_q", k_q);
        }
        else if (lightNumber == 7)
        {
            lightingShader.setVec3("pointLights[6].position", position);
            lightingShader.setVec3("pointLights[6].ambient", ambientOn * ambient);
            lightingShader.setVec3("pointLights[6].diffuse", diffuseOn * diffuse);
            lightingShader.setVec3("pointLights[6].specular", specularOn * specular);
            lightingShader.setFloat("pointLights[6].k_c", k_c);
            lightingShader.setFloat("pointLights[6].k_l", k_l);
            lightingShader.setFloat("pointLights[6].k_q", k_q);
        }
        else if (lightNumber == 8)
        {
            lightingShader.setVec3("pointLights[7].position", position);
            lightingShader.setVec3("pointLights[7].ambient", ambientOn * ambient);
            lightingShader.setVec3("pointLights[7].diffuse", diffuseOn * diffuse);
            lightingShader.setVec3("pointLights[7].specular", specularOn * specular);
            lightingShader.setFloat("pointLights[7].k_c", k_c);
            lightingShader.setFloat("pointLights[7].k_l", k_l);
            lightingShader.setFloat("pointLights[7].k_q", k_q);
        }
        else if (lightNumber == 9)
        {
            lightingShader.setVec3("pointLights[8].position", position);
            lightingShader.setVec3("pointLights[8].ambient", ambientOn * ambient);
            lightingShader.setVec3("pointLights[8].diffuse", diffuseOn * diffuse);
            lightingShader.setVec3("pointLights[8].specular", specularOn * specular);
            lightingShader.setFloat("pointLights[8].k_c", k_c);
            lightingShader.setFloat("pointLights[8].k_l", k_l);
            lightingShader.setFloat("pointLights[8].k_q", k_q);
        }
        else if (lightNumber == 10)
        {
            lightingShader.setVec3("pointLights[9].position", position);
            lightingShader.setVec3("pointLights[9].ambient", ambientOn * ambient);
            lightingShader.setVec3("pointLights[9].diffuse", diffuseOn * diffuse);
            lightingShader.setVec3("pointLights[9].specular", specularOn * specular);
            lightingShader.setFloat("pointLights[9].k_c", k_c);
            lightingShader.setFloat("pointLights[9].k_l", k_l);
            lightingShader.setFloat("pointLights[9].k_q", k_q);
        }
        else if (lightNumber == 11)
        {
            lightingShader.setVec3("pointLights[10].position", position);
            lightingShader.setVec3("pointLights[10].ambient", ambientOn * ambient);
            lightingShader.setVec3("pointLights[10].diffuse", diffuseOn * diffuse);
            lightingShader.setVec3("pointLights[10].specular", specularOn * specular);
            lightingShader.setFloat("pointLights[10].k_c", k_c);
            lightingShader.setFloat("pointLights[10].k_l", k_l);
            lightingShader.setFloat("pointLights[10].k_q", k_q);
        }
        else if (lightNumber == 12)
        {
            lightingShader.setVec3("pointLights[11].position", position);
            lightingShader.setVec3("pointLights[11].ambient", ambientOn * ambient);
            lightingShader.setVec3("pointLights[11].diffuse", diffuseOn * diffuse);
            lightingShader.setVec3("pointLights[11].specular", specularOn * specular);
            lightingShader.setFloat("pointLights[11].k_c", k_c);
            lightingShader.setFloat("pointLights[11].k_l", k_l);
            lightingShader.setFloat("pointLights[11].k_q", k_q);
        }
        else if (lightNumber == 13)
        {
            lightingShader.setVec3("pointLights[12].position", position);
            lightingShader.setVec3("pointLights[12].ambient", ambientOn * ambient);
            lightingShader.setVec3("pointLights[12].diffuse", diffuseOn * diffuse);
            lightingShader.setVec3("pointLights[12].specular", specularOn * specular);
            lightingShader.setFloat("pointLights[12].k_c", k_c);
            lightingShader.setFloat("pointLights[12].k_l", k_l);
            lightingShader.setFloat("pointLights[12].k_q", k_q);
        }
        else if (lightNumber == 14)
        {
            lightingShader.setVec3("pointLights[13].position", position);
            lightingShader.setVec3("pointLights[13].ambient", ambientOn * ambient);
            lightingShader.setVec3("pointLights[13].diffuse", diffuseOn * diffuse);
            lightingShader.setVec3("pointLights[13].specular", specularOn * specular);
            lightingShader.setFloat("pointLights[13].k_c", k_c);
            lightingShader.setFloat("pointLights[13].k_l", k_l);
            lightingShader.setFloat("pointLights[13].k_q", k_q);
        }
        else if (lightNumber == 15)
        {
            lightingShader.setVec3("pointLights[14].position", position);
            lightingShader.setVec3("pointLights[14].ambient", ambientOn * ambient);
            lightingShader.setVec3("pointLights[14].diffuse", diffuseOn * diffuse);
            lightingShader.setVec3("pointLights[14].specular", specularOn * specular);
            lightingShader.setFloat("pointLights[14].k_c", k_c);
            lightingShader.setFloat("pointLights[14].k_l", k_l);
            lightingShader.setFloat("pointLights[14].k_q", k_q);
        }
        else if (lightNumber == 16)
        {
            lightingShader.setVec3("pointLights[15].position", position);
            lightingShader.setVec3("pointLights[15].ambient", ambientOn * ambient);
            lightingShader.setVec3("pointLights[15].diffuse", diffuseOn * diffuse);
            lightingShader.setVec3("pointLights[15].specular", specularOn * specular);
            lightingShader.setFloat("pointLights[15].k_c", k_c);
            lightingShader.setFloat("pointLights[15].k_l", k_l);
            lightingShader.setFloat("pointLights[15].k_q", k_q);
        }
        else if (lightNumber == 17)
        {
            lightingShader.setVec3("pointLights[16].position", position);
            lightingShader.setVec3("pointLights[16].ambient", ambientOn * ambient);
            lightingShader.setVec3("pointLights[16].diffuse", diffuseOn * diffuse);
            lightingShader.setVec3("pointLights[16].specular", specularOn * specular);
            lightingShader.setFloat("pointLights[16].k_c", k_c);
            lightingShader.setFloat("pointLights[16].k_l", k_l);
            lightingShader.setFloat("pointLights[16].k_q", k_q);
        }
        else if (lightNumber == 18)
        {
            lightingShader.setVec3("pointLights[17].position", position);
            lightingShader.setVec3("pointLights[17].ambient", ambientOn * ambient);
            lightingShader.setVec3("pointLights[17].diffuse", diffuseOn * diffuse);
            lightingShader.setVec3("pointLights[17].specular", specularOn * specular);
            lightingShader.setFloat("pointLights[17].k_c", k_c);
            lightingShader.setFloat("pointLights[17].k_l", k_l);
            lightingShader.setFloat("pointLights[17].k_q", k_q);
        }
        else if (lightNumber == 19)
        {
            lightingShader.setVec3("pointLights[18].position", position);
            lightingShader.setVec3("pointLights[18].ambient", ambientOn * ambient);
            lightingShader.setVec3("pointLights[18].diffuse", diffuseOn * diffuse);
            lightingShader.setVec3("pointLights[18].specular", specularOn * specular);
            lightingShader.setFloat("pointLights[18].k_c", k_c);
            lightingShader.setFloat("pointLights[18].k_l", k_l);
            lightingShader.setFloat("pointLights[18].k_q", k_q);
        }
        else if (lightNumber == 20)
        {
            lightingShader.setVec3("pointLights[19].position", position);
            lightingShader.setVec3("pointLights[19].ambient", ambientOn * ambient);
            lightingShader.setVec3("pointLights[19].diffuse", diffuseOn * diffuse);
            lightingShader.setVec3("pointLights[19].specular", specularOn * specular);
            lightingShader.setFloat("pointLights[19].k_c", k_c);
            lightingShader.setFloat("pointLights[19].k_l", k_l);
            lightingShader.setFloat("pointLights[19].k_q", k_q);
        }
        else if (lightNumber == 21)
        {
            lightingShader.setVec3("pointLights[20].position", position);
            lightingShader.setVec3("pointLights[20].ambient", ambientOn * ambient);
            lightingShader.setVec3("pointLights[20].diffuse", diffuseOn * diffuse);
            lightingShader.setVec3("pointLights[20].specular", specularOn * specular);
            lightingShader.setFloat("pointLights[20].k_c", k_c);
            lightingShader.setFloat("pointLights[20].k_l", k_l);
            lightingShader.setFloat("pointLights[20].k_q", k_q);
        }
        else if (lightNumber == 22)
        {
            lightingShader.setVec3("pointLights[21].position", position);
            lightingShader.setVec3("pointLights[21].ambient", ambientOn * ambient);
            lightingShader.setVec3("pointLights[21].diffuse", diffuseOn * diffuse);
            lightingShader.setVec3("pointLights[21].specular", specularOn * specular);
            lightingShader.setFloat("pointLights[21].k_c", k_c);
            lightingShader.setFloat("pointLights[21].k_l", k_l);
            lightingShader.setFloat("pointLights[21].k_q", k_q);
        }
        else if (lightNumber == 23)
        {
            lightingShader.setVec3("pointLights[22].position", position);
            lightingShader.setVec3("pointLights[22].ambient", ambientOn * ambient);
            lightingShader.setVec3("pointLights[22].diffuse", diffuseOn * diffuse);
            lightingShader.setVec3("pointLights[22].specular", specularOn * specular);
            lightingShader.setFloat("pointLights[22].k_c", k_c);
            lightingShader.setFloat("pointLights[22].k_l", k_l);
            lightingShader.setFloat("pointLights[22].k_q", k_q);
        }
        else if (lightNumber == 24)
        {
            lightingShader.setVec3("pointLights[23].position", position);
            lightingShader.setVec3("pointLights[23].ambient", ambientOn * ambient);
            lightingShader.setVec3("pointLights[23].diffuse", diffuseOn * diffuse);
            lightingShader.setVec3("pointLights[23].specular", specularOn * specular);
            lightingShader.setFloat("pointLights[23].k_c", k_c);
            lightingShader.setFloat("pointLights[23].k_l", k_l);
            lightingShader.setFloat("pointLights[23].k_q", k_q);
        }
        else if (lightNumber == 25)
        {
            lightingShader.setVec3("pointLights[24].position", position);
            lightingShader.setVec3("pointLights[24].ambient", ambientOn * ambient);
            lightingShader.setVec3("pointLights[24].diffuse", diffuseOn * diffuse);
            lightingShader.setVec3("pointLights[24].specular", specularOn * specular);
            lightingShader.setFloat("pointLights[24].k_c", k_c);
            lightingShader.setFloat("pointLights[24].k_l", k_l);
            lightingShader.setFloat("pointLights[24].k_q", k_q);
        }
        else if (lightNumber == 26)
        {
            lightingShader.setVec3("pointLights[25].position", position);
            lightingShader.setVec3("pointLights[25].ambient", ambientOn * ambient);
            lightingShader.setVec3("pointLights[25].diffuse", diffuseOn * diffuse);
            lightingShader.setVec3("pointLights[25].specular", specularOn * specular);
            lightingShader.setFloat("pointLights[25].k_c", k_c);
            lightingShader.setFloat("pointLights[25].k_l", k_l);
            lightingShader.setFloat("pointLights[25].k_q", k_q);
        }

        else if (lightNumber == 27)
        {
            lightingShader.setVec3("pointLights[26].position", position);
            lightingShader.setVec3("pointLights[26].ambient", ambientOn * ambient);
            lightingShader.setVec3("pointLights[26].diffuse", diffuseOn * diffuse);
            lightingShader.setVec3("pointLights[26].specular", specularOn * specular);
            lightingShader.setFloat("pointLights[26].k_c", k_c);
            lightingShader.setFloat("pointLights[26].k_l", k_l);
            lightingShader.setFloat("pointLights[26].k_q", k_q);
        }
        else if (lightNumber == 28)
        {
            lightingShader.setVec3("pointLights[27].position", position);
            lightingShader.setVec3("pointLights[27].ambient", ambientOn * ambient);
            lightingShader.setVec3("pointLights[27].diffuse", diffuseOn * diffuse);
            lightingShader.setVec3("pointLights[27].specular", specularOn * specular);
            lightingShader.setFloat("pointLights[27].k_c", k_c);
            lightingShader.setFloat("pointLights[27].k_l", k_l);
            lightingShader.setFloat("pointLights[27].k_q", k_q);
        }
        else if (lightNumber == 29)
        {
            lightingShader.setVec3("pointLights[28].position", position);
            lightingShader.setVec3("pointLights[28].ambient", ambientOn * ambient);
            lightingShader.setVec3("pointLights[28].diffuse", diffuseOn * diffuse);
            lightingShader.setVec3("pointLights[28].specular", specularOn * specular);
            lightingShader.setFloat("pointLights[28].k_c", k_c);
            lightingShader.setFloat("pointLights[28].k_l", k_l);
            lightingShader.setFloat("pointLights[28].k_q", k_q);
        }
        else if (lightNumber == 30)
        {
            lightingShader.setVec3("pointLights[29].position", position);
            lightingShader.setVec3("pointLights[29].ambient", ambientOn * ambient);
            lightingShader.setVec3("pointLights[29].diffuse", diffuseOn * diffuse);
            lightingShader.setVec3("pointLights[29].specular", specularOn * specular);
            lightingShader.setFloat("pointLights[29].k_c", k_c);
            lightingShader.setFloat("pointLights[29].k_l", k_l);
            lightingShader.setFloat("pointLights[29].k_q", k_q);
        }
        else if (lightNumber == 31)
        {
            lightingShader.setVec3("pointLights[30].position", position);
            lightingShader.setVec3("pointLights[30].ambient", ambientOn * ambient);
            lightingShader.setVec3("pointLights[30].diffuse", diffuseOn * diffuse);
            lightingShader.setVec3("pointLights[30].specular", specularOn * specular);
            lightingShader.setFloat("pointLights[30].k_c", k_c);
            lightingShader.setFloat("pointLights[30].k_l", k_l);
            lightingShader.setFloat("pointLights[30].k_q", k_q);
        }
        else if (lightNumber == 32)
        {
            lightingShader.setVec3("pointLights[31].position", position);
            lightingShader.setVec3("pointLights[31].ambient", ambientOn * ambient);
            lightingShader.setVec3("pointLights[31].diffuse", diffuseOn * diffuse);
            lightingShader.setVec3("pointLights[31].specular", specularOn * specular);
            lightingShader.setFloat("pointLights[31].k_c", k_c);
            lightingShader.setFloat("pointLights[31].k_l", k_l);
            lightingShader.setFloat("pointLights[31].k_q", k_q);
        }
        else if (lightNumber == 33)
        {
            lightingShader.setVec3("pointLights[32].position", position);
            lightingShader.setVec3("pointLights[32].ambient", ambientOn * ambient);
            lightingShader.setVec3("pointLights[32].diffuse", diffuseOn * diffuse);
            lightingShader.setVec3("pointLights[32].specular", specularOn * specular);
            lightingShader.setFloat("pointLights[32].k_c", k_c);
            lightingShader.setFloat("pointLights[32].k_l", k_l);
            lightingShader.setFloat("pointLights[32].k_q", k_q);
        }
        else if (lightNumber == 34)
        {
            lightingShader.setVec3("pointLights[33].position", position);
            lightingShader.setVec3("pointLights[33].ambient", ambientOn * ambient);
            lightingShader.setVec3("pointLights[33].diffuse", diffuseOn * diffuse);
            lightingShader.setVec3("pointLights[33].specular", specularOn * specular);
            lightingShader.setFloat("pointLights[33].k_c", k_c);
            lightingShader.setFloat("pointLights[33].k_l", k_l);
            lightingShader.setFloat("pointLights[33].k_q", k_q);
        }
        else if (lightNumber == 35)
        {
            lightingShader.setVec3("pointLights[34].position", position);
            lightingShader.setVec3("pointLights[34].ambient", ambientOn * ambient);
            lightingShader.setVec3("pointLights[34].diffuse", diffuseOn * diffuse);
            lightingShader.setVec3("pointLights[34].specular", specularOn * specular);
            lightingShader.setFloat("pointLights[34].k_c", k_c);
            lightingShader.setFloat("pointLights[34].k_l", k_l);
            lightingShader.setFloat("pointLights[34].k_q", k_q);
        }
        else if (lightNumber == 36)
        {
            lightingShader.setVec3("pointLights[35].position", position);
            lightingShader.setVec3("pointLights[35].ambient", ambientOn * ambient);
            lightingShader.setVec3("pointLights[35].diffuse", diffuseOn * diffuse);
            lightingShader.setVec3("pointLights[35].specular", specularOn * specular);
            lightingShader.setFloat("pointLights[35].k_c", k_c);
            lightingShader.setFloat("pointLights[35].k_l", k_l);
            lightingShader.setFloat("pointLights[35].k_q", k_q);
        }
        else if (lightNumber == 37)
        {
            lightingShader.setVec3("pointLights[36].position", position);
            lightingShader.setVec3("pointLights[36].ambient", ambientOn * ambient);
            lightingShader.setVec3("pointLights[36].diffuse", diffuseOn * diffuse);
            lightingShader.setVec3("pointLights[36].specular", specularOn * specular);
            lightingShader.setFloat("pointLights[36].k_c", k_c);
            lightingShader.setFloat("pointLights[36].k_l", k_l);
            lightingShader.setFloat("pointLights[36].k_q", k_q);
        }
        else
        {
            lightingShader.setVec3("pointLights[37].position", position);
            lightingShader.setVec3("pointLights[37].ambient", ambientOn * ambient);
            lightingShader.setVec3("pointLights[37].diffuse", diffuseOn * diffuse);
            lightingShader.setVec3("pointLights[37].specular", specularOn * specular);
            lightingShader.setFloat("pointLights[37].k_c", k_c);
            lightingShader.setFloat("pointLights[37].k_l", k_l);
            lightingShader.setFloat("pointLights[37].k_q", k_q);
        }

    }
    void turnOff() //light off
    {
        ambientOn = 0.0;
        diffuseOn = 0.0;
        specularOn = 0.0;
    }
    void turnOn()
    {
        ambientOn = 1.0;
        diffuseOn = 1.0;
        specularOn = 1.0;
    }
    void turnAmbientOn()
    {
        ambientOn = 1.0;
    }
    void turnAmbientOff()
    {
        ambientOn = 0.0;
    }
    void turnDiffuseOn()
    {
        diffuseOn = 1.0;
    }
    void turnDiffuseOff()
    {
        diffuseOn = 0.0;
    }
    void turnSpecularOn()
    {
        specularOn = 1.0;
    }
    void turnSpecularOff()
    {
        specularOn = 0.0;
    }
private: //for light on-off
    float ambientOn = 1.0;
    float diffuseOn = 1.0;
    float specularOn = 1.0;
};

#endif /* pointLight_h */
