#include <stdio.h>
#include <iostream>

// 21 5 11 13 12 -21

// iteration 1 : 5 21 11 13 12 -21
// iteration 2 : 5 11 21 13 12 -21
// iteration 3 : 5 11 13 21 12 -21
// iteration 4 : 5 11 12 13 21 -21
// iteration 5 : -21 5 11 12 13 21


int* insertionSort(int arr[],int n);
void printArr(int arr[],int n);
int main()
{

    int arr[] = {21,5,11,13,12,-21};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr,n);
    printArr(arr,n);

    return 0;
}

int* insertionSort(int arr[],int n)
{
    for(int i = 1 ; i < n ; i++)
    {
        int key = arr[i]; 
        int j = i - 1; 

        while(j >= 0 && key < arr[j])
        {
            arr[j+1] = arr[j]; 
            j = j - 1 ;     
        }
        arr[j+1] = key; 
    } 
 
    return arr;
}

void printArr(int arr[],int n)
{

    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
}