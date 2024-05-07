#pragma once
#include "User.h"
#include "Task.h"
#include "SingleTask.h"
using namespace std;

class Staff : public User
{
private:
    vector<Task *> assignedTasks;

public:
    Staff();
    Staff(const string &name);
    virtual void displayUserInfo() const override;
    void addAssignedTask(Task *task);
    bool assignTask(SingleTask *singleTask);

    // std::vector<Task *> getAssignedTasks() const override;
    // bool assignTask(User *user, Task *task) override;
    // void markTaskDone(Task *task);
};