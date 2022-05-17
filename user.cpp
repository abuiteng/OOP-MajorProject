#include "user.h"
#include <iostream>
#include <string>

using namespace std;

User::User()
{
    books = 0;
    movies = 0;
    games = 0;

    booksBorrowed[0] = Book();
    booksBorrowed[1] = Book();
    booksBorrowed[2] = Book();

    moviesBorrowed[0] = Movie();
    moviesBorrowed[1] = Movie();

    gamesBorrowed[0] = Game();

    username = " ";
    hold = Item();
}

void User::borrowBook(Book bookName)
{
    if(books < 3)
    {
        booksBorrowed[books] = bookName;
        books++;
        cout << "You have borrowed " << bookName.name << ". You can borrow " << books-3 << " more books." << endl;
    }else
    {
        cout << "Book borrowing limit reached." << endl;
    }
}

void User::borrowMovie(Movie movieName)
{
    if(movies < 2)
    {
        moviesBorrowed[movies] = movieName;
        books++;
        cout << "You have borrowed " << movieName.name << ". You can borrow " << movies-2 << " more movies." << endl;

    }else
    {
        cout << "Movie borrowing limit reached." << endl;
    }
}

void User::borrowGame(Game gameName)
{
    if(games < 1)
    {
        gamesBorrowed[games] = gameName;
        books++;
        cout << "You have borrowed " << gameName.name << ". You can borrow " << games-1 << " more games." << endl;

    }else
    {
        cout << "Game borrowing limit reached." << endl;
    }
}

void User::returnBook(Book bookName)
{
    if(books>0)
    {
        cout << "Which book would you like to return?" << endl << endl;
        for(int i = 1; i<=books; i++)
        {
            cout << i << ".   " << booksBorrowed[i-1].name << "     by " << booksBorrowed[i-1].author << "     Genre: " << booksBorrowed[i-1].genre << "     " << booksBorrowed[i-1].pages << " pages" << endl << endl;
        }
        cout << "Please press the number corresponding to the book you would like to return." << endl;
        int value;
        cin >> value;
        if(1 <= value <= 3)
        {
            cout << "You have returned " << booksBorrowed[value-1].name << " by " << booksBorrowed[value-1].author << endl;
            booksBorrowed[value] = Book();

            if(value = 1)
            {
                booksBorrowed[0] = booksBorrowed[1];
                booksBorrowed[1] = booksBorrowed[2];
                booksBorrowed[2] = Book();
            }else if(value = 2)
            {
                booksBorrowed[1] = booksBorrowed[2];
                booksBorrowed[2] = Book();
            }
            books--;
        }else
        {
            cout << "That is not a valid input." << endl;
        }
        
    }else
    {
        cout << "You have not borowed any books." << endl;
    }
}

void User::returnMovie(Movie movieName)
{
    if(movies>0)
    {
        cout << "Which movie would you like to return?" << endl << endl;
        for(int i = 1; i<=movies; i++)
        {
            cout << i << ".   " << moviesBorrowed[i-1].name << "     Genre: " << moviesBorrowed[i-1].genre << endl << endl;
        }
        cout << "Please press the number corresponding to the movie you would like to return." << endl;
        int value;
        cin >> value;
        if(1 <= value <= 2)
        {
            cout << "You have returned " << moviesBorrowed[value-1].name << endl;

            moviesBorrowed[value] = Movie();

            if(value = 1)
            {
                moviesBorrowed[0] = moviesBorrowed[1];
                moviesBorrowed[1] = Movie();
            }
            movies--;
        }else
        {
            cout << "That is not a valid input." << endl;
        }
        
    }else
    {
        cout << "You have not borrowed any movies." << endl;
    }
}

void User::returnGame(Game gameName)
{
    if(games>0)
    {
        cout << "Which game would you like to return?" << endl << endl;
        cout << "1.   " << gamesBorrowed[0].name << endl << endl;
        cout << "Please press the number corresponding to the game you would like to return." << endl;
        int value;
        cin >> value;
        if(value == 1)
        {
            cout << "You have returned " << gamesBorrowed[0].name << endl;
            gamesBorrowed[0] = Game();
            games--;
        }else
        {
            cout << "That is not a valid input" << endl;
        }
       
    }else
    {
        cout << "You have not borrowed any games." << endl;
    }
}

void User::putHold(Item holder)
{
    if(holder.onHold == 0)
    {
        hold = holder;
        holder.onHold = 1;
    }else
    {
        cout << "Item is already on hold." << endl << "Item can only be on hold by one user." << endl;
    }
}

void User::checkLoans()
{
    if(books>0)
    {
        cout << "Books:" << endl;
        for(int i = 0; i<books; i++)
        {
            cout << booksBorrowed[i].name << "     by " << booksBorrowed[i].author << "     Genre: " << booksBorrowed[i].genre << "     " << booksBorrowed->pages << " pages" << endl;
        }
    }
    if(movies>0)
    {
        cout << "Movies:" << endl;
        for(int i = 0; i<movies; i++)
        {
            cout << moviesBorrowed[i].name << "     Genre: " << moviesBorrowed[i].genre << endl;
        }
    }
    if(games>0)
    {
        cout << "Games:" << endl;
        for(int i = 0; i<games; i++)
        {
            cout << gamesBorrowed[i].name << endl;
        }
    }
    if(books == movies == games == 0)
    {
        cout << "You have no loans." << endl;
    }
}

void User::getHold()
{
    if(hold.name != " ")
    {
        cout << "You have " << hold.name << " on hold." << endl;
    }else if(hold.name == " ")
    {
        cout << "You don't have anything on hold." << endl;
    }
}

void User::returnHold()
{
    if(hold.name != " ")
    {
        cout << hold.name << " has been taken off hold." << endl;
        hold.onHold = 0;
        hold = Item();
    }else if(hold.name == " ")
    {
        cout << "You don't have anything on hold." << endl;
    }
}

User::~User(){}