#include <iostream>
#include "User.h"
#include "Task.h"
#include "Admin.h"
#include "Staff.h"
#include "SingleTask.h"
#include "ShareTask.h"
#include "User.cpp"
#include "Task.cpp"
#include "Admin.cpp"
#include "Staff.cpp"
#include "SingleTask.cpp"
#include "ShareTask.cpp"

using namespace std;

int main()
{
    string username, password;

    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    User *currentUser = nullptr;

    if (username == "admin" && password == "admin123")
    {
        currentUser = new Admin("Admin");
    }

    else if (username == "user" && password == "user123")
    {
        currentUser = new Staff("Dave");
    }

    else
    {
        cout << "Invalid username or password" << endl;
        return 1;
    }

    cout << "Login successful!" << endl;

    cout << "User Info:" << endl;

    currentUser->displayUserInfo();

    if (Admin *admin = dynamic_cast<Admin *>(currentUser))
    {
        // Admin-specific functionality
        admin->manageTask(); // Example: Call admin-specific function
        if (admin->getName() == "Admin")
        {
            // Task assignment
            Staff staff1("Staff1");
            Staff staff2("Staff2");
            SingleTask singleTask;
            admin->assignTask(&staff1, &singleTask);
            admin->assignTask(&staff2, &singleTask);
        }
    }

    delete currentUser;

    return 0;
}

// int main()
// {
//     // Create Admin and Staff instances
//     Admin admin("Admin1");
//     Staff staff("Staff1");
//     Staff staff2("Staff2");

//     // Create Task instances
//     SingleTask singleTask("Do HomeWork");
//     ShareTask shareTask("Do Project");

//     // Assign tasks
//     admin.assignTask(&staff, &singleTask); // Assign single task to staff
//     admin.assignTask(&staff, &shareTask);  // Attempt to assign shared task to staff
//     admin.assignTask(&staff2, &shareTask);
//     admin.assignTask(&staff2, &singleTask);
//     admin.assignTask(&staff, &singleTask);
//     // Staff assign to admin
//     staff.assignTask(&admin, &singleTask);
//     staff.assignTask(&admin, &shareTask);
// }