
#include <iostream>

using namespace std;

int main () 
{
    int fact = 5; // keep a reference of the factorial
    int factorial = fact;

    for(int i = factorial - 1; i > 0; i-- )
    {
        factorial = factorial *i;
    }
    cout << "Factorial of " << fact << " is: " << factorial << endl;
    return 0;
}

