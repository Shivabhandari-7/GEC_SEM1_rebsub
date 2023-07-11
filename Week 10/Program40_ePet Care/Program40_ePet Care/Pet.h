#pragma once
#ifndef PET_H
#define PET_H

class Pet {
protected:
    int m_hunger;
    int m_bored;

public:
    Pet(int hunger = 0, int boredom = 0);
    virtual ~Pet();
    virtual void Talk();
    void Feed(int food = 4);
    void Play(int fun = 4);

private:
    int GetMood() const;
    void PassingTime(int time = 1);
};

#endif
