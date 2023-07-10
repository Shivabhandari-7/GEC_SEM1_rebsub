#include <iostream>
using namespace std;

int main()
{
    int number1, number2;
    int sum = 0;
    int count = 0;

    // Prompt the user to enter the first two numbers
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;

    sum = number1 + number2;
    count += 2; // Increment the count for the first two numbers

    // Calculate the mean value
    double mean = static_cast<double>(sum) / count;

    // Print the sum and mean of the first two numbers
    cout << "Sum: " << sum << endl;
    cout << "Mean: " << mean << endl;

    // Prompt the user to enter another number
    int additionalNumber;
    do {
        cout << "Enter another number (enter 0 to exit): ";
        cin >> additionalNumber;

        if (additionalNumber != 0) {
            sum += additionalNumber;
            count++;
            mean = static_cast<double>(sum) / count;

            // Print the updated sum and mean
            cout << "Sum: " << sum << endl;
            cout << "Mean: " << mean << endl;
        }
    } while (additionalNumber != 0);

    return 0;
}
