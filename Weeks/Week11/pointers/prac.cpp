
#include <iostream>

using std::cout;
using std::endl;

// What is the Difference Between Pass By Value, Pass By Reference, and Pass By Pointer, C++

// Functions
void passByVal(int val);   // passing in a copy of an integer
void passByRef(int & ref); // Pass in the actual variable
void passByPtr(int *ptr);  // pass by pointer


int main() {

    // Pass by variable    
    int x = 5;
    cout << "x = " << x << endl;
    passByVal(x);
    cout << "x = " << x << endl;

    // Pass by Reference

    int y = 10;
    passByRef(y);
    cout << "y = " << y << endl;

    // Pass by Pointer
    
    int c = 10;

    int* cptr = &c; // pointer, reference to c
    cout << "c = " << c << endl;
    cout << "*cptr = " << *cptr << endl;
    cout << "cptr (address) = " << cptr << endl;

    passByPtr(cptr);

    cout << "c = " << c << endl;
    cout << "*cptr = " << *cptr << endl;
    cout << "cptr (address) = " << cptr << endl;

    
}

void passByVal(int val)
{
    // pass a copy of the integer we provided
    val = 10;
    cout << "val = " << val << endl;
}

void passByRef(int & ref)
{
    ref = 20;
    cout << "ref = " << ref << endl;
}

void passByPtr(int * ptr)
{   
    // reference the pointer we passed in
    *ptr = 30;

    cout << "*ptr = " << *ptr << endl;
    cout << "ptr (address) = " << ptr << endl;
}


