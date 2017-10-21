//
// Created by michaelpollind on 19/10/17.
//

#ifndef NEURAL_NETWORK_ML_H
#define NEURAL_NETWORK_ML_H

#include <vector>
class node_layer;
class Ml {
private:
    node_layer* _first;
    float sigmoid(float a, float bias);
public:
    explicit Ml(node_layer* first);
    void propegate();
};


#endif //NEURAL_NETWORK_ML_H
