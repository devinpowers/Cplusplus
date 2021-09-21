
#include <iostream>
using std::cout; using std::endl;
using std::cin;

int main()
{
    int number;
    cout << "Hello World" << endl;

    cout << "Input a Number: " << endl;

    cin >> number;

    cout << "THe number you inputted: " << number << endl;

    for (int i = 0; i < number + 1; i++)
    {
        cout << i << endl;
    }
    
}

