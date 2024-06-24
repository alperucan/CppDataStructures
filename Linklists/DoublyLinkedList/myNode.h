#ifndef NODE_H
#define NODE_H

template <typename T>
class myNode {
public:
    T data;
    myNode<T>* next;
    myNode<T>* prev;

    myNode();
    myNode(T data);
};
template <typename T>
myNode<T>::myNode() : data(T()), next(nullptr), prev(nullptr){}

template <typename T>
myNode<T>::myNode(T data) : data(data), next(nullptr), prev(nullptr){}

#endif // NODE_H