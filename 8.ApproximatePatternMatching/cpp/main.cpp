
#include<vector>
#include<string>
#include "ApproximatePatternMatching.h"


int main() {
    std::string genome = "CGCCCGAATCCAGAACGCATTCCCATATTTCGGGACCACTGGCCTCCACGGTACGGACGTCAATCAAAT";
    std::string kmer = "ATTCTGGA";
    int d = 3;
    std::vector<int> indices = ApproximatePatternMatching(kmer, genome, d);
    PrtVect(indices);
    return 0;
}
