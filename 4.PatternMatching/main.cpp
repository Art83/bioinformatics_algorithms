#include <iostream>
#include <vector>
#include "PatternMatching.h"


int main(){
    std::string pat = "ATAT";
    std::string text = "GATATATGCATATACTT";
    std::vector<int> result = PatternMatching(pat, text);
    prt_vect(result);
    return 0;
}
