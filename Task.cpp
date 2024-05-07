#include "Task.h"
#include "User.h"

Task::Task()
    : taskName{"Unnamed Task"}
{
}

Task::Task(const std::string &name)
    : taskName{name}
{
}

std::string Task::getTaskName() const
{
    return taskName;
}

std::vector<User *> Task::getAssignedUsers() const
{
    return assignedUsers;
}
