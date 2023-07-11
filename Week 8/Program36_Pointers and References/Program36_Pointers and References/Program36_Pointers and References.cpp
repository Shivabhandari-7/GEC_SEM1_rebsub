#include <iostream>

// Function to take input from the user and populate num1 and num2 variables
void inputDetails(int* n1, int* n2) {
    std::cout << "Enter the value for num1: ";
    std::cin >> *n1;  // Store the value in the memory location pointed by n1

    std::cout << "Enter the value for num2: ";
    std::cin >> *n2;  // Store the value in the memory location pointed by n2
}

// Function to output details of num1, num2, and pNum
void outputDetails(int num1, int num2, int* pNum) {
    std::cout << "num1 value: " << num1 << std::endl;
    std::cout << "num1 address in memory: " << &num1 << std::endl;
    std::cout << "num2 value: " << num2 << std::endl;
    std::cout << "num2 address in memory: " << &num2 << std::endl;
    std::cout << "pNum value (address it currently holds): " << pNum << std::endl;
    std::cout << "pNum dereferenced value: " << *pNum << std::endl;
    std::cout << "pNum address in memory: " << &pNum << std::endl;
}

int main() {
    int num1, num2;
    int* pNum;  // Pointer to an integer variable

    inputDetails(&num1, &num2);  // Pass the addresses of num1 and num2 to inputDetails()

    pNum = &num1;  // Point pNum to num1
    outputDetails(num1, num2, pNum);  // Call outputDetails() with num1, num2, and pNum

    pNum = &num2;  // Reassign pNum to point to num2
    outputDetails(num1, num2, pNum);  // Call outputDetails() again with updated pNum

    pNum = nullptr;  // Set pNum to nullptr once finished using it

    return 0;
}
