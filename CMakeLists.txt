cmake_minimum_required(VERSION 3.8)
project(neural_network)

set(CMAKE_CXX_STANDARD 11)

file(GLOB ROOT_SOURCE src/*.cpp)
file(GLOB ROOT_INCLUDE src/*.h)

set(SOURCE_FILES main.cpp src/node_layer.cpp src/node_layer.h src/connection_layer.cpp src/connection_layer.h)
add_executable(neural_network ${SOURCE_FILES} ${ROOT_SOURCE} ${ROOT_INCLUDE})