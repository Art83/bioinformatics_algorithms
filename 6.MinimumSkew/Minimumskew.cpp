//
// Created by shvet on 17/06/2024.
//
#include <string>
#include <iostream>
#include <fstream>
#include <vector>

void read_genome(const std::string& path, std::string& sequence){
    std::ifstream file(path);
    if (file.is_open()){
        std::cout << "File is opened!\n";
    }
    std::getline(file, sequence);
}

std::vector<int> MinimumSkew(const std::string& sequence){
    std::vector<int> skew = {0};
    std::vector<int> mn_indices;
    int mn = 0;
    for(size_t i = 1; i <= sequence.size(); i++){
        if (sequence[i - 1] == 'C'){
            skew.push_back(skew[i-1]-1);
        } else if (sequence[i - 1] == 'G'){
            skew.push_back(skew[i-1]+1);
        } else {
            skew.push_back(skew[i-1]);
        }
        if (skew.back() < mn){
            mn = skew.back();
            mn_indices = {static_cast<int>(i)};
        } else if (skew.back() == mn) {
            mn_indices.push_back({static_cast<int>(i)});
        }
    }
    return mn_indices;
}

void prt_vect(const std::vector<int>& vec){
    for(const auto& i : vec){
        std::cout << i << " ";
    }
    std::cout << "\n";
}