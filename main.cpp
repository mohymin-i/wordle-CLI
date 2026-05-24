#include <iostream>
#include <string> 
#include <random>
#include <fstream> 

using std::cout;
using std::cin;
using std::string;

int stripToTxt(string inputFile, string outputFile, int wordSize);



class Wordle {
private:
    std::string answer;
    bool correct = false; 

public:
    // entire game contained in the constructor 
    Wordle() {

    }

    int correct = 00000;



};


int main() {
    stripToTxt("anagram_dictionary.txt", "words.txt", 5);
    bool playing = true; 

    while (playing) {

    }

    return; 
}



// helper functions for main

// loops through an input file that is a long list of words
// writes words that are the desired length into the output file

int stripToTxt(string inputFile, string outputFile, int wordSize) {
    std::ifstream input(inputFile);
    std::ofstream output(outputFile);
    int fileLength = 0; 
    string curr; 

    while (getline(input, curr)) {
        if (verifyWord(curr, wordSize)) {
            output << curr << "\n";
            fileLength++; 
        }
    }

    input.close();
    output.close();
    return fileLength;
}

// takes in a word and a length
// verifies that the word is the proper length
// also makes sure that we don't add any swears by accident
// swears are flagged with '!' at the back
bool verifyWord(string word, int length) {
    if (word.size() != length) {
        return false;
    } else {
        // in the current word list, swear words are marked with "!"
        // exclude words that include "!"
        for (char c : word) {
            if (c == '!') {
                return false;
            }
        }
    }

    return true; 
}