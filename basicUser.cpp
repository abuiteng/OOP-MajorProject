#include "basicUser.h"
#include <iostream>
#include <string>

using namespace std;

BasicUser::BasicUser()
{
    User();
}

BasicUser::BasicUser(string name)
{
    User();
    username = name;
}