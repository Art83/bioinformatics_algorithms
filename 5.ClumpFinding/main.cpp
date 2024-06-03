
#include <string>
#include <vector>
#include "ClumpFinding.h"

int main() {
    std::string genome;
    std::vector<std::string> result;
    std::string path = "D:\\bioinformatics_algorithms\\5.ClumpFinding\\E_coli.txt";
    int k = 9;
    int t = 3;
    int L = 500;
    read_genome(path, genome);
    result = Clump_search(genome, k, L, t);
    prt_vect(result);
    return 0;
}
