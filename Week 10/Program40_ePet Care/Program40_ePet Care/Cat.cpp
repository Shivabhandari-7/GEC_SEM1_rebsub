#include <iostream>
#include "Cat.h"

Cat::Cat(int hunger, int boredom) : Pet(hunger, boredom) {}

Cat::~Cat() {}

void Cat::Talk() {
    std::cout << "I am a cat. ";
    Pet::Talk();
}
