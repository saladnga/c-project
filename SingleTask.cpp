#include "SingleTask.h"
#include "Staff.h"
using namespace std;

SingleTask::SingleTask()
    : Task("Unnamed Single Task")
{
}

SingleTask::SingleTask(const std::string &name)
    : Task(name)
{
}

void SingleTask::executeTask()
{
    // std::cout << "Executing Single Task: " << Task::getTaskName() << std::endl;
}

// bool SingleTask::isAssignedTo(User *user) const
// {
//     for (User *assignedUser : getAssignedUsers())
//     {
//         if (assignedUser->getID() == user->getID())
//         {
//             return true;
//         }
//     }
//     return false;
// }

bool SingleTask::isAssigned() const
{
    return assigned;
}

void SingleTask::assign()
{
    if (assigned)
    {
        cout << "Error: Task already assigned" << endl;
        return;
    }
    assigned = true;
}