#include <iostream>
#include <string>
#include <vector>

int main() {
    const int MAX_INVENTORY_SIZE = 3;

    std::vector<std::string> inventory;
    std::string choice;

    while (inventory.size() < MAX_INVENTORY_SIZE) {
        std::cout << "Type which item you wish to keep: Staff or Knife" << std::endl;
        std::cin >> choice;

        if (choice == "Staff" || choice == "Knife") {
            inventory.push_back(choice);
        }
        else {
            std::cout << "Invalid choice! Please enter 'Staff' or 'Knife'." << std::endl;
        }
    }

    std::cout << "Your inventory holds:" << std::endl;
    for (const std::string& item : inventory) {
        std::cout << item << std::endl;
    }

    std::cout << "Your inventory is full!" << std::endl;

    std::cout << "You have found a magic ring. What would you like to replace in your inventory?" << std::endl;
    std::cout << "Choices:" << std::endl;
    for (int i = 0; i < inventory.size(); i++) {
        std::cout << i + 1 << ": " << inventory[i] << std::endl;
    }

    int replaceIndex;
    std::cin >> replaceIndex;
    replaceIndex--;

    if (replaceIndex >= 0 && replaceIndex < inventory.size()) {
        inventory[replaceIndex] = "magic ring";
    }
    else {
        std::cout << "Invalid choice! No item replaced." << std::endl;
    }

    std::cout << "Inventory is now:" << std::endl;
    for (const std::string& item : inventory) {
        std::cout << item << std::endl;
    }

    std::cout << "You have been robbed!!" << std::endl;
    inventory.clear();

    std::cout << "Inventory is now:" << std::endl;
    if (inventory.empty()) {
        std::cout << "Empty!" << std::endl;
    }
    else {
        for (const std::string& item : inventory) {
            std::cout << item << std::endl;
        }
    }

    return 0;
}
