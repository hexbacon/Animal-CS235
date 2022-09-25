//
// Created by Christopher Mena on 9/24/22.
//

#include "LinkedBag.h"

// Constructors
template <class T>
LinkedBag<T>::LinkedBag() : head_ptr_(nullptr), item_count_(0)
{
}

// Methods
template <class T>
bool LinkedBag<T>::add(const T &new_entry)
{
    //Create temp pointer with node
    Node<T>* temp_ptr = new Node<T>;
    // Set nodes val
    temp_ptr->setItem(new_entry);
    // Set node pointer to head_pointer
    temp_ptr->setNext(head_ptr_);
    // Set head_pointer to temp
    head_ptr_ = temp_ptr;
    temp_ptr = nullptr;
    item_count_++;
}

template <class T>
std::vector<T> LinkedBag<T>::toVector() const
{
    std::vector<T> bag_contents;
    // Create temp current node
    Node<T>* cur_ptr = head_ptr_;
    // While current pointer is not nullptr
    while(cur_ptr != nullptr)
    {
        bag_contents.push_back(cur_ptr->getItem());
        cur_ptr = cur_ptr->getNext();
    }
    return bag_contents;
}

template <class T>
int LinkedBag<T>::getFrequencyOf(const T &an_entry) const
{
    int frequency = 0;
    // Traverse nodes
    Node<T>* cur_ptr = head_ptr_;
    while(cur_ptr != nullptr)
    {
        if(cur_ptr->getItem() == an_entry)
        {
            frequency += 1;
        }
        cur_ptr = cur_ptr->getNext();
    }
    return frequency;
}

template <class T>
Node<T>* LinkedBag<T>::getPointerTo(const T &target)
{
    bool found = false;
    Node<T>* cur_ptr = head_ptr_;
    while(!found && (cur_ptr != nullptr))
    {
        if(target == cur_ptr->getNext())
            found = true;
        else
            cur_ptr = cur_ptr->getNext();
    }
    return cur_ptr;
}