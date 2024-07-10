cmake_minimum_required(VERSION 3.27)
project(7_HammingDistance)

set(CMAKE_CXX_STANDARD 17)

add_executable(7_HammingDistance cpp/main.cpp
        cpp/HammingDistance.cpp
        cpp/HammingDistance.h)