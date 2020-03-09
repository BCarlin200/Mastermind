//Brandon Carlin
//This is my own work

#include <iostream>
#include <string>
#include <ctime>
#include <utility>
#include "Guess.h"
#include "Game.h"

using namespace std;

int main() {

	Guess test;
	cout << test[0] << endl;
	test.setGuess(1, 2, 0, 3);
	test.setMaster();
	cout << "guess = " << test[0] << " " << test[1] << " " << test[2] << " " << test[3] << endl;

	Game::playGame;
	return 0;
}