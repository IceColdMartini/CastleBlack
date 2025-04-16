#pragma once
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "shader.h"
#include "cube.h"
#include <random>
#include <vector>

class FractalTree {
private:
    struct BranchData {
        float angle;
        float tiltAngle;
        float scale;
    };

    struct LeafData {
        float angle;
        float tiltAngle;
    };

    Cube* branchCube;
    Cube* leafCube;
    std::random_device rd;
    std::mt19937 gen;
    std::uniform_real_distribution<float> angleDist;
    std::uniform_real_distribution<float> scaleDist;

    // Store pre-computed random values
    std::vector<std::vector<std::vector<BranchData>>> branchData;
    std::vector<std::vector<LeafData>> leafData;
    bool initialized;
    const int MAX_DEPTH = 5;
    const int MAX_BRANCHES_PER_LEVEL = 50;

public:
    FractalTree(unsigned int barkDiffMap, unsigned int barkSpecMap,
        unsigned int leafDiffMap, unsigned int leafSpecMap) : gen(rd()), initialized(false) {
        // Initialize cubes with textures - modify texture repeat for bark
        branchCube = new Cube(barkDiffMap, barkSpecMap, 32.0f, 0.0f, 0.0f, .0001f, .0001f); // Increased texture repeat to 50x
        leafCube = new Cube(leafDiffMap, leafSpecMap, 32.0f, 0.0f, 0.0f, 1.0f, 1.0f);

        // Initialize random distributions
        angleDist = std::uniform_real_distribution<float>(-15.0f, 15.0f);
        scaleDist = std::uniform_real_distribution<float>(0.8f, 1.0f);
    }

    ~FractalTree() {
        delete branchCube;
        delete leafCube;
    }

    void initializeTree() {
        if (initialized) return;

        // Pre-compute branch data for all levels
        branchData.resize(MAX_DEPTH);
        for (int depth = 0; depth < MAX_DEPTH; depth++) {
            int numBranchesAtDepth = (depth > 2) ? 4 : 3;
            branchData[depth].resize(MAX_BRANCHES_PER_LEVEL);

            for (int branch = 0; branch < MAX_BRANCHES_PER_LEVEL; branch++) {
                branchData[depth][branch].resize(4);  // Always allocate 4 for maximum possible branches
                for (int i = 0; i < 4; i++) {
                    branchData[depth][branch][i].angle = angleDist(gen);
                    branchData[depth][branch][i].tiltAngle = 30.0f + angleDist(gen) * 0.5f;
                    branchData[depth][branch][i].scale = scaleDist(gen);
                }
            }
        }

        // Pre-compute leaf data
        leafData.resize(MAX_BRANCHES_PER_LEVEL);
        for (int cluster = 0; cluster < MAX_BRANCHES_PER_LEVEL; cluster++) {
            leafData[cluster].resize(6);
            for (int leaf = 0; leaf < 6; leaf++) {
                leafData[cluster][leaf].angle = angleDist(gen);
                leafData[cluster][leaf].tiltAngle = 45.0f + angleDist(gen);
            }
        }

        initialized = true;
    }

    void drawTree(Shader& shader, glm::mat4 model) {
        if (!initialized) {
            initializeTree();
        }
        drawBranch(shader, model, 1.0f, MAX_DEPTH - 1, 0, 0);
    }

private:
    void drawBranch(Shader& shader, glm::mat4 model, float scale, int depth, int iteration, int branchIndex) {
        if (depth < 0) return;

        glm::mat4 identityMatrix = glm::mat4(1.0f);

        // Draw current branch
        glm::mat4 branchScale = glm::scale(identityMatrix, glm::vec3(0.3f * scale, 2.0f * scale, 0.3f * scale));
        glm::mat4 branchModel = model * branchScale;
        branchCube->drawCubeWithTexture(shader, branchModel);

        // Only draw leaves at end branches with single layer
        if (depth == 0) {
            // Single layer of leaves
            drawLeaves(shader, model, scale * 1.2f, branchIndex % MAX_BRANCHES_PER_LEVEL);
            return;
        }

        float newScale = scale * 0.8f;
        float heightOffset = 2.0f * scale;

        // Main branch
        glm::mat4 translate = glm::translate(identityMatrix, glm::vec3(0.0f, heightOffset, 0.0f));
        glm::mat4 newModel = model * translate;
        drawBranch(shader, newModel, newScale, depth - 1, iteration + 1, (branchIndex * 4) % MAX_BRANCHES_PER_LEVEL);

        // Side branches with pre-computed variations
        int numBranches = (depth > 2) ? 4 : 3;
        float baseAngle = 360.0f / numBranches;

        for (int i = 0; i < numBranches; i++) {
            const BranchData& data = branchData[depth][branchIndex % MAX_BRANCHES_PER_LEVEL][i];
            float angle = baseAngle * i + data.angle;

            glm::mat4 rotateY = glm::rotate(identityMatrix, glm::radians(angle), glm::vec3(0.0f, 1.0f, 0.0f));
            glm::mat4 tilt = glm::rotate(identityMatrix, glm::radians(data.tiltAngle), glm::vec3(0.0f, 0.0f, 1.0f));

            glm::mat4 translate = glm::translate(identityMatrix, glm::vec3(0.0f, heightOffset * 0.7f, 0.0f));

            glm::mat4 newModel = model * translate * rotateY * tilt;
            int newBranchIndex = ((branchIndex * 4 + i + 1) % MAX_BRANCHES_PER_LEVEL);
            drawBranch(shader, newModel, newScale * data.scale, depth - 1, iteration + 1, newBranchIndex);
        }
    }

    void drawLeaves(Shader& shader, glm::mat4 model, float scale, int clusterIndex) {
        glm::mat4 identityMatrix = glm::mat4(1.0f);

        // Further reduced number of leaves per cluster
        int numLeaves = 12; // Reduced from 24 to 12

        // Ensure we have enough leaf data
        while (leafData[clusterIndex].size() < numLeaves) {
            LeafData newLeaf;
            newLeaf.angle = angleDist(gen);
            newLeaf.tiltAngle = 45.0f + angleDist(gen);
            leafData[clusterIndex].push_back(newLeaf);
        }

        // Single layer of leaves with slightly larger size to compensate
        for (int i = 0; i < numLeaves; i++) {
            const LeafData& data = leafData[clusterIndex][i];
            float angle = (360.0f / numLeaves) * i + data.angle;

            glm::mat4 rotateY = glm::rotate(identityMatrix, glm::radians(angle), glm::vec3(0.0f, 1.0f, 0.0f));
            glm::mat4 tilt = glm::rotate(identityMatrix, glm::radians(data.tiltAngle), glm::vec3(1.0f, 0.0f, 0.0f));

            // Adjusted leaf positioning and increased scale to compensate for fewer leaves
            glm::mat4 translate = glm::translate(identityMatrix, glm::vec3(0.0f, 0.4f * scale, 0.0f));
            glm::mat4 leafScale = glm::scale(identityMatrix, glm::vec3(0.7f * scale, 0.7f * scale, 0.02f * scale)); // Increased size from 0.5 to 0.7

            glm::mat4 leafModel = model * translate * rotateY * tilt * leafScale;
            leafCube->drawCubeWithTexture(shader, leafModel);
        }
    }
};