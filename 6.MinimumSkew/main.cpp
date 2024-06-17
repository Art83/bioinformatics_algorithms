//
// Created by shvet on 17/06/2024.
//
#include <string>
#include <iostream>
#include "Minimumskew.h"


int main(){
    std::string sequence;
    std::vector<int> result;
    std::string path = "D:\\bioinformatics_algorithms\\6.MinimumSkew\\inputs\\input_6.txt";
    read_genome(path, sequence);
    result = MinimumSkew(sequence);
    prt_vect(result);
    return 0;
}