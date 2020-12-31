#include <iostream>

using namespace std;


int main() {

    int a = 5;
    int *b = &a;

    int c = *b;

    cout << "Address of Shit: " << endl;

    cout << "C Address: " << &c << endl;
    cout << "b Address: " << &b << endl;
    cout << "a Address: " << &a << endl;


}

