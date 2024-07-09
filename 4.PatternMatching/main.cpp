#include <iostream>
#include <vector>
#include <algorithm>
#include "PatternMatching.h"


int main(){
    std::string pat = "CTTGATCAT";
    std::string path = "D:\\bioinformatics_algorithms\\4.PatternMatching\\Vibrio_cholerae.txt";
    std::string genome;
    read_genome(path, genome);
    std::vector<int> result = PatternMatching(pat, genome);
    std::sort(result.begin(), result.end());
    prt_vect(result);
    return 0;
}
