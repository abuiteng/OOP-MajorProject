#include "library.h"
#include "user.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

Library::Library()
{
    User noUser;
    currentUser = noUser;
    
    cout << "opened library" << endl;
    BasicUser test;


    cout << "Welcome to the library online system." << endl;
    cout << "Please select from the following options:" << endl << endl;
    cout << "1. Login as an existing user." << endl;
    cout << "2. Login as an administrator." << endl;
    cout << "3. Create new user." << endl;
    cout << "4. Quit." << endl;

    int initialValue;
    int condition = 1;

    while(condition < 2)
    {
        cin >> initialValue;
        switch(initialValue)
        {
            case 1:
                //
                condition++;
                break;
            case 2:
                //
                condition++;
                break;
            case 3:
                //
                condition++;
                break;
            case 4:
                cout << "Thankyou for using the library online system." << endl;
                condition++;
                break;
            default:
                cout << "Please select a valid input." << endl;
        }
    }
    
}

void Library::login()
    {
        cout << "Please enter your username:" << endl;
        string value;
        cin >> value;

        for(int i = 0; i<10; i++)
        {
            /* Reimplement once users array exists
            if(users[i].username == value)
            {
                currentUser = users[i];
                cout << "You have logged in as " << currentUser.username << endl;
            }else
            {
                cout << "There is no user with that username." << endl;
            }
            */
        }
    }

void Library::createUser()
{
    
}

Library::~Library(){}