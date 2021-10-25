#include <iostream>

using std::endl;
using std::cout;

void swap(int *xp, int *yp){

    int temp  = *xp;
    *xp = *yp;
    *yp = temp;

    // Swapping addresses and shit

}


void bubble_sort(int arr[], int size){

    for (int i = 0; i < size-1; i++){
    //    cout << "Current i: " << i << endl;
        for (int j = 0; j< size-i+1; j++) {

        //    cout << "Current j: " << j << endl;
            if (arr[j] > arr[j+1]){
                
                // Call a function to swap!!

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


int main(){

    // Create an Arry

    int arr[] = {2, 8, 5, 3, 9, 4, 1, 69, 90, -2, 8, 10, 34}; 
     
    int size = sizeof(arr)/sizeof(arr[0]); 
    cout << "Array before being sorted: ";
    PrintArray(arr, size);
    bubble_sort(arr, size); 
    cout<<"Sorted array using Bubble Sort: "; 
    PrintArray(arr, size); 


}
