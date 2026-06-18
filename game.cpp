#include <iostream> 
#include <fstream> 
#include <random> 
#include <string> 

using std::string;
using std::cout; 
using std::cin;
using std::istream;
using std::ostream;



class WordleGame {
private:

public:
    WordleGame() {} // default constructor

    bool createList(string inputFile, string listFile);

    // each round of wordle
    int playRound(); 
    
    // runs the entire game, several rounds
    int playGame() {

    }
};

int main(int argc, char argv[]) {
    return 0;
}