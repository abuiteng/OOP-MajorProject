#ifndef ITEM_H
#define ITEM_H
#include <string>

class Item
{
public:
    Item();

    bool borrowedStatus;
    bool onHold;
    std::string name;
    std::string returnDate;

    std::string getStatus();
    std::string getName();
    
    ~Item();
};

#endif