#include <iostream>
using namespace std;

// Function prototype
void addTwo(int num);

int main()
{
    // Create an int variable called myNum with the value of 6
    int myNum = 6;

    // Output the value of myNum before calling the function
    cout << "MAIN [before]: myNum = " << myNum << endl;

    // Call the function, passing myNum
    addTwo(myNum);

    // Output the value of myNum after the function call
    cout << "MAIN [after]: myNum = " << myNum << endl;

    return 0;
}

// Function definition
void addTwo(int num)
{
    // Add two to the number passed
    num += 2;

    // Output the contents of num within the function
    cout << "FUNCTION: num = " << num << endl;
}
