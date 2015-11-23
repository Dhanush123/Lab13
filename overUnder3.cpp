// Lab 13
// Programmer: Dhanush Patel
// Editor(s) used: Eclipse
// Compiler(s) used: Eclipse

#include <iostream>
using namespace std;

#include <ctime>
#include <cstdlib>

int main()
{
	srand(time(0));

	cout << "Programmer: Dhanush Patel" << endl;
	cout << "Description: This programs makes a user guess the right number between 1-100." << endl;
	cout << endl;

	int numberToGuess = 1 + (rand() % 100);

	const int MAX_GUESSES = 100;
	int nGuesses = 0;
	int guess[MAX_GUESSES];

	int numberGuessed;
	cout << "Guess a number between 1 and 100: ";
	do{
	cin >> numberGuessed;

	bool match = false;
	for(int i = 0; i < nGuesses; i++){
		if(guess[i]==numberGuessed){
			cout << "You already guessed " << guess[i] << " -- guess again: ";
			match = true;
		}
	}
	if(!match){
		if (numberGuessed == numberToGuess){
			cout << "That's right -- it's " << numberToGuess << endl;
			break;
		}
		if (numberGuessed < numberToGuess){
			if(nGuesses < MAX_GUESSES){
				guess[nGuesses++]=numberGuessed;
			}
			cout << "That's too low -- guess again: ";
		}
		else{
			if(nGuesses < MAX_GUESSES){
				guess[nGuesses++]=numberGuessed;
			}
			cout << "That's too high -- guess again: ";
		}
	}
	}while(numberGuessed != numberToGuess);
}
