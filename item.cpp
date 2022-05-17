#include "item.h"
#include <iostream>
#include <string>

using namespace std;

Item::Item()
{
    borrowedStatus = 0;
    onHold = 0;
    name = " ";
    returnDate = " ";
}

string Item::getName()
{
    return name;
}

string Item::getStatus()
{
    if(borrowedStatus == 0)
    {
        return "Available";
    }else if(borrowedStatus == 1)
    {
        return "Borrowed";
    }
}

Item::~Item(){}