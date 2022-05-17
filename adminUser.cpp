#include "adminUser.h"
#include <iostream>
#include <string>

using namespace std;

AdminUser::AdminUser()
{
    User();
}

AdminUser::AdminUser(string name)
{
    User();
    username = name;
}