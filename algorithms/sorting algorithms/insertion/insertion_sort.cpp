/*
    Insertion Sort Algorithm

    Time Complexity: O(n^2)

    We can see the nested for loop
    slowwww

*/

#include <iostream>
using std::cout; using std::endl;

void insertionSort(int arr[], int size)   // or int *array
{   
    int key, j, i;

    for (i = 1; i < size; i++ )
    {
        // i starts on 2nd index (right of the 1st value)

        key = arr[i];
        // Key is the value we will compare to the left value 
        j = i - 1; // Value to Compare key with
        
        while (j >= 0 && arr[j] > key)
        {
            cout << "arr[j]: " << arr[j] << endl;
            cout << "key: " << key << endl;
            arr[j+1] = arr[j]; // "swap"
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
    int arr[] = { 12, 3, 5, 10, 8, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << endl;
    cout << "Before Insertion Sort n: \n";
    PrintArray(arr, n);
    cout << endl;

    cout << "After insertion: \n";
    insertionSort(arr, n);

    PrintArray(arr, n);
    cout << endl;
}





 