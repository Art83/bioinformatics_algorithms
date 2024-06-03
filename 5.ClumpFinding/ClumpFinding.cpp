//
// Created by shvet on 3/06/2024.
//

#include <unordered_map>
#include <string>
#include <iostream>
#include <vector>
#include <set>
#include <fstream>

std::unordered_map<std::string, int> FreqMap(const std::string& text, int k) {
    std::unordered_map<std::string, int> freq_map;
    std::string pattern;
    for(auto i = 0; i < text.length() - k + 1; i++){
        pattern = text.substr(i, k);
        if(freq_map.find(pattern) == freq_map.end()) {
            freq_map[pattern] = 1;
        } else {
            freq_map[pattern]++;
        }
    }
    return freq_map;
}


std::vector<std::string> Clump_search(const std::string& genome, int k, int L, int t) {
    std::vector<std::string> kmers;
    std::unordered_map<std::string, int> map;
    for(auto i = 0; i < genome.length() - L + 1; i++){
        map = FreqMap(genome.substr(i, L), k);
        for(const auto & item : map){
            if(item.second >= t){
                kmers.push_back(item.first);
            }
        }
    }
    std::set<std::string> s(kmers.begin(), kmers.end() );
    kmers.assign( s.begin(), s.end() );
    return kmers;
}


void read_genome(const std::string& path, std::string& genome) {
    std::ifstream file(path);
    if (file.is_open()) {
        std::cout << "Opened!" << "\n";
    }
    std::getline(file, genome);
};

void prt_vect(const std::vector<std::string>& vec){
    for(auto i : vec){
        std::cout << i << " ";
    }
    std::cout << "\n";
}