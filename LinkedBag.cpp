//
// Created by Christopher Mena on 9/24/22.
//

#include "LinkedBag.h"

// Constructors
template <class T>
LinkedBag<T>::LinkedBag() : head_ptr_(nullptr), item_count_(0)
{
}

template <class T>
LinkedBag<T>::LinkedBag(const LinkedBag<T> &a_bag)
{

} // end copy-contructors

template <class T>
LinkedBag<T>::~LinkedBag()
{
    clear();
} // end destructor

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
} // end add

template <class T>
bool LinkedBag<T>::remove(const T &an_entry)
{
    // Get pointer to node
    Node<T>* entry_ptr = getPointerTo(entry_ptr);
    // Check if pointer is not nullptr
    bool can_remove = (entry_ptr != nullptr);
    if(can_remove)
    {
        // Copy data from first node to located node
        entry_ptr->setItem(head_ptr_->getItem());
        // Delete first node
        Node<T>* node_to_delete_ptr = head_ptr_;
        head_ptr_ = head_ptr_->getNext();
        // Return node to system
        node_to_delete_ptr->setNext(nullptr);
        delete node_to_delete_ptr;
        node_to_delete_ptr = nullptr;
        item_count_--;
    }
    return can_remove;
} // end remove

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
} // end toVector

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
} // end getFrequencyOf

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
} // end getPointerTo

template <class T>
void LinkedBag<T>::clear()
{
    Node<T>* node_to_delete_ptr = head_ptr_;
    while(head_ptr_ != nullptr)
    {
        head_ptr_ = head_ptr_->getNext();

        // Return node to the system
        node_to_delete_ptr->setNext(nullptr);
        delete node_to_delete_ptr;

        node_to_delete_ptr = head_ptr_;
    }
    item_count_ = 0;
} // end clear