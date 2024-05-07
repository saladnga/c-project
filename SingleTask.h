#pragma once
#include "Task.h"
class SingleTask : public Task
{
private:
    bool assigned = false;

public:
    SingleTask();
    SingleTask(const std::string &name);
    bool isAssigned() const;
    void assign();
    void executeTask() override;

    // virtual void executeTask();
    // virtual bool isAssignedTo(User *user) const;
};
