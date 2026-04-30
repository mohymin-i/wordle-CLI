#include <iostream>
#include <string> 
#include <random>
#include <fstream> 

using std::cout;
using std::cin;
using std::string;


class Wordle {
private:
    std::string answer; 
public:

}; // Wordle


int main() {
    // bool playing = true; 

    // while (playing) {

    // }

    return; 
}



// helper functions

// loops through the inputFile, checks for all words of length wordSize, adds them to the new wordlist
// returns an integer fileLength that tells us the file 
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
        for (char c : word) {
            if (c == '!') {
                return false;
            }
        }
    }

    return true; 
}