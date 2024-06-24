#include <iostream>
#include "DoublyLinkedList.h"

int main()
{
    DoublyLinkedList<int> list;
    list.push(1); // Liste: 1
    list.push(2); // Liste: 2 -> 1
    list.push(3); // Liste: 3 -> 2 -> 1
    list.printList(); // Çıktı: 3 2 1

    list.append(4); //Liste 3 -> 2 -> 1 -> 4
    list.append(5); //Liste 3 -> 2 -> 1 -> 4 -> 5

    list.printList(); // Çıktı: 3 2 1 4 5

    myNode<int>* secondNode = list.head->next; //listenin 2. elemanını işaret eder
    list.insertAfter(secondNode,6);
    list.printList(); // Çıktı: 3 2 6 1 4 5
    
    myNode<int>* lastNode = list.tail; //listenin sonundaki elemanını işaret eder
    list.insertAfter(lastNode,7);
    list.printList(); // Çıktı: 3 2 6 1 4 5 7

    myNode<int>* lastNode2 = list.tail; //listenin sonundaki elemanını işaret eder
    list.insertAfter(lastNode2,9);
    list.printList(); // Çıktı: 3 2 6 1 4 5 7 9
 
    list.append(11);
    list.printList(); // Çıktı: 3 2 6 1 4 5 7 9 11
    
    myNode<int>* lastNode3 = list.tail; //listenin sonundaki elemanını işaret eder
    list.insertAfter(lastNode3,10);
    list.printList(); // Çıktı: 3 2 6 1 4 5 7 9 11 10

    
    list.append(8);
    list.printList(); // Çıktı: 3 2 6 1 4 5 7 9 11 10 8

    return 0;


}