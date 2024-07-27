#include <iostream>

template <typename T> 

class myNode{ 
    public: 
        T data;
        myNode<T> *next;

        myNode()
        {
            data = NULL;
            next = nullptr;
        }
        myNode(T data)
        {
            this->data = data;
            this->next = nullptr;
        }
        ~myNode()
        {
            delete data;
            delete next;
        }
};
