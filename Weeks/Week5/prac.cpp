

#include <iostream>

using namespace std;


int main() {

    int AnArray[20];
    int* plocation6;
    int* plocation0;
    plocation6 = &AnArray[6];
    plocation0 = &AnArray[0];

    cout << (int)plocation6 << endl; 

    cout << (int)plocation0<<endl;

    cout << "Difference   " << plocation6 - plocation0 << endl;
    

}
