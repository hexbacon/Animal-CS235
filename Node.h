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
#include "Node.cpp"
#endif //ANIMAL_NODE_H
