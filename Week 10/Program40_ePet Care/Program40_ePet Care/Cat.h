#ifndef CAT_H
#define CAT_H

#include "Pet.h"

class Cat : public Pet {
public:
    Cat(int hunger = 0, int boredom = 0);
    ~Cat();
    void Talk() override;
};

#endif
