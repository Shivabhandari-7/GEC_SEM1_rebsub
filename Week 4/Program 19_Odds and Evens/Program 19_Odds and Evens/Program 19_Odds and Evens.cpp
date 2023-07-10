#include <iostream>
using namespace std;

bool isOdd(int num);
void outputResults(int numOfOdd, int oddTotal, int numOfEven, int evenTotal);

int main()
{
    int numbers[10];
    int numOfOdd = 0, oddTotal = 0, numOfEven = 0, evenTotal = 0;

    // Ask the user to input 10 integers
    cout << "Enter 10 integers:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> numbers[i];

        // Check if the number is odd or even
        if (isOdd(numbers[i]))
        {
            numOfOdd++;
            oddTotal += numbers[i];
        }
        else
        {
            numOfEven++;
            evenTotal += numbers[i];
        }
    }

    // Call the outputResults function to display the results
    outputResults(numOfOdd, oddTotal, numOfEven, evenTotal);

    return 0;
}

bool isOdd(int num)
{
    // Check if the number is odd
    return num % 2 != 0;
}

void outputResults(int numOfOdd, int oddTotal, int numOfEven, int evenTotal)
{
    // Output the number of odd numbers and their total
    cout << "Number of odd numbers: " << numOfOdd << endl;
    cout << "Sum of odd numbers: " << oddTotal << endl;

    // Output the number of even numbers and their total
    cout << "Number of even numbers: " << numOfEven << endl;
    cout << "Sum of even numbers: " << evenTotal << endl;
}
