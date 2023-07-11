#include <iostream>

int main() {
    int num;
    int& rNum = num;  // Creating a reference rNum to num

    // Task 1: Ask the user to input a number and store it in num
    std::cout << "Enter a number: ";
    std::cin >> num;

    // Task 2: Output the value of num
    std::cout << "num: " << num << std::endl;

    // Task 3: Add 25 to the current value stored in num
    rNum += 25;

    // Task 4: Output num
    std::cout << "num: " << num << std::endl;

    // Task 5: Ask the user to input another number and store it in num
    std::cout << "Enter another number: ";
    std::cin >> rNum;

    // Task 6: Output num
    std::cout << "num: " << num << std::endl;

    // Task 7: Subtract 25 from the current value of num
    rNum -= 25;

    // Task 8: Output num
    std::cout << "num: " << num << std::endl;

    return 0;
}
