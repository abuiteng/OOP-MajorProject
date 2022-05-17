#ifndef BOOK_H
#define BOOK_H
#include <string>
#include "item.h"

using namespace std;

class Book: public Item
{
public:
    Book();
    Book(string name, string author, string genre, int pages);
    
    string genre;
    string author;
    int pages;

    string getGenre();
    string getAuthor();
    int getPages();

    ~Book();
};

#endif