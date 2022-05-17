#ifndef MOVIE_H
#define MOVIE_H
#include <string>
#include "item.h"

using namespace std;

class Movie: public Item
{
public:
    Movie();
    Movie(string name, string genre);
    
    string genre;

    string getGenre();

    ~Movie();
};

#endif