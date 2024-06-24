#include <iostream>

template <typename T> 

class myNode{ 
    public: 
        T data;
        myNode<T> *next;
        myNode<T> *prev;

        myNode()
        {
            data = NULL;
            next = nullptr;
            prev = nullptr;
        }
        myNode(T data)
        {
            this->data = data;
            this->next = nullptr;
            this->prev = nullptr;
        }
        
};
