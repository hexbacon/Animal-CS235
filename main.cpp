#include <iostream>
#include "Animal.h"
#include "Mammal.h"
#include "ArrayBag.h"
int main() {
    Animal lion;
    Animal cat_2, dog;
    Mammal cat("Cat", true, true);
    ArrayBag<Animal> a_bag;
    cat.setFins();
    cat.setTail();
    cat.setLegs(4);
    lion.setName("Lion");
    lion.setPredator();
    cat_2 = cat;
    a_bag.add(lion);
    a_bag.add(cat);
    a_bag.add(cat);
    a_bag.display();
    return 0;
}
