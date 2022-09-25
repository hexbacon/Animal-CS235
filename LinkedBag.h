//
// Created by Christopher Mena on 9/24/22.
//

#ifndef ANIMAL_LINKEDBAG_H
#define ANIMAL_LINKEDBAG_H
#include "Node.h"
#include <vector>
template <class T>
class LinkedBag
{
public:
    LinkedBag();
    LinkedBag(const LinkedBag<T>& a_bag); // Copy contructor
    ~LinkedBag(); // Destructor;
    int getCurrentSize() const;
    bool isEmpty() const;
    bool add(const T& new_entry);
    bool remove(const T& an_entry);
    void clear();
    bool contains(const T& an_entry) const;
    int getFrequencyOf(const T& an_entry) const;
    std::vector<T> toVector() const;
private:
    Node<T>* head_ptr_;
    int item_count_;
    Node<T>* getPointerTo(const T& target);

};
#include "LinkedBag.cpp"
#endif //ANIMAL_LINKEDBAG_H
