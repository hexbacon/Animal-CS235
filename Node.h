//
// Created by Christopher Mena on 9/23/22.
//

#ifndef ANIMAL_NODE_H
#define ANIMAL_NODE_H
template <class T>
class Node
{
public:
    Node();
    Node(const T& an_item);
    Node(const T& an_item, Node<T>* next_node_ptr);
    void setItem(const T& an_item);
    void setNext(Node<T>* next_node_ptr);
    T getItem() const;
    Node<T>* getNext() const;
private:
    T item_;
    Node<T>* next_;
};

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

#endif //ANIMAL_NODE_H
