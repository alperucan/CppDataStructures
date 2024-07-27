#include <iostream>
#include "Stack.h"

int main()
{
    Stack<int> stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.print();
    std::cout << "Stack size = " << stack.getSize() << std::endl;

    stack.pop();
    stack.print();
    std::cout << "Stack size = " <<  stack.getSize() << std::endl;

    stack.pop();
    stack.print();
    std::cout << "Stack size = " <<  stack.getSize() << std::endl;

    stack.pop();
    stack.print();
    std::cout << "Stack size = " <<  stack.getSize() << std::endl;

   
    return 0;


}