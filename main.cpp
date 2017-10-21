
#include "src/connection_layer.h"
#include "src/Ml.h"
#include "src/node_layer.h"

int main() {
    //feed forward
    node_layer* n1 = new node_layer(128 * 128);
    node_layer* n2 = new node_layer(20);
    node_layer* n3 = new node_layer(20);
    node_layer* n4 = new node_layer(20);
    node_layer* n5 = new node_layer(20);
    node_layer* n6 = new node_layer(10);

    new connection_layer(n1,n2);
    new connection_layer(n2,n3);
    new connection_layer(n3,n4);
    new connection_layer(n4,n5);
    new connection_layer(n5,n6);

    Ml ml(n1);


    return 0;
}