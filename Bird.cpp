//
// Created by Christopher Mena on 9/23/22.
//
#include "Bird.h"

// Constructors
Bird::Bird() : Animal()
{
    airborne_ = false;
    aquatic_ = false;
}

Bird::Bird(std::string name, bool domestic, bool predator) : Animal(name, domestic, predator)
{
    airborne_ = false;
    aquatic_ = false;
}

// Accessors
bool Bird::isAirborne() const
{
    return airborne_;
}

bool Bird::isAquatic() const
{
    return aquatic_;
}

// Mutators
void Bird::setAirborne()
{
    airborne_ = true;
}

void Bird::setAquatic()
{
    aquatic_ = true;
}
