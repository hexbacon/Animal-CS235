cmake_minimum_required(VERSION 3.23)
project(Animal)

set(CMAKE_CXX_STANDARD 23)

add_executable(Animal main.cpp Animal.h Animal.cpp Mammal.h Mammal.cpp Bird.cpp Bird.h Fish.h Fish.cpp Node.h Node.cpp ArrayBag.h ArrayBag.cpp)
