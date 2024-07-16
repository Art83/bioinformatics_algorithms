//
// Created by shvet on 16/07/2024.
//
#include<vector>
#include<string>
#include<iostream>

void PrtVect(const std::vector<int>& vec){
    for(auto i : vec){
        std::cout << i << " ";
    }
    std::cout << "\n";
}


int HammingDistance(const std::string &p, const std::string &q){
    if(p.length() != q.length()){
        std::cerr << "String must be of the same length\n";
        return 1;
    }
    int distance = 0;
    int cnt = 0;
    for(auto it1 = p.begin(), it2 = q.begin(); it1 != p.end(); it1++, it2++){
        if(*it1 != *it2){
            distance++;
        }
    }
    return distance;
}



std::vector<int> ApproximatePatternMatching(std::string Pattern, std::string Text, int d){
    std::vector<int> indices;
    int k;
    for(size_t i = 0; i < Text.length() - Pattern.length() + 1; i++){
        k = HammingDistance(Text.substr(i, Pattern.length()), Pattern);
        if (k <= d){
            indices.push_back(i);
        }
    }
    return indices;
}