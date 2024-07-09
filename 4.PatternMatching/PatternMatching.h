//
// Created by shvet on 30/05/2024.
//

#ifndef INC_4_PATTERNMATCHING_PATTERNMATCHING_H
#define INC_4_PATTERNMATCHING_PATTERNMATCHING_H

#endif //INC_4_PATTERNMATCHING_PATTERNMATCHING_H

#include<vector>
#include<string>

std::vector<int> PatternMatching(const std::string& Pattern,
                                 const std::string& Genome);
void prt_vect(const std::vector<int>& vec);
void read_genome(const std::string& path, std::string& genome);
