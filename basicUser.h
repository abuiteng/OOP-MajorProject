#ifndef BASICUSER_H
#define BASICUSER_H
#include "user.h"
#include <iostream>
#include <string>

using namespace std;

class BasicUser: public User
{
public:
    BasicUser();
    BasicUser(string name);
};

#endif