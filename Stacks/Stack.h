#ifndef STACK_H
#define STACK_H

#include "myNode.h"
#include <iostream>

template <typename T>
class Stack
{
    public:
        myNode<T>* top;

        Stack();
        ~Stack();
        void push(T data);
        void print();
        T pop();
        int getSize() const;
        
    private:
        int size;
};

template <typename T>
Stack<T>::Stack() : top(nullptr), size(0) {}

template <typename T>
Stack<T>::~Stack() { delete top;}

template <typename T>
void Stack<T>::push(T data)
{
    myNode<T> *newNode = new myNode<T>(data);
    newNode->next = top;
    top = newNode;
    size++;

}

template <typename T>
T Stack<T>::pop()
{
    if(top == nullptr)
    {
        throw std::invalid_argument("Stack is empty");
    }
    T data = top->data;
    top = top->next;
    size--;

    return data;

}

template <typename T>
int Stack<T>::getSize() const{ return size ; }

template <typename T>
void Stack<T>::print()
{
    myNode<T>* current = top;
    while (current != nullptr) {
        std::cout << current->data << " -> ";
        current = current->next;
    }
    std::cout << "null" << std::endl;
}

#endif // STACK_H