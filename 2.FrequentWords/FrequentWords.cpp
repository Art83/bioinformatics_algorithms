//
// Created by shvet on 15/04/2024.
//
#include<map>
#include<algorithm>
#include<string>
#include<iostream>
#include<vector>



int max_value(const std::map<std::string, int>& dict){
    int mx = 0;
    for(const auto& [key, value] : dict ){
        if (value > mx) mx = value;
    }
    return mx;
}


std::vector<std::string> FrequentWords(const std::string& text, int k){
    std::map<std::string,int>freq_map;
    std::vector<std::string>freq_kmers;
    for(size_t i = 0; i < text.length() - k + 1; i++){
        std::string pattern = text.substr(i, k);
        freq_map[pattern]++;
    }
    int max_val = max_value(freq_map);
    for(const auto& [key, value] : freq_map){
        if(value == max_val){
            freq_kmers.push_back(key);
        }
    }
    return freq_kmers;
}


int main(){
    std::string txt = "ACGTTGCATGTCGCATGATGCATGAGAGCT";
    int k = 4;
    std::vector<std::string> kmers = FrequentWords(txt, k);
    for(auto& km : kmers){
        std::cout << km << " ";
    }
}

