


#include <iostream>

using std::cout;
using std::endl;

// What is the Difference Between Pass By Value, Pass By Reference, and Pass By Pointer, C++

void passByVal(int val);
void passByRef(int & ref);
void passByPtr(int * ptr);


int main() {

    int x = 5;
    cout << "x = " << x << endl;
    passByVal(x);

    return 0;
    
}

void passByVal(int val)
{
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

    cout << "ptr = " << endl;

}
