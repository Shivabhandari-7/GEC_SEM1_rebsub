#include <iostream>
#include "Dog.h"

Dog::Dog(int hunger, int boredom) : Pet(hunger, boredom) {}

Dog::~Dog() {}

void Dog::Talk() {
    std::cout << "I am a dog. ";
    Pet::Talk();
}
