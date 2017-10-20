//
// Created by michaelpollind on 19/10/17.
//

#ifndef NEURAL_NETWORK_ML_H
#define NEURAL_NETWORK_ML_H

#define  NODES_PER_LAYER 10
#define  LAYERS 4

#define INPUTS 4
#define OUTPUT 4
class ml {
    struct Layer {
        float weights[NODES_PER_LAYER];
        float inputs[NODES_PER_LAYER][NODES_PER_LAYER];
    };

    struct OutputLayer {
        float weights[OUTPUT];
        float inputs[NODES_PER_LAYER][OUTPUT];
    };

    private:
        Layer layers_[LAYERS];
        float input_[INPUTS][NODES_PER_LAYER];
        OutputLayer output_;
        float sigmoid(float a, float bias);
    public:

    float propegate(float inputs[INPUTS], float outputs[OUTPUT]);




};


#endif //NEURAL_NETWORK_ML_H
