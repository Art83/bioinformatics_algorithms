//
// Created by shvet on 10/07/2024.
//

#include <string>
#include <cassert>
#include "HammingDistance.h"

int main(){
    std::string one = "AGAAACAGACCGCTATGTTCAACGATTTGTTTTATCTCGTCACCGGGATATTGCGGCCACTCATCGGTCAGTTGATTACGCAGGGCGTAAATCGCCAGAATCAGGCTG";
    std::string two = "AGAAACCCACCGCTAAAAACAACGATTTGCGTAGTCAGGTCACCGGGATATTGCGGCCACTAAGGCCTTGGATGATTACGCAGAACGTATTGACCCAGAATCAGGCTC";
    auto ham_distance = HammingDistance(one, two);
    assert(ham_distance == 28);
}