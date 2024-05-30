//
// Created by shvet on 30/05/2024.
//

#include <string>
#include <algorithm>
#include <unordered_map>
#include "ReverseCompliment.h"


std::string reverse_compliment(const std::string& pattern) {
    std::unordered_map<char, char> compliment_dict = {
            {'A', 'T'},
            {'T', 'A'},
            {'C', 'G'},
            {'G', 'C'}
    };

    std::string reverse;
    reverse.reserve(pattern.size());
    for(auto it = pattern.rbegin(); it != pattern.rend(); ++it){
        reverse+=compliment_dict[*it];
    }
    return reverse;
}


