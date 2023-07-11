#include <iostream>
#include "Pet.h"

Pet::Pet(int hunger, int boredom)
    : m_hunger(hunger), m_bored(boredom) {
    std::cout << "A new pet has arrived." << std::endl;
}

Pet::~Pet() {}

void Pet::Talk() {
    std::cout << "I am your pet and I feel ";
    int mood = GetMood();
    if (mood > 15)
        std::cout << "mad";
    else if (mood > 10)
        std::cout << "frustrated";
    else if (mood > 5)
        std::cout << "okay";
    else
        std::cout << "happy";
    std::cout << std::endl;
    PassingTime();
}

void Pet::Feed(int food) {
    std::cout << "Burp!" << std::endl;
    m_hunger -= food;
    if (m_hunger < 0)
        m_hunger = 0;
    PassingTime();
}

void Pet::Play(int fun) {
    std::cout << "Whee!" << std::endl;
    m_bored -= fun;
    if (m_bored < 0)
        m_bored = 0;
    PassingTime();
}

int Pet::GetMood() const {
    return m_hunger + m_bored;
}

void Pet::PassingTime(int time) {
    m_hunger += time;
    m_bored += time;
}
