//
// Created by michaelpollind on 19/10/17.
//

#include "ml.h"
#include <math.h>
#include <algorithm>

float ml::propegate(float inputs[INPUTS], float outputs[OUTPUT]) {
    float intermediary[NODES_PER_LAYER];
    for (int node_index = 0; node_index < NODES_PER_LAYER; ++node_index) {
        float value = 0;
        for (int input_index = 0; input_index < INPUTS; ++input_index) {
            value  += input_[input_index][node_index] * inputs[input_index];
        }
        intermediary[node_index] = sigmoid(value,0);
    }


    for (int layer_index = 0; layer_index < LAYERS; ++layer_index) {
        float temp[NODES_PER_LAYER];
        for(int node_index = 0; node_index < NODES_PER_LAYER; ++node_index){
            float value = 0;
            for(int input_index = 0; input_index < NODES_PER_LAYER; ++input_index) {
            }

        }
        std::copy(temp,temp + NODES_PER_LAYER,intermediary);
    }
}

float ml::sigmoid(float a, float bias) {
    return 1 / (1 + exp(-a - bias));
}