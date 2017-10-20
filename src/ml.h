//
// Created by michaelpollind on 19/10/17.
//

#ifndef NEURAL_NETWORK_ML_H
#define NEURAL_NETWORK_ML_H

#include <vector>

class ml {
    struct nodes {
        int num_nodes_;
        float* bias_;
        connection* next;
    };
    struct connection{
        nodes* previous;
        nodes* next;

    };

private:
    nodes* start_ = NULL;
    float sigmoid(float a, float bias);
public:
    ml();
    nodes* addLayer(int number_nodes);
    int getNumConnection(int index);
    float propegate(const float inputs, float outputs);
};


#endif //NEURAL_NETWORK_ML_H
