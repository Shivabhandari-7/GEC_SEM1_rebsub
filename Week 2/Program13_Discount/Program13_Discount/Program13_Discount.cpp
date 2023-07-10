#include <iostream>
using namespace std;

int main()
{
    char status;
    int gameChoice;

    //  The user for status and game choice inputs
    cout << "Please tell me your status with 's' for student, 't' for teacher, or 'o' for other: ";
    cin >> status;
    cout << "Which game would you like, 1 or 2? ";
    cin >> gameChoice;

    // Discount determination using if-else if-else statement
    if ((status == 's' || status == 't') && gameChoice == 1)
    {
        cout << "You are entitled to a 20% discount.\n";
    }
    else if ((status == 's' || status == 't') && gameChoice == 2)
    {
        cout << "You are entitled to a 10% discount.\n";
    }
    else
    {
        cout << "You are not entitled to a discount.\n";
    }

    return 0;
}
