#include<iostream>

using namespace std;

void display(int *array, int size){
    for(int i = 0; i <size; i++ ){
        cout << array[i] << " ";
    }
    cout << endl;
}

void InsertionSort(int *array, int size){
    int key, j;
    for (int i = 1; i <size; i++ ){
        key = array[i];
        j = i;
        while (j > 0 && array[j-1] > key){
            array[j] = array[j-1];
            j--;
        }
        array[j] = key; // insert into correct position
    }
}

int main()
{

    array [] = {2,3,4,5,2,10,20,69,420};
    int size = 9;

    InsertionSort(ar, size);
}