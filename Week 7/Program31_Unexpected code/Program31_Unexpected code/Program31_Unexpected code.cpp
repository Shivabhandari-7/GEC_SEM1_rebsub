#include <iostream>

int main() {
    int count = 3;
    for (int i = 1; i <= count; i++) {
        std::cout << i;
        if (i % 2 == 0)
            std::cout << " is an even number" << std::endl;
        else
            std::cout << " is an odd number" << std::endl;
    }

    // Pause the output
    std::cin.get();

    return 0;
}
