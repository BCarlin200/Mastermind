#ifndef	GUESS_H
#define GUESS_H

#include <utility>
#include <ctime>

//Brandon Carlin
//This is my own work

class Guess {
private:
	int aGuess[4];
	bool isValid(int) const;
public:
	Guess();
	void setGuess(int, int, int, int);
	void setMaster();
	int operator[](int) const;
};
//Implementations
Guess::Guess() {
	aGuess[0] = aGuess[1] = aGuess[2] = aGuess[3] = 4;
	srand(time(NULL));
}

int Guess::operator[](int indx) const {
	return aGuess[indx];
}
void Guess::setGuess(int a, int b, int c, int d) {		//needed isValid to tell the paramters of the guess
	if (isValid(a)) aGuess[0] = a;
	if (isValid(b)) aGuess[1] = b;
	if (isValid(c)) aGuess[2] = c;
	if (isValid(d)) aGuess[3] = d;
}
bool Guess::isValid(int a) const {
	return (a >= 0 && a <= 5);							//a is greater than or equal to zero and less than or equal to one.
}
void Guess::setMaster() {
	aGuess[0] = rand()%6;
	aGuess[1] = rand()%6;
	aGuess[2] = rand()%6;
	aGuess[3] = rand()%6;
}
#endif
