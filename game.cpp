#include "game.h"
#include <iostream>
#include <string>

using namespace std;

Game::Game()
{
    borrowedStatus = 0;
    onHold = 0;
    name = " ";
    returnDate = " ";
}

Game::Game(string name)
{
    borrowedStatus = 0;
    onHold = 0;
    name = name;
    returnDate = " ";
}

Game::~Game(){}