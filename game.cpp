#include <iostream> 
#include <fstream> 
#include <random> 
#include <string> 

using std::string;
using std::cout; 
using std::cin;
using std::istream;
using std::ostream;

// I wrote this by hand to ground myself and have fun


class WordleGame {
private:
    // private variables for each round
    string answer;
    int guessCount;

    // stats
    int totalGuesses;
    int totalRounds;
    int totalRoundsWon;

public:
    WordleGame() {} // default constructor


    bool createList(string inputFile, string listFile);

    // each round of wordle
    int playRound() {

    }
    
    // runs the entire game, several rounds
    int playGame() {

    }

    // prints out the statistics of a session at the end of each session
    int statistics() {
        float avgGuesses = static_cast<float>(totalGuesses) / static_cast<float>(totalRounds);

        cout << "Games played:    " << totalRounds << "\n";
        cout << "Games won:       " << totalRoundsWon << "/" << totalRounds << "\n";
        cout << "Average Guesses: " << avgGuesses << "\n"; 

    }
};

int main(int argc, char argv[]) {
    return 0;
}