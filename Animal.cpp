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

bool Animal::operator==(const Animal &rhs) const
{
    return (this->getName() == rhs.getName()) && (this->isPredator() == rhs.isPredator()) && (this->isDomestic() == rhs.isDomestic());
}

std::ostream &operator<<(std::ostream &os, const Animal &data)
{
    os << data.getName() << ' ';
    if (data.isDomestic())
        os << "is domestic, ";
    else
        os << "is not domestic, ";
    if(data.isPredator())
        os << "is a predactor";
    else
        os << "is not a predator";
    return os;
}

