//
// Created by Christopher Mena on 9/23/22.
//

#ifndef ANIMAL_FISH_H
#define ANIMAL_FISH_H
#include "Animal.h"
class Fish : public Animal
{
public:
    Fish();
    Fish(std::string name, bool domestic = false, bool predator = false);
    bool isVenomous() const;
    void setVenomous();
private:
    bool venomous_;
};
#endif //ANIMAL_FISH_H
