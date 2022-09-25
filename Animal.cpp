//
// Created by Christopher Mena on 9/23/22.
//

#include "Animal.h"

//Contructors
Animal::Animal()
{
    name_ = "";
    domestic_ = false;
    predator_ = false;
}

Animal::Animal(std::string name, bool domestic, bool predator)
{
    name_ = name;
    domestic_ = domestic;
    predator_ = predator;
}

// Accessors
std::string Animal::getName() const
{
    return name_;
}

bool Animal::isDomestic() const
{
    return domestic_;
}

bool Animal::isPredator() const
{
    return predator_;
}

// Mutators
void Animal::setName(std::string name)
{
    name_ = name;
}

void Animal::setDomestic()
{
    domestic_ = true;
}

void Animal::setPredator()
{
    predator_ = true;
}
