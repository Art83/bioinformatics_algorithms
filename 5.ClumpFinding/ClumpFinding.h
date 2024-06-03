//
// Created by shvet on 3/06/2024.
//

#ifndef INC_5_CLUMPFINDING_CLUMPFINDING_H
#define INC_5_CLUMPFINDING_CLUMPFINDING_H

#endif //INC_5_CLUMPFINDING_CLUMPFINDING_H
#include <unordered_map>
#include <string>
#include <vector>

std::unordered_map<std::string, int> FreqMap(const std::string& text, int k);
std::vector<std::string> Clump_search(const std::string& genome, int k, int L, int t);
void prt_vect(const std::vector<std::string>& vec);
void read_genome(const std::string& path, std::string& genome);