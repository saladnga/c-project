#pragma once
#include "Task.h"

class ShareTask : public Task
{
public:
    ShareTask();
    ShareTask(const std::string &name);
    void executeTask();
    bool isAssignedTo(User *user) const;
};