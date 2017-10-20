//
// Created by michaelpollind on 10/19/17.
//

#ifndef NEURAL_NETWORK_NODE_LAYER_H
#define NEURAL_NETWORK_NODE_LAYER_H


class connection_layer;
class node_layer {
private:
    float* _bias;
    int _num_nodes;
public:
    connection_layer* _next;
    explicit node_layer(int num_nodes);
    node_layer(int num_nodes, const float data[]);
    inline int get_num_nodes();
    inline float get_bias(int index);

};


#endif //NEURAL_NETWORK_NODE_LAYER_H
