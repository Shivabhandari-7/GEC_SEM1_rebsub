#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

int main()
{
    char playAgain;

    do {
        int n;

        // Prompt the user for a number between 1 and 10
        do {
            cout << "Please enter a number between 1 and 10: ";
            cin >> n;

            if (n < 1 || n > 10) {
                cout << "Invalid input. Please try again.\n";
            }
        } while (n < 1 || n > 10);

        // Print the pattern of stars
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                cout << "* ";
            }
            cout << endl;
        }

        // Ask the user if they want to play again
        cout << "Do you want to play again? (Y/N): ";
        cin >> playAgain;

        // Convert playAgain to uppercase for comparison
        playAgain = toupper(playAgain);

        // Clear the input buffer
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << endl;

    } while (playAgain == 'Y');

    // Output goodbye message and pause for a brief second
    cout << "Goodbye." << endl;
    this_thread::sleep_for(chrono::seconds(1));

    return 0;
}
