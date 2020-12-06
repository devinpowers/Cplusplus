

#include <iostream>

using namespace std;

int main () 

{
    double x;
    double y;

    x = 10;
    (y = x) = 100; // y = x; then y = 100

    cout << x << "\t" << y << endl;
}

