#include "User.h"
#include "Task.h"
using namespace std;

// int User::idCounter = 0;

User::User()
    : name{"Unnamed User"}
{
    // id = NULL;
}

User::User(const std::string &name, const string &role)
    : name(name), role(role)
{
    // id = ++idCounter;
}

int User::getID() const
{
    return id;
}

string User::getName() const
{
    return name;
}

void User::displayUserInfo() const
{
    cout << "Name: " << name << ", Role: " << role << endl;
}

void User::manageTask()
{
}

User::~User() {}
