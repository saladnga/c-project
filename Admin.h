#pragma once
#include "User.h"
#include "Task.h"
#include "Staff.h"

class Admin : public User
{
public:
    Admin();
    Admin(const std::string &name);
    void manageTask() override;
    virtual void displayUserInfo() const override;
    std::vector<Task *> getAssignedTasks() const;
    // bool assignTask(User *user, Task *task);
    void assignTask(Staff *staff, SingleTask *singleTask);
};
