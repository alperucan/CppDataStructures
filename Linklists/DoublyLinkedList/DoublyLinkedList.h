#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

#include "myNode.h"
#include <iostream>


template <typename T>
class DoublyLinkedList
{
    public:
        myNode<T>* head;
        myNode<T>* tail;

        
        DoublyLinkedList();
        void push(T data);
        void printList();
        void append(T data);
        void insertAfter(myNode<T>* prev_node, T data);

        int getSize() const;
        
    private:
        int size;
    
};

template <typename T>
DoublyLinkedList<T>::DoublyLinkedList() : head(nullptr), tail(nullptr) {}

// Add data to front of linkedList
template <typename T>
void DoublyLinkedList<T>::push(T data)
{
    myNode<T>* newNode = new myNode<T>(data);
    if(head==nullptr)
    {
        head = tail = newNode;
        size++;
    }
    else{
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        size++;
    }

}

//Add data to end of list
template <typename T>
void DoublyLinkedList<T>::append(T data)
{
    myNode<T>* newNode = new myNode<T>(data);
    if(tail==nullptr)
    {
        head = tail = newNode;
        size++;
    }
    else{
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
        size++;
    }

}

//Add data to after given node
template <typename T>
void DoublyLinkedList<T>::insertAfter(myNode<T>* prev_node, T data )
{
   //check given prev_node is null
   if(prev_node == NULL)
   {
        std::cout << "the given previous node cannot be NULL " << std::endl;;
        return;
   }
    if(prev_node == tail)
    {
        append(data);
        return;
    }
    // 1. Create Node
    myNode<T>* newNode = new myNode<T>(data);
    
    // 2. make newNode-> next to prev_node->next;
    newNode->next = prev_node->next;

    // 3. make prev_node->next to newNode;
    prev_node->next = newNode;

    // 4. make newNode->prev's to prev_node 
    newNode->prev = prev_node;
   
    // 5. Change previous of new_node's next node
    if(newNode->next != NULL){
        newNode->next->prev = newNode;
    }
    size++;
     
}

template <typename T>
void DoublyLinkedList<T>::printList() {
    myNode<T>* current = head;
    while (current) {
        std::cout << current->data << " -> ";
        current = current->next;
    }
    std::cout << std::endl;
}

template <typename T>
int DoublyLinkedList<T>::getSize() const{ return size ; }

#endif // DOUBLYLINKEDLIST_H
