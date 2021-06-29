#include<iostream>

using std::cout;
using std::endl;

 
class Test {
    int value;
public:
    Test(int v = 0) 
    {
        value = v;}

    int getValue() {return value;}
};
 
int main() {
    // const Test t;
    Test t;

    cout << t.getValue() << endl;
    return 0;
}