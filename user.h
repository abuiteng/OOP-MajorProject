#ifndef USER_H
#define USER_H
#include "book.h"
#include "movie.h"
#include "game.h"
#include <string>

using namespace std;

class User
{
public:
    User();

    int books;
    int movies;
    int games;
    Book booksBorrowed[3];
    Movie moviesBorrowed[2];
    Game gamesBorrowed[1];
    string username;
    Item hold;

    void borrowBook(Book bookName);
    void borrowMovie(Movie movieName);
    void borrowGame(Game gameName);
    void returnBook(Book bookName);
    void returnMovie(Movie movieName);
    void returnGame(Game gameName);
    void putHold(Item holder);
    void checkLoans();
    void getHold();
    void returnHold();

    ~User();
};

#endif