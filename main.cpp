#include <iostream>
#include "Animal.h"
#include "Mammal.h"
#include "LinkedBag.h"
int main() {
    Animal lion;
    Animal cat_2;
    Mammal cat("Cat", true, true);
    LinkedBag<Animal> a_bag;
    cat.setFins();
    cat.setTail();
    cat.setLegs(4);
    lion.setName("Lion");
    cat_2 = cat;
    a_bag.add(lion);
    a_bag.add(cat);
    std::cout << "Items count in bag: " << a_bag.getCurrentSize() << std::endl;
    std::cout << "Cat 2: " << cat_2.getName() << std::endl;
    return 0;
}
