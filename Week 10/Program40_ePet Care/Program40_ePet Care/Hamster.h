#ifndef HAMSTER_H
#define HAMSTER_H

#include "Pet.h"

class Hamster : public Pet {
public:
    Hamster(int hunger = 0, int boredom = 0);
    ~Hamster();
    void Talk() override;
};

#endif
