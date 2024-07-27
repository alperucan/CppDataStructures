#ifndef NODE_H
#define NODE_H

template <typename T>
class myNode {
public:
    T data;
    myNode<T>* next;

    myNode();
    myNode(T data);
};
template <typename T>
myNode<T>::myNode() : data(T()), next(nullptr){}

template <typename T>
myNode<T>::myNode(T data) : data(data), next(nullptr){}

#endif // NODE_H