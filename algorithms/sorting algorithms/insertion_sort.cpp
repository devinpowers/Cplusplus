#include <iostream>
using std::cout; using std::endl;
 
 // Well the sorting algorith time complexity is O(n^2)
 // We can see the nested for loop

void insertionSort(int arr[], int size)   // or int *array
{
    // Size is the size (length) of the size array
    int key, j;

    for (int i = 1; i < size; i++ )
    {
        // i starts on 2nd index

        key = arr[i];
        // Key is the value we will compare to the left value 

        j = i - 1; // Value to Compare key with
        
        while (j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j = j - 1;  
        }
        arr[j+1] = key;
    }

}
 
void PrintArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
 
int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 1, 9,0};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    PrintArray(arr, n);
    cout << "After insertion \n";
    insertionSort(arr, n);
    PrintArray(arr, n);

}

