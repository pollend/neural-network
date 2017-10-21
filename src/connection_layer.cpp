//
// Created by michaelpollind on 10/19/17.
//

#include <assert.h>
#include "connection_layer.h"

connection_layer::connection_layer(node_layer *n1, node_layer *n2) {
    n1->_next = this;
    _previous = n1;
    _next = n2;
    _weights = new float[_previous->get_num_nodes() * _next->get_num_nodes()];
}

inline float connection_layer::get_weight(int n1_index, int n2_index) {
    assert(n1_index >= 0 && n1_index < _previous->get_num_nodes());
    assert(n2_index >= 0 && n2_index < _next->get_num_nodes());
    return _weights[n1_index * _previous->get_num_nodes() + n2_index];
}
