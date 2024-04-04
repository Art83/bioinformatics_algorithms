//
// Created by shvet on 31/03/2024.
//
#include <iostream>
#include <string>
#include <fstream>
#include <cassert>

int PatternCount(const std::string &text, const std::string &pattern){
    int cnt = 0;
    for(size_t i = 0; i <= text.length() - pattern.length(); i++){
        if(text.substr(i, pattern.length()) == pattern){
            cnt++;
        }
    }
    return cnt;
}

void read_csv(std::string &kmer, std::string &text, std::string file_name){
    std::ifstream file(file_name);
    std::getline(file, kmer);
    std::getline(file, text);

}

void read_csv_int(std::string &number_out, std::string file_name){
    std::ifstream file(file_name);
    std::getline(file, number_out);
}


int main(){
    //const std::string txt = "ATCTATCAT";
    //const std::string kmer = "AT";
    //std::cout << PatternCount(txt, kmer) << "\n";
    for(size_t i = 1; i <= 8; i++){
        std::string path_in = ".\\test\\inputs\\input_" + std::to_string(i) + ".txt";
        std::string path_out = ".\\test\\outputs\\output_" + std::to_string(i) + ".txt";
        std::string kmer, text;
        std::string number_test;
        int number;
        read_csv(kmer, text, path_in);
        number = PatternCount(kmer, text);
        read_csv_int(number_test, path_out);
        std::cout << number << " " << number_test << "\n";
        assert((std::stoi(number_test) == number));
    }
    return 0;
}


