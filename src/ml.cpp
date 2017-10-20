//
// Created by michaelpollind on 19/10/17.
//

#include "ml.h"
#include <math.h>
#include <algorithm>

//float ml::propegate(const float inputs[INPUTS],float outputs[OUTPUT]) {
//    float intermediary[NODES_PER_LAYER];
//    for (int node_index = 0; node_index < NODES_PER_LAYER; ++node_index) {
//        float value = 0;
//        for (int input_index = 0; input_index < INPUTS; ++input_index) {
//            value  += input_[input_index][node_index] * inputs[input_index];
//        }
//        intermediary[node_index] = sigmoid(value,0);
//    }
//
//    for (auto &layer : layers_) {
//        float temp[NODES_PER_LAYER];
//        for(int node_index = 0; node_index < NODES_PER_LAYER; ++node_index){
//            float value = 0;
//            for(int input_index = 0; input_index < NODES_PER_LAYER; ++input_index) {
//                value  += intermediary[input_index] * layer.inputs[input_index][node_index];
//            }
//            temp[node_index] = sigmoid(value,layer.bias[node_index]);
//        }
//        std::copy(temp,temp + NODES_PER_LAYER,intermediary);
//    }
//
//    for(int output_index = 0; output_index < OUTPUT; ++output_index) {
//
//        float value = 0;
//        for (int node_index = 0; node_index < NODES_PER_LAYER; ++node_index) {
//            value += intermediary[node_index] * output_[node_index][output_index];
//        }
//        outputs[output_index] = sigmoid(value,0);
//    }
//}

ml::ml() {

}

//void ml::addLayer(Layer layer) {
//    layers_.push_back(layer);
//}

float ml::sigmoid(float a, float bias) {
    return 1 / (1 + exp(-a - bias));
}