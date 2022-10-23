//
// Created by Christopher Mena on 9/24/22.
//

#ifndef ANIMAL_ARRAYBAG_H
#define ANIMAL_ARRAYBAG_H

#include "Node.h"
#include <iostream>
#include <vector>
//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

//  Modified by Tiziana Ligorio for CSCI 235 Hunter college 2019

/** Header file for an array-based implementation of the ADT bag.
 @file ArrayBag.h */

#include <vector>
#include "Node.h"
template<class T>
class ArrayBag
{

public:
    /** default constructor**/
    ArrayBag();

    /**
     @return item_count_ : the current size of the bag
    **/
    int getCurrentSize() const;

    /**
     @return true if item_count_ == 0, false otherwise
     **/
    bool isEmpty() const;

    /**
     @return true if new_etry was successfully added to items_, false otherwise
     **/
    bool add(const T& new_entry);

    /**
     @return true if an_etry was successfully removed from items_, false otherwise
     **/
    bool remove(const T& an_entry);

    /**
     @post item_count_ == 0
     **/
    void clear();

    /**
     @return true if an_etry is found in items_, false otherwise
     **/
    bool contains(const T& an_entry) const;

    /**
     @return the number of times an_entry is found in items_
     **/
    int getFrequencyOf(const T& an_entry) const;

    /**
     @return a vector having the same cotntents as items_
     **/
    std::vector<T> toVector() const;

    /**
     display all items inside the bag
     @return none
    **/
    void display() const;




protected:
    static const int DEFAULT_CAPACITY = 200;  //max size of items_
    T items_[DEFAULT_CAPACITY];              // Array of bag items
    int item_count_;                         // Current count of bag items


    /**
     @param target to be found in items_
     @return either the index target in the array items_ or -1,
     if the array does not containthe target.
     **/
    int getIndexOf(const T& target) const;


}; // end ArrayBag

/** default constructor**/
template<class T>
ArrayBag<T>::ArrayBag(): item_count_(0)
{
}  // end default constructor


/**
 @return item_count_ : the current size of the bag
 **/
template<class T>
int ArrayBag<T>::getCurrentSize() const
{
    return item_count_;
}  // end getCurrentSize


/**
 @return true if item_count_ == 0, false otherwise
 **/
template<class T>
bool ArrayBag<T>::isEmpty() const
{
    return item_count_ == 0;
}  // end isEmpty


/**
 @return true if new_etry was successfully added to items_, false otherwise
 **/
template<class T>
bool ArrayBag<T>::add(const T& new_entry)
{
    bool entry_exit = contains(new_entry);
    bool has_room = (item_count_ < DEFAULT_CAPACITY);
    if (has_room && !entry_exit)
    {
        items_[item_count_] = new_entry;
        item_count_++;
        return true;
    }  // end if

    return false;
}  // end add


/**
 @return true if an_etry was successfully removed from items_, false otherwise
 **/
template<class T>
bool ArrayBag<T>::remove(const T& an_entry)
{
    int found_index = getIndexOf(an_entry);
    bool can_remove = !isEmpty() && (found_index > -1);
    if (can_remove)
    {
        item_count_--;
        items_[found_index] = items_[item_count_];
    }  // end if

    return can_remove;
}  // end remove


/**
 @post item_count_ == 0
 **/
template<class T>
void ArrayBag<T>::clear()
{
    item_count_ = 0;
}  // end clear


/**
 @return the number of times an_entry is found in items_
 **/
template<class T>
int ArrayBag<T>::getFrequencyOf(const T& an_entry) const
{
    int frequency = 0;
    int cun_index = 0;       // Current array index
    while (cun_index < item_count_)
    {
        if (items_[cun_index] == an_entry)
        {
            frequency++;
        }  // end if

        cun_index++;          // Increment to next entry
    }  // end while

    return frequency;
}  // end getFrequencyOf


/**
 @return true if an_etry is found in items_, false otherwise
 **/
template<class T>
bool ArrayBag<T>::contains(const T& an_entry) const
{
    return getIndexOf(an_entry) > -1;
}  // end contains


/**
 @return a vector having the same cotntents as items_
 **/
template<class T>
std::vector<T> ArrayBag<T>::toVector() const
{
    std::vector<T> bag_contents;
    for (int i = 0; i < item_count_; i++)
        bag_contents.push_back(items_[i]);

    return bag_contents;
}  // end toVector





// ********* PRIVATE METHODS **************//

/**
 @param target to be found in items_
 @return either the index target in the array items_ or -1,
 if the array does not containthe target.
 **/
template<class T>
int ArrayBag<T>::getIndexOf(const T& target) const
{
    bool found = false;
    int result = -1;
    int search_index = 0;

    // If the bag is empty, item_count_ is zero, so loop is skipped
    while (!found && (search_index < item_count_))
    {
        if (items_[search_index] == target)
        {
            found = true;
            result = search_index;
        }
        else
        {
            search_index++;
        }  // end if
    }  // end while

    return result;
}  // end getIndexOf

template <class T>
void ArrayBag<T>::display() const
{
    for(int index = 0; index < item_count_; index++)
    {
        T display_item = items_[index];
        if(index == item_count_ - 1)
            std::cout << display_item << std::endl;
        else
            std::cout << display_item << std::endl;
    }
}
#endif //ANIMAL_ARRAYBAG_H
