
#include <iostream>

template <typename T> 
class Node
{

    public:
        T value;
        Node * next;

        Node(T value){
            this->value = value;
            this->next = nullptr;
        }
};