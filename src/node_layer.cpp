//
// Created by michaelpollind on 10/19/17.
//

#include <assert.h>
#include "node_layer.h"

node_layer::node_layer(int num_nodes) {
    _num_nodes = num_nodes;
    _bias = new float[num_nodes];
}

node_layer::node_layer(int num_nodes, const float *data) {
    node_layer::node_layer(num_nodes);
    for(int x = 0; x < num_nodes; ++x){
         _bias[x] = data[x];
    }
}

inline int node_layer::get_num_nodes() {
    return _num_nodes;
}


inline float node_layer::get_bias(int index){
    assert(index >= 0 && index < _num_nodes);
    return _bias[index];
}

