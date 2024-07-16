//
// Created by shvet on 16/07/2024.
//

#ifndef CPP_APPROXIMATEPATTERNMATCHING_H
#define CPP_APPROXIMATEPATTERNMATCHING_H

#endif //CPP_APPROXIMATEPATTERNMATCHING_H

#include<vector>
#include<string>
#include<iostream>

void PrtVect(const std::vector<int>& vec);
int HammingDistance(const std::string &p, const std::string &q);
std::vector<int> ApproximatePatternMatching(std::string Pattern, std::string Text, int d);

