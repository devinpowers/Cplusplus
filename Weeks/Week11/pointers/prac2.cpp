

#include <iostream>

using std::cout;
using std::endl;

int main() {

    int* ptr; // create our pointer

    int var = 7;

    int foo = 21;

    ptr = &var;
    ptr = &foo;

    int& ref = var;


    cout << "ptr: " << ptr << endl;
    cout << "var: " << var << endl;
    cout << "foo: " << foo << endl;
    cout << "ptr value: " << *ptr << endl;

    cout << "ref: " << ref << endl;
 
}

