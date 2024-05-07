#pragma once
#include <vector>
#include <iostream>
#include <string>
#include "User.h"

using namespace std;

class User;

class Task
{
private:
    string taskName;
    vector<User *> assignedUsers;

public:
    Task();
    Task(const std::string &name);
    virtual void executeTask() = 0;
    virtual ~Task(){};
    string getTaskName() const;
    vector<User *> getAssignedUsers() const;

    // virtual bool isAssignedTo(User *user) const = 0;
};
