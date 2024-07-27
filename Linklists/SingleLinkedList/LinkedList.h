#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include "Node.h"

template <typename T>
class LinkedList
{
    private:
        Node<T>* head;
        Node<T>* tail;                
        int length;
    public:
        LinkedList(T value);
        LinkedList();
        void getLength();
};

//Initiliaze with a value!
template <typename T>
LinkedList<T>::LinkedList(T value)
{
    Node<T>* newNode = new Node<T>(value);
    head = newNode;
    tail = newNode;
    length = 1;
}
//Default Constructor
template <typename T>
LinkedList<T>::LinkedList() : head(nullptr), tail(nullptr),length(0) {}


template <typename T>
void LinkedList<T>::getLength(){ std::cout << length << std::endl;}

#endif // LINKEDLIST_H
