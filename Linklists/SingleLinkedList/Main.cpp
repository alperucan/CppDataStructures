#include <iostream>
#include "LinkedList.h"

int main()
{
    LinkedList<int>* myList1 = new LinkedList<int>(1);
    myList1->getLength();
    LinkedList<int>* myList2 = new LinkedList<int>();
    myList2->getLength();
    delete myList2;
    return 0;
 

}
