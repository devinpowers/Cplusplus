

#include<iostream>
using std::cout; using std::endl; using std::cin;

// Dynamic Arrays

int main(){

  // Main purpose is to allocate memory size of allocation in Bytes

  int size;
  cout << "Please enter a Size of an Array: ";
  cin >> size;

  int * myArray = new int [size]; // size that we enter

  for (int i =0; i<size; i++)
  {
    cout << "Array[" << i << "]";
    cin >> myArray[i];
  }
  for (int i =0; i<size; i++)
  {
    // write out elements of our array
    cout << myArray[i] << "  ";
   
  }
  delete[] myArray; // delete the memory that we allocated for our array
  myArray = NULL; // point to nothing, good practice

}





