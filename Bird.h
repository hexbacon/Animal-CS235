//
// Created by Christopher Mena on 9/23/22.
//

#ifndef ANIMAL_BIRD_H
#define ANIMAL_BIRD_H
#include "Animal.h"
class Bird : public Animal
{
public:
    Bird();
    Bird(std::string name, bool domestic = false, bool predator = false);
    bool isAirborne() const;
    bool isAquatic() const;
    void setAirborne();
    void setAquatic();
private:
    bool airborne_;
    bool aquatic_;
};
#endif //ANIMAL_BIRD_H
