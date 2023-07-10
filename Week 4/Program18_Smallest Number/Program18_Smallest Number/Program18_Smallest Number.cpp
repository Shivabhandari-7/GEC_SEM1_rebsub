#include <iostream>
using namespace std;

void SmallestNumber(int a, int b);
int MultiplyByTen(int num);
void DivideByThree(float num);

int main()
{
    int number1, number2;
    float result;

    // Loop to ask for two integers three times
    for (int i = 1; i <= 3; i++)
    {
        cout << "Enter two integers (set " << i << "): ";
        cin >> number1 >> number2;
        SmallestNumber(number1, number2);
    }

    // Loop to ask for a number to multiply by 10 and divide by 3 three times
    for (int i = 1; i <= 3; i++)
    {
        cout << "Enter a number to multiply by 10 and divide by 3 (set " << i << "): ";
        cin >> number1;
        result = MultiplyByTen(number1);
        DivideByThree(result);
    }

    return 0;
}

void SmallestNumber(int a, int b)
{
    if (a < b)
    {
        cout << "The smallest number is: " << a << endl;
    }
    else if (b < a)
    {
        cout << "The smallest number is: " << b << endl;
    }
    else
    {
        cout << "The numbers are equal." << endl;
    }
}

int MultiplyByTen(int num)
{
    return num * 10;
}

void DivideByThree(float num)
{
    float result = num / 3;
    cout << "Result of division by three: " << result << endl;
}
