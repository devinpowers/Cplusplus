/* 
        Bubble Sort

        Time Complexity: O(n^2)

*/



#include <iostream>

using std::cout;
using std::endl;

void swap(int *xpoint, int *ypoint) 
{   // Swap the int
    int temp = *xpoint; 
    cout << "temp: " << temp << endl;
    *xpoint = *ypoint; 

    cout << "xpoint: " << *xpoint << endl;

    *ypoint = temp; 
        cout << "ypoint: " << *ypoint << endl;

} 
  
void BubbleSort(int arr[], int size) 
{
    for (int i = 0; i < size-1; i++)
    {
        //cout << i << ": " << arr[i];
        for (int j = 0; j < size-i-1; j++) {
           // cout << " j: " << j << " -> " << arr[j] << endl;
            if (arr[j] > arr[j+1]) {

                // Send two int to swap function
                swap(&arr[j], &arr[j+1]); 

            } 
        }
    }     
} 
  
void PrintArray(int arr[], int size) 
{ 
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " "; 
    } 
    cout << endl; 
} 
  
int main() 
{ 
    int arr[] = {2, 8, 5, 3, 9, 4, 1}; 
    int size = sizeof(arr)/sizeof(arr[0]); 
    cout << "Array before being sorted: ";
    PrintArray(arr, size);
    BubbleSort(arr, size); 
    cout<<"Sorted array using Bubble Sort: "; 
    PrintArray(arr, size); 
     
} 

