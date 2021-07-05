#include <iostream>
using std::cout; using std::endl;
#include <algorithm>
using std::copy;
#include <iterator>
using std::ostream_iterator;

void print_array(int * array, size_t size) {
    
    for (int i =0; i<size; i++)
    {
    // write out elements of our array
    cout << array[i] << "  ";
    }
    cout << endl;
    // Or
    // copy(array, array + size, ostream_iterator<int>(cout, " "));
}

void double_size(int * (&array), size_t & size) {
    // double the size of the array
    size_t new_size = size * 2; // Double Size
    int * array2 = new int[new_size]{};         // new Keyword Create new array
    copy(array, array + size, array2); // Copy elments of array1 to array2
    size = new_size;        // Update Size
    delete [] array;  // delete Keyword
    array = array2;         
}

int main() {
    const size_t size = 2;
    int * array = new int[size];
    array[0] = 9;
    array[1] = 7;
    cout << "Original Array: " << endl;
    print_array(array, size);

    size_t new_size = size + 1;
    int * array2 = new int[new_size]{};
    copy(array, array + size, array2); // Copy elements of array1 to array2

    // Never use array after this point, so delete
    delete [] array;

    cout << "Array after increasing the size by 1: " << endl;
    print_array(array2, new_size);
    cout << "Array after adding new element: " << endl;
    array2[2] = 3;
    print_array(array2, new_size);

    // Using Double function
    cout << "Double!" << endl;
    double_size(array2, new_size); 
    // Print out our doubled array:
    print_array(array2, new_size);
    delete [] array2;
}


 