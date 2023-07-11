#include <iostream>

int main() {
    const int MAX_LENGTH = 50;
    char name[MAX_LENGTH];

    std::cout << "Enter your name (first initial, middle initial, and surname): ";
    std::cin.getline(name, MAX_LENGTH);

    int index = 0;

    // Find the index of the first space
    while (name[index] != ' ' && name[index] != '\0') {
        index++;
    }

    if (name[index] == '\0') {
        std::cout << "Invalid input. Please provide all three parts of your name." << std::endl;
        return 0;
    }

    // Output first initial
    std::cout << "First initial: " << name[0] << std::endl;

    // Output middle initial
    std::cout << "Middle initial: " << name[index + 1] << std::endl;

    // Output surname
    std::cout << "Surname: " << &name[index + 3] << std::endl;

    return 0;
}
