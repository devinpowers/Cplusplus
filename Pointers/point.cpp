#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int a = 10;
    int *p;
    p = &a;

    // Pointer Arithmetic
    cout << "Address p is: " << p << endl;
    cout << "Value of address p is : " << *p << endl;
    cout << "Size of integer is : n =  " << sizeof(int) << endl;
    cout << "Address of p+1 is: " << *(p+2) << endl;

}