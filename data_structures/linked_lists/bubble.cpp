#include <iostream>
using namespace std;

 
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)    
     
    // Last i elements are already in place
    for (j = 0; j < n-i-1; j++)
        if (arr[j] > arr[j+1])
            swap(&arr[j], &arr[j+1]);
}
 
/* Function to print an array */
void printArray(int arr[], int size)
{
    // EASY FUNCTION
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
 
// Driver code
int main()
{   
    int arr[] = {64, 34, 25, 12, 22, 11, 90,69,82,1,0,-5,19,34,67,2,0,-60,-1,10,19,82,34};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Array Before being Sorted" << endl;
    printArray(arr, n);
    bubbleSort(arr, n);
    cout<<"Sorted array after being Sorted: " << endl;
    printArray(arr, n);
    return 0;
}