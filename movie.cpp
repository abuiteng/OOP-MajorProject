#include "movie.h"
#include <iostream>
#include <string>

using namespace std;

Movie::Movie()
{
    borrowedStatus = 0;
    onHold = 0;
    name = " ";
    returnDate = " ";
    genre = " ";
}

Movie::Movie(string name, string genre)
{
    borrowedStatus = 0;
    onHold = 0;
    name = name;
    returnDate = " ";
    genre = genre;
}

string Movie::getGenre()
{
    return genre;
}

Movie::~Movie(){}