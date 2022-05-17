#ifndef ADMINUSER_H
#define ADMINUSER_H
#include "user.h"
#include <iostream>
#include <string>

using namespace std;

class AdminUser: public User
{
public:
    AdminUser();
    AdminUser(string name);
};

#endif