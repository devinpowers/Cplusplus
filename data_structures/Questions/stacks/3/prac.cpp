#include<iostream>
using namespace std;

int g_test = 0;

int& getNumberReference()
{
     return g_test;
}

int getNumberValue()
{
     return g_test;
}

int main()
{
    int& n = getNumberReference();

    cout << "n: " << n << endl;
    int m = getNumberValue();
     cout << "m: " << m << endl;
     /*
     the getNumberReference() returns a reference, under the hood it's like a pointer
     that points to an integer variable. Any change applyed to the reference applies to
     the returned variable.
     */

    n = 10;

    cout << g_test << endl; // prints 10
    g_test = 0;
    m = 10;
    cout << g_test << endl; // prints 0
    return 0;
}

/*

https://stackoverflow.com/questions/2379859/in-c-what-does-mean-after-a-functions-return-type

Output:

        10
        0
*/
