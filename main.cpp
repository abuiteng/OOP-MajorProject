#include "library.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    cout << "Enter 'start' or 'end'." << endl;
    cin >> input;
    if(input == "start")
    {
        Library basic;
        cout << "Running Basic." << endl;
    }
    cout << "Closing" << endl;

    return 0;
}