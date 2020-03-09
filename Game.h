#ifndef GAME_H
#define GAME_H

#include "Guess.h"
#include <iostream>

using namespace std;

//Brandon Carlin
//This is my own work

class Game {
private:
    Guess currGuess;
    Guess secretCode;
    int blackPeg, whitePeg, numGuesses;
    void generateFeeback();
    void  getUserGuess();
    bool isWinner();
    bool outOfGuesses();
public:
    Game();
    void playGame();
};
//Implementations

inline bool Game::isWinner() 
{
    return blackPeg == 4;
}

inline bool Game::outOfGuesses()
{
    return blackPeg != 4;
}

inline void Game::generateFeeback()
{
    //reset the pegs
    blackPeg = whitePeg = 0;
    //calculate white and black pegs
    for (int i = 0; i < 4; i++) {
        if (currGuess[i] == secretCode[i])
            blackPeg++;
    }
    //make 2 arrays to track colors in guess and secretCode
    int codeColors[6], guessCode[6];
    for (int i = 0; i < 6; i++)
        codeColors[i] = guessCode[i] = 0;

    for (int j = 0; j < 4; j++) {
        guessCode[currGuess[j]]++;
        codeColors[secretCode[j]]++;
    }
    for (int j = 0; j < 4; j++) {
        if (currGuess[j] == guessCode[j])
            whitePeg++;
}

inline void Game::getUserGuess()
{
    
}

Game::Game() {
    this->blackPeg = 0;
    this->numGuesses = 0;
    this->wp = 0;
}

inline void Game::playGame()
{
    return playGame();
}
#endif