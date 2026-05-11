I wrote this to pass the time while waiting for my train home 


## Main wordle game loop 
The main loop of the game should go as follows 

1. The game begins and a wordlist is read in. If a wordlist is not specified, then a default wordlist is used.

2. A random word is selected as the answer

3. The player guesses the word.

    1. The word is checked to make sure that it is five letters in length. This is a relatively fast check and is done to quickly avoid the much longer check that follows

    2. The word is checked to make sure it is in the wordlist. The wordlist is implemented as a hash table for O(1) lookup

4. If the word is in the list, we perform the normal wordle functions

    1. Check if the word matches the answer. If it does, skip substeps 2 and 3

    2. If the word does not match the answer, check if there are any letters in the correct position. Mark those out in green. 

    3. Check if there are any letters that are in the answer but not in the correct position. Mark those out in yellow. If a letter appears in the correct position in the players guess, but also appears elsewhere in the word, it gets marked green and not yellow. For example, if the player guesses "cloud" when the word was "booth", the "o" gets marked green. 

    4. Decrement the number of guesses the player has. If the number of guesses the player has reaches 0, break the loop. If the answer has been found, also break the loop. 

5. If the answer has been found, print a message that congratulates the player. If the answer has not been found, print a message that encourages the player. 

6. Give the user the option to play again. If the player chooses to play again, go back to step 2. Otherwise, end the program. 