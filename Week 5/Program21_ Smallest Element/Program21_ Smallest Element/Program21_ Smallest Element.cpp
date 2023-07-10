#include <iostream>
using namespace std;

const int ARRAY_SIZE = 10;

int main()
{
    int numbers[ARRAY_SIZE];

    // Prompt the user to input 10 integers
    cout << "Enter 10 integers:" << endl;
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> numbers[i];
    }

    // Find the smallest value and its position in the array
    int smallest = numbers[0];
    int position = 0;
    for (int i = 1; i < ARRAY_SIZE; i++)
    {
        if (numbers[i] < smallest)
        {
            smallest = numbers[i];
            position = i;
        }
    }

    // Output the smallest value and its position
    cout << "The smallest value is: " << smallest << endl;
    cout << "Position in the array: " << (position + 1) << endl;

    return 0;
}
