#include <iostream>




class Pet {
protected:
    int m_hunger;
    int m_bored;

public:
    Pet(int hunger = 0, int boredom = 0) : m_hunger(hunger), m_bored(boredom) {}

    virtual ~Pet() {}

    virtual void Talk() const {
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

    void Feed(int food = 4) {
        std::cout << "Burp!" << std::endl;
        m_hunger -= food;
        if (m_hunger < 0)
            m_hunger = 0;
        PassingTime();
    }

    void Play(int fun = 4) {
        std::cout << "Wheee!" << std::endl;
        m_bored -= fun;
        if (m_bored < 0)
            m_bored = 0;
        PassingTime();
    }

private:
    int GetMood() const {
        return m_hunger + m_bored;
    }

    void PassingTime(int time = 1) {
        m_hunger += time;
        m_bored += time;
    }
};

class Dog : public Pet {
public:
    void Talk() const override {
        std::cout << "Woof! ";
        Pet::Talk();
    }
};

class Cat : public Pet {
public:
    void Talk() const override {
        std::cout << "Meow! ";
        Pet::Talk();
    }
};

class Hamster : public Pet {
public:
    void Talk() const override {
        std::cout << "Squeak! ";
        Pet::Talk();
    }
};

int main() {
    Pet* pet = nullptr;

    std::cout << "Which pet do you want? (0-Dog, 1-Cat, 2-Hamster): ";
    int choice;
    std::cin >> choice;

    switch (choice) {
    case 0:
        pet = new Dog();
        break;
    case 1:
        pet = new Cat();
        break;
    case 2:
        pet = new Hamster();
        break;
    default:
        std::cout << "Invalid choice. Exiting..." << std::endl;
        return 0;
    }

    pet->Talk();

    while (true) {
        std::cout << "Options:\n";
        std::cout << "0 - Quit\n";
        std::cout << "1 - Listen to your pet\n";
        std::cout << "2 - Feed your pet\n";
        std::cout << "3 - Play with your pet\n";
        std::cout << "Enter your choice: ";

        int option;
        std::cin >> option;

        switch (option) {
        case 0:
            delete pet;
            std::cout << "Exiting..." << std::endl;
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
            break;
        }
    }

    return 0;
}

