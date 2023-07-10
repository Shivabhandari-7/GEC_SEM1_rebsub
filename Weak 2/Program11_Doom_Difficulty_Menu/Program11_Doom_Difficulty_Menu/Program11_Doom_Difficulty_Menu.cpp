#include <iostream>
using namespace std;

int main()
{
    //  the menu
    cout << "Please choose your difficulty:\n"
        << "1. I'm too young to die!\n"
        << "2. Hey, not too rough!\n"
        << "3. Hurt me plenty.\n"
        << "4. Ultra-Violence.\n"
        << "5. Nightmare...\n";

    // user input
    int choice;
    cout << "Enter your choice (1-5): ";
    cin >> choice;

    // Process the user's choice using a switch statement
    switch (choice)
    {
    case 1:
        cout << "Just FYI, they will shoot back!\n";
        break;
    case 2:
        cout << "Prepare for a decent challenge!\n";
        break;
    case 3:
        cout << "You're up for a good fight!\n";
        break;
    case 4:
        cout << "Prepare for some intense action!\n";
        break;
    case 5:
        cout << "Good luck surviving the nightmare!\n";
        break;
    default:
        cout << "Invalid choice. Please select a number between 1 and 5.\n";
        break;
    }

    return 0;
}
