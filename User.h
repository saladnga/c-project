#pragma once
#include <vector>
#include <iostream>
#include <string>
#include "Task.h"
using namespace std;

class Task;

class User
{
private:
    int id;
    string name;
    string role;

    // protected:
    // static int idCounter;

public:
    User();
    User(const string &name, const string &role);
    virtual void displayUserInfo() const = 0;
    virtual void manageTask();
    int getID() const;
    string getName() const;
    virtual ~User();

    // User(const string &name);
    // virtual std::vector<Task *> getAssignedTasks() const = 0;
    // virtual bool assignTask(User *user, Task *task) = 0;
};