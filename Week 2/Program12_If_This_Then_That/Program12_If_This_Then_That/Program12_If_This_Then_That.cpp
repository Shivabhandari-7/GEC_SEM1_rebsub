#include <iostream>
using namespace std;

int main()
{
    int rain = 1;
    int snow = 2;

    // Variables to hold user's answers
    int weather;
    int temperature;

    // Prompt the user for weather and temperature inputs
    cout << "Please tell me if it is raining (1) or snowing (2): ";
    cin >> weather;
    cout << "What is the temperature in Celsius? ";
    cin >> temperature;

    // Weather and temperature analysis using if-else statements
    if (weather == rain)
    {
        // Nested if-else statement for rain condition
        if (temperature > 15)
        {
            cout << "Wear a light raincoat.\n";
        }
        else
        {
            cout << "Wear a thick coat.\n";
        }
    }
    else if (weather == snow)
    {
        // Nested if-else if-else statement for snow condition
        if (temperature > 5)
        {
            cout << "Wear something warm.\n";
        }
        else if (temperature > 0)
        {
            cout << "Wrap up well.\n";
        }
        else
        {
            cout << "Stay home.\n";
        }
    }
    else
    {
        cout << "Have a nice day! It is neither raining nor snowing.\n";
    }

    return 0;
}
