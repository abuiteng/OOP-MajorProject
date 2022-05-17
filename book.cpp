#include "book.h"
#include <iostream>
#include <string>

using namespace std;

Book::Book()
{
    borrowedStatus = 0;
    onHold = 0;
    name = " ";
    returnDate = " ";
    author = " ";
    genre = " ";
    pages = 0;
}

Book::Book(string name, string author, string genre, int pages)
{
    borrowedStatus = 0;
    onHold = 0;
    name = name;
    returnDate = " ";
    author = author;
    genre = genre;
    pages = pages;
}

string Book::getGenre()
{
    return genre;
}

string Book::getAuthor()
{
    return author;
}

int Book::getPages()
{
    return pages;
}

Book::~Book(){}