#include <iostream>
#include "Pet.h"
#include "Dog.h"
#include "Cat.h"
#include "Hamster.h"

int main() {
    int choice;
    Pet* pet = nullptr;

    std::cout << "Which pet would you like to choose?" << std::endl;
    std::cout << "1. Dog" << std::endl;
    std::cout << "2. Cat" << std::endl;
    std::cout << "3. Hamster" << std::endl;
    std::cout << "Enter your choice (1-3): ";
    std::cin >> choice;

    switch (choice) {
    case 1:
        pet = new Dog();
        break;
    case 2:
        pet = new Cat();
        break;
    case 3:
        pet = new Hamster();
        break;
    default:
        std::cout << "Invalid choice. Exiting..." << std::endl;
        return 0;
    }

    while (true) {
        int option;
        std::cout << std::endl;
        std::cout << "0 - Quit" << std::endl;
        std::cout << "1 - Listen to your pet" << std::endl;
        std::cout << "2 - Feed your pet" << std::endl;
        std::cout << "3 - Play with your pet" << std::endl;
        std::cout << "Enter your choice (0-3): ";
        std::cin >> option;

        switch (option) {
        case 0:
            delete pet;
            return 0;
        case 1:
            pet->Talk();
            break;
        case 2:
            pet->Feed();
            break;
        case 3:
            pet->Play();
            break;
        default:
            std::cout << "Invalid choice. Try again." << std::endl;
        }
    }
}
