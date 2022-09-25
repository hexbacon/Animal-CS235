//
// Created by Christopher Mena on 9/23/22.
//
#include "Fish.h"

// Constructors
Fish::Fish() : Animal()
{
    venomous_ = false;
}

Fish::Fish(std::string name, bool domestic, bool predator) : Animal(name, domestic, predator)
{
    venomous_ = false;
}

// Accessors
bool Fish::isVenomous() const
{
    return venomous_;
}

// Mutators
void Fish::setVenomous()
{
    venomous_ = true;
}