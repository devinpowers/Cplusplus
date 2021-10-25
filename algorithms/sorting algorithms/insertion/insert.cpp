#include<iostream>
using std::endl;
using std::cout;


void insertionSort(int arr[], int n){
    // arr and n = size of the array

    int key, j;

    for (int i = 1; i <n; i++){
        key = arr[i];

        j = i - 1;

        while (j >= 0&& arr[j] > key){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}

void PrintArray(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){

    int arr[] = { 12, 3, 5, 10, 8, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << endl;

    cout << "Before Insertion Sort " << endl;
    PrintArray(arr, n);

    // Insertion Sort

    insertionSort(arr, n);

    cout << "After Insertion Sort " << endl;
    PrintArray(arr, n);


}