#include <iostream>
using std::cout;
using std::endl;
#include <vector>
using std::vector;



int binarySearch( int array[], int x, int low, int high){

  if (high >= low ){
    int mid = low + (high - low)/2;

  if (x == array[mid]){
    return mid;
  }
  if (x < array[mid]){
    return binarySearch(array, x, low, mid -1);
  }
  // x > A[mid]
  return binarySearch(array, x, mid +1, high);
  }
  return -1;
}

int main(){

  int arr[] = { 2,6, 14, 54, 98, 100, 120, 500};
  int x = 500;
  
  int n = sizeof(arr)/sizeof(arr[0]);
  int result = binarySearch(arr, x, 0, n-1);
  if (result == -1){
    cout << "Not Found " << endl;
  }
  else{
    cout << "Element is found at index: " << result << endl;
  }

}
