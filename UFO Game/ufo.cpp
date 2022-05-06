#include <iostream>
#include <string>
#include <vector>

#include "ufo_functions.hpp"

using namespace std;

int main() {
  string codeword = "codecademy";
  string answer = "__________";
  int misses = 0;
  vector<char> incorrect; 
  bool guess = false;
  char letter; 


  //Greet the player at the start of a new game
  greet();

  //Loop that iterates till one condition is true, player wins or abduction is complete
  while(answer != codeword && misses < 7){

    display_misses(misses);

    display_status(incorrect, answer);

    cout << "\n\nPlease enter your guess: "; 
    cin >> letter; 

    for(int i = 0; i < codeword.length(); i++){

      if(letter == codeword[i]){

        answer[i] = letter;
        guess = true; 

      }

    }

    if(guess == true){
      cout << "\nCorrect! You're closer to cracking the codeword.\n"; 
    }else{
      cout << "Incorrect! The tractor beam pulls the person in further.";
      incorrect.push_back(letter);
      misses++;
    }
    guess = false;
  }

  end_game(codeword, answer);
}
