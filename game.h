#ifndef GAME_H
#define GAME_H
#include <string>
#include "item.h"

using namespace std;

class Game: public Item
{
public:
    Game();
    Game(string name);
    
    ~Game();
};

#endif