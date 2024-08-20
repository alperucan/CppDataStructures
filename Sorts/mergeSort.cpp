#include <iostream>


void mergeSort(int arr[], int leftIndex, int rightIndex);
void printArr(int arr[],int n);
void merge(int arr[], int leftIndex, int midIndex, int rightIndex);
int main()
{
    int arr[] = {21,5,11,13,12,-21};
    int n = sizeof(arr) / sizeof(arr[0]);
    int leftIndex = 0 ;
    int rightIndex = n-1;



   
    mergeSort(arr,leftIndex,rightIndex);
   
    for (auto value: arr)
    {
        std::cout << value << " ";
    }

    return 0;


}

void merge(int arr[], int leftIndex, int midIndex, int rightIndex)
{
    int leftArraySize = midIndex - leftIndex + 1;
    int rightArraySize = rightIndex - midIndex;

    
    int* leftArray = new int[leftArraySize];
    int* rightArray = new int[rightArraySize];

    //copy the elements from main array to left and right arr
    for(int i = 0; i < leftArraySize ; i++ )
        leftArray[i] = arr[leftIndex + i];
    for(int j = 0; j < rightArraySize ; j++ )
        rightArray[j] = arr[midIndex + 1 + j];

    // index is point to main array
    int index = leftIndex;
    // i is left array pointer, j is the right array pointer
    int i = 0 ;
    int j = 0 ;

    while(i < leftArraySize && j < rightArraySize)
    {
        if( leftArray[i] <= rightArray[j] )
        {
            arr[index] = leftArray[i];
            index++; // move main array pointer 
            i++; // move left array pointer
        }
        else
        {
            arr[index] = rightArray[j];
            index++; // move main array pointer 
            j++; // move right array pointer
        }

    }
    //Copy the remains elements from left or right array
    while(i < leftArraySize)
    {
        arr[index] = leftArray[i];
        index++;
        i++;
    }
    while(j < rightArraySize)
    {
        arr[index] = rightArray[i];
        index++;
        j++;
    }

    delete[] leftArray;
    delete[] rightArray;

}

void mergeSort(int arr[], int leftIndex, int rightIndex)
{
    if (leftIndex >= rightIndex) return;
    int midIndex = leftIndex + (rightIndex - leftIndex) / 2;
    mergeSort(arr,leftIndex,midIndex);
    mergeSort(arr, midIndex + 1 , rightIndex);

    merge(arr,leftIndex, midIndex, rightIndex);
    
 
}

void printArr(int arr[],int n)
{

    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
}