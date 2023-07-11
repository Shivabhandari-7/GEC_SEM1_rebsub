#include <iostream>
#include "Hamster.h"

Hamster::Hamster(int hunger, int boredom) : Pet(hunger, boredom) {}

Hamster::~Hamster() {}

void Hamster::Talk() {
    std::cout << "I am a hamster. ";
    Pet::Talk();
}
