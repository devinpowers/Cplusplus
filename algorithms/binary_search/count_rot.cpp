#include <iostream>
using std::endl;
using std::cout;

int countRotations(int arr[], int n){

    int min = arr[0], min_index;

    for (int i =0; i < n; i++){
        if (min > arr[i]){
            min = arr[i];
            min_index = i;
        }
    }

    return min_index;
}

int main(){

    int A[] = {11,12,2,3,5,8};
    int n = sizeof(A)/sizeof(A[0]);

    int count = countRotations(A,n);

    cout << "The array is roatated: " << count << endl;
}