//
// Created by shvet on 10/07/2024.
//
#include<string>
#include<iostream>

int HammingDistance(const std::string &p, const std::string &q){
    if(p.length() != q.length()){
        std::cerr << "String must be of the same length\n";
        return 1;
    }
    int distance = 0;
    for(auto it1 = p.begin(), it2 = q.begin(); it1 != p.end(); it1++, it2++){
        if(*it1 != *it2){
            distance++;
        }
    }
    return distance;
}
