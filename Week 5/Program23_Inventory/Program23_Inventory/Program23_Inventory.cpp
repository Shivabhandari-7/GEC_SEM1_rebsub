#include <iostream>
#include <string>

const int MAX_ITEMS = 4;

void printInventory(const std::string inventory[], int numItems) {
    std::cout << "Inventory:\n";
    for (int i = 0; i < numItems; ++i) {
        std::cout << "- " << inventory[i] << '\n';
    }
    std::cout << std::endl;
}

int main() {
    int numItems = 0;
    std::string inventory[MAX_ITEMS];
    inventory[numItems++] = "sword";
    inventory[numItems++] = "battle axe";
    inventory[numItems++] = "healing potion";
    inventory[numItems++] = "dagger";

    std::cout << "You have picked up a wizard's staff.\n";
    std::cout << "Would you like to swap it for the dagger in your inventory? (y/n): ";
    char choice;
    std::cin >> choice;

    if (choice == 'y' || choice == 'Y') {
        std::string temp = inventory[3];
        inventory[3] = "wizard's staff";
        std::cout << "You have swapped the dagger for the wizard's staff.\n";
        printInventory(inventory, numItems);
    }
    else {
        std::cout << "You have left the wizard's staff behind.\n";
        printInventory(inventory, numItems);
    }

    return 0;
}
