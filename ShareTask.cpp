#include "ShareTask.h"

ShareTask::ShareTask()
    : Task("Unnamed Share Task")
{
}
ShareTask::ShareTask(const std::string &name)
    : Task(name)
{
}

void ShareTask::executeTask()
{
    // std::cout << "Executing Share Task: " << Task::getTaskName() << std::endl;
}
bool ShareTask::isAssignedTo(User *user) const
{
    for (User *assignedUser : getAssignedUsers())
    {
        if (assignedUser->getID() == user->getID())
        {
            return true;
        }
    }
    return false;
}