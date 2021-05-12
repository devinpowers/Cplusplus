#include <iostream>
using std::cout;
using std::endl;


int main() {

    const int y = 10;
    // cant change y
    cout << "y: " << y << endl;
    const int x = 23;

    cout << "x: " << x << endl;

    // lets change x

    x = 34;
    cout << "x: " << x << endl;

}