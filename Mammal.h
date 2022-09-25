//
// Created by Christopher Mena on 9/23/22.
//

#ifndef ANIMAL_MAMMAL_H
#define ANIMAL_MAMMAL_H
#include "Animal.h"

class Mammal : public Animal
{
public:
    Mammal();
    Mammal(std::string name, bool domestic = false, bool predator = false);
    bool hasHair() const;
    bool isAirborne() const;
    bool isAquatic() const;
    bool isToothed() const;
    bool hasFins() const;
    bool hasTail() const;
    int legs() const;
    void setHair();
    void setAirborne();
    void setAquatic();
    void setToothed();
    void setFins();
    void setTail();
    void setLegs(int legs);
private:
    bool hair_;
    bool airborne_;
    bool aquatic_;
    bool toothed_;
    bool fins_;
    bool tail_;
    int legs_;
};
#endif //ANIMAL_MAMMAL_H
