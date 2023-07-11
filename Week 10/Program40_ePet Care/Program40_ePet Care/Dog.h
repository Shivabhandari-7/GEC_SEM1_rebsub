#ifndef DOG_H
#define DOG_H

#include "Pet.h"

class Dog : public Pet {
public:
    Dog(int hunger = 0, int boredom = 0);
    ~Dog();
    void Talk() override;
};

#endif
