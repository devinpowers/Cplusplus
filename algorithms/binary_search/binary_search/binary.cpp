
/*
      Binary Search in C++

      Assumption is that the array passed is sorted!!
*/

#include <iostream>
using std::cout;
using std::endl;

int binarySearch(int array[], int x, int low, int high) {

  // Current Values for high and low
  
  if (high >= low) {
    int mid = low + (high - low) / 2;

    cout << "**************" << endl;
    cout << "High: " << high << endl;
    cout << "Low: " << low << endl;
    cout << "Current Mid is: " << mid << endl;
    cout << "**************" << endl;

    // Case 1: if x == A[mid]
    if (x == array[mid])
    {
      cout << "Found!!" << endl;
      return mid;
    }
    // Case 2: x < A[mid]
    if (x < array[mid])
    {
      return binarySearch(array, x, low, mid - 1);
    }
    // x > A[mid]
    return binarySearch(array, x, mid + 1, high);
  }

  
  return 0;
}

int main(void) {
  int array[] = {2, 6, 13, 21, 36, 47, 63, 81, 97};
  int x = 13;
  int n = sizeof(array) / sizeof(array[0]);
  int result = binarySearch(array, x, 0, n - 1);
  if (result == -1)
    cout << "Not Found! " << endl;
  else
    cout << "Element is found at index: " << result << endl;
}



