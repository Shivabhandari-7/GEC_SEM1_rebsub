#include <iostream>
#include <string>

int main() {
    std::string name;
    std::string testString = "Do you know who loves C++ XX does!";

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // Insert name in between 'XX'
    std::string modifiedString = testString;
    size_t pos = modifiedString.find("XX");
    modifiedString.replace(pos, 2, name);

    std::cout << "Modified string 1: " << modifiedString << std::endl;

    // Remove 'XX'
    pos = modifiedString.find(name);
    modifiedString.erase(pos, name.length());

    std::cout << "Modified string 2: " << modifiedString << std::endl;

    // Prompt for a longer name
    std::string newName;
    std::cout << "Enter a longer name: ";
    std::getline(std::cin, newName);

    // Replace the first name with the new name
    pos = modifiedString.find(name);
    modifiedString.replace(pos, name.length(), newName);

    std::cout << "Modified string 3: " << modifiedString << std::endl;

    return 0;
}
