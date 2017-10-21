//
// Created by michaelpollind on 10/19/17.
//

#ifndef NEURAL_NETWORK_CONNECTION_LAYER_H
#define NEURAL_NETWORK_CONNECTION_LAYER_H

class node_layer;
class connection_layer {
    friend node_layer;
private:
    node_layer* _previous;
    node_layer* _next;

    float *_weights;
public:
    connection_layer(node_layer* n1,node_layer* n2);
    inline float get_weight(int n1_index, int n2_index);
};


#endif //NEURAL_NETWORK_CONNECTION_LAYER_H
