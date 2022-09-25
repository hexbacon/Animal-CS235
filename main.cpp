#include <iostream>
#include "Animal.h"
#include "Mammal.h"
int main() {
    Animal lion;
    Mammal cat("Cat", true, true);
    cat.setFins();
    cat.setTail();
    cat.setLegs(4);

    lion.setName("Lion");
    std::cout << lion.getName() << std::endl;
    std::cout << cat.getName() << ", legs: " << cat.legs() << std::endl;
    return 0;
}
