#ifndef NODE_H
#define NODE_H

template <typename T>
class Node {
public:
    T value;
    Node<T>* next;

    Node();
    Node(T value);
};
template <typename T>
Node<T>::Node() : value(T()), next(nullptr){}

template <typename T>
Node<T>::Node(T value) : value(value), next(nullptr){}

#endif // NODE_H