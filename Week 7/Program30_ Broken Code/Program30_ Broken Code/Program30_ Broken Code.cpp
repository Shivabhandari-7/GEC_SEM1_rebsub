#include <iostream>
#include <string>

int main() {
    std::string fullName;

    std::cout << "Firstly, what is your full name? ";
    std::getline(std::cin, fullName);

    std::cout << "Hi " << fullName << ", let's get started." << std::endl;

    int stone, pounds;
    std::cout << "Please enter your weight in stone: ";
    std::cin >> stone;
    std::cout << "Thank you!" << std::endl;
    std::cout << "Please enter the pounds: ";
    std::cin >> pounds;
    std::cout << "Thank you!" << std::endl;

    int totalWeightInPounds = (stone * 14) + pounds;
    std::cout << "Your total weight in pounds is: " << totalWeightInPounds << std::endl;

    int feet, inches;
    std::cout << "Please enter your height in feet: ";
    std::cin >> feet;
    std::cout << "Thank you!" << std::endl;
    std::cout << "Please enter the inches: ";
    std::cin >> inches;
    std::cout << "Thank you!" << std::endl;

    int totalHeightInInches = (feet * 12) + inches;
    std::cout << "Your total height in inches is: " << totalHeightInInches << std::endl;

    double bmi = (static_cast<double>(totalWeightInPounds) * 703) / (totalHeightInInches * totalHeightInInches);
    std::cout << "Your BMI is: " << bmi << std::endl;

    return 0;
}
