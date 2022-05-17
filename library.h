#ifndef COMPUTER_H
#define COMPUTER_H
#include "basicuser.h"
#include "adminuser.h"
#include "book.h"
#include "movie.h"
#include "game.h"
#include <string>

class Library
{
public:
    Library();
    /*
    User users[10];
    Book books[10];
    Movie movies[10];
    Game games[10];
    */
    User currentUser;

    void login();
    void createUser();

    ~Library();
};

#endif