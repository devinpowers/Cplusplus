#include <iostream>
using namespace std;
 
/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int size)   // or int *array
{
    // Size is the size (length) of the size array
    int key, j;

    for (int i = 1; i < size; i++ )
    {
        key = arr[i];

        j = i - 1;
        
        while (j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j = j -1;
        
        }
        arr[j+1] = key;
    }



}
 





// A utility function to print an array of size n
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
 
/* Driver code */
int main()
{
    int arr[] = { 12, 11, 13, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printArray(arr, n);
    cout << "After insertion \n";
    insertionSort(arr, n);
    printArray(arr, n);
 
    return 0;
}