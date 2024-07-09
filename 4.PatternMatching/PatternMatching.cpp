//
// Created by shvet on 30/05/2024.
//

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

std::vector<int> PatternMatching(const std::string& Pattern,
                                 const std::string& Genome){
    std::vector<int> indices;
    for (size_t i = 0; i < Genome.length() - Pattern.length() + 1; i++){
        if(Genome.substr(i, Pattern.length()) == Pattern){
            indices.push_back(i);
        }
    }
    return indices;
}

void prt_vect(const std::vector<int>& vec){
    for(auto i : vec){
        std::cout << i << " ";
    }
    std::cout << "\n";
}


void read_genome(const std::string& path, std::string& genome) {
    std::ifstream file(path);
    if (file.is_open()) {
        std::cout << "Opened!" << "\n";
    }
    std::getline(file, genome);
};





