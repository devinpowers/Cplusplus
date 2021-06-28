
#include <iostream>

using std::cout;
using std::endl;

// What is the Difference Between Pass By Value, Pass By Reference, and Pass By Pointer, C++

// Functions
void passByVal(int val);   // passing in a copy of an integer
void passByRef(int & ref); // Pass in the actual variable
void passByPtr(int *ptr);  //


int main() {

    // Pass by variable    
    int x = 5;
    cout << "x = " << x << endl;
    passByVal(x);

    // Pass by Reference

    int y = 10;
    passByRef(y);
    cout << "y = " << x << endl;

    // Pass by Pointer
    
    int c = 10;

    int* cptr = &c;
    cout << "c = " << c << endl;
    cout << "*cptr = " << *cptr << endl;
    passByPtr(cptr);

    cout << "c = " << c << endl;
    cout << "*cptr = " << *cptr << endl;
    
    cout << "YES DEVIN OK BOOMER SOONER FOR THE TIME YOUR'E on t he" << endl;
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
    // reference the pointer we passed in d
    *ptr = 30;

    cout << "ptr = " << *ptr << endl;
}


