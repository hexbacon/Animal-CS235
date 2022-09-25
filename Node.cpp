//
// Created by Christopher Mena on 9/24/22.
//
#include "Node.h"

// Constructors
template <class T>
Node<T>::Node() : next_(nullptr)
{
}

template <class T>
Node<T>::Node(const T &an_item) : item_(an_item)
{
}

template <class T>
Node<T>::Node(const T &an_item, Node<T> *next_node_ptr) : item_(an_item), next_(next_node_ptr)
{
}

// Accessors
template <class T>
T Node<T>::getItem() const
{
    return item_;
}

template <class T>
Node<T>* Node<T>::getNext() const
{
    return next_;
}

// Mutators
template <class T>
void Node<T>::setItem(const T &an_item)
{
    item_ = an_item;
}

template <class T>
void Node<T>::setNext(Node<T> *next_node_ptr)
{
    next_ = next_node_ptr;
}