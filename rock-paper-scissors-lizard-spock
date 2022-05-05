/*
Name: Josh Urbach
Description: Rock, Paper, Scissors, Lizard Spock Game
            Play a game of enhanced R/P/S
Data modified: 5/4/22
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

  //set up random generator and user entry 
  srand(time(NULL));
  int computer = rand() % 5 + 1;
  int user = 0; 
  char con; 

  //Loop to continue playing the game 
  do{
    //Loop to validate user entry 
    do{
      cout << "=================================" << endl;
      cout << "rock paper scissors lizard spock!" << endl;
      cout << "=================================" << endl;

      cout << "1 = Rock" << endl;
      cout << "2 = Paper" << endl;
      cout << "3 = Scissors" << endl;
      cout << "4 = Lizard" << endl;
      cout << "5 = Spock" << endl; 

      cout << "shoot!" << endl; 
      cin >> user; 
    }while(user < 0 || user > 6);
    
    if(user == 1 && computer == 2){
      cout << "Paper covers rock: Computer wins!" << endl;
    } 
    else if(user == 1 && computer == 3){
      cout << "Rock crushes scissors: User wins!" << endl;
    }
    else if(user == 1 && computer == 4){
      cout << "Rock crushes lizard: User wins!" << endl; 
    }
    else if(user == 1 && computer == 5){
      cout << "Spock vaporizes rock: Computer wins!" << endl; 
    }
    else if(user == 2 && computer == 1){
      cout << "Paper covers rock: User wins!" << endl; 
    }
    else if(user == 2 && computer == 3){
      cout << "Scissors cut paper: Computer wins!" << endl;
    }
    else if(user == 2 && computer == 4){
      cout << "Lizard eats paper: Computer wins!" << endl; 
    }
    else if(user == 2 && computer == 5){
      cout << "Paper disproves spock: User wins!" << endl; 
    }
    else if(user == 3 && computer == 1){
      cout << "Rock crushes scissors: Computer wins!" << endl; 
    }
    else if(user == 3 && computer == 2){
      cout << "Scissors cut paper: User wins!" << endl; 
    }
    else if(user == 3 && computer == 4){
      cout << "Scissors decapitate lizard: User wins!" << endl;
    }
    else if(user == 3 && computer == 5){
      cout << "Spock smashes scissors: Computer wins!" << endl; 
    }
    else if(user == 4 && computer == 1){
      cout << "Rock crushes lizard: Computer wins!" << endl; 
    }
    else if(user == 4 && computer == 2){
      cout << "Lizard eats paper: User wins!" << endl;
    }
    else if(user == 4 && computer == 3){
      cout << "Scissors decapitate lizard: Computer wins!" << endl;
    }
    else if(user == 4 && computer == 5){
      cout << "Lizard poisons spock: User wins!" << endl; 
    }
    else if(user == 5 && computer == 1){
      cout << "Spock vaporizes rock: User wins!" << endl; 
    }
    else if(user == 5 && computer == 2){
      cout << "Paper disproves spock: Computer wins!" << endl; 
    }
    else if(user == 5 && computer == 3){
      cout << "Spock smashes scissors: Computer wins!" << endl; 
    }
    else if(user == 5 && computer == 4){
      cout << "Lizard poisons spock: User wins!" << endl; 
    }
    else{
      cout << "It's a tie!" << endl;
    }


    cout << "Would you like to play again (y/n)? "; 
    cin >> con;
  }while(con == 'y' || con == 'Y');
  
cout << "Thanks for playing!" << endl; 

}
