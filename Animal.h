//
// Created by Christopher Mena on 9/23/22.
//

#ifndef ANIMAL_ANIMAL_H
#define ANIMAL_ANIMAL_H
#include <iostream>
class Animal
{
public:
    Animal();
    Animal(std::string name, bool domestic = false, bool predator = false);
    // Accessors
    std::string getName() const;
    bool isDomestic() const;
    bool isPredator() const;
    // Mutators
    void setName(std::string name);
    void setDomestic();
    void setPredator();
private:
    std::string name_;
    bool domestic_;
    bool predator_;
};

#endif //ANIMAL_ANIMAL_H
