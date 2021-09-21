

#include <iostream>
using std::cout;
using std::endl;
#include<algorithm>
using std::copy; using std::sort; using std::transform;
#include<iterator>
using std::ostream_iterator; using std::begin; using std::end;

int main()
{
    const size_t size = 5;

    int arr[size]{8,5,6,7,4};

    int *pointer_array_front = arr;          
    int *pointer_array_back = arr+size;

    cout << "Front Pointer: " << pointer_array_front << endl;
    cout << "Front Value: " << *pointer_array_front << endl;
    cout << "One Past End Pointer: " << pointer_array_back << endl;
    cout << "Back Value: " << *pointer_array_back << endl;

    // Array Pointer is an iterator

    sort(pointer_array_front, pointer_array_back);

    copy(pointer_array_front, pointer_array_back, ostream_iterator<int>(cout, ", "));

    cout << endl; 
}