
#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

void print(const char *C)
{
    // C[0] = 'A'; // Change value in Array
    while(*C != '\0')
    {
        cout << "C: " << *C << endl;
        C++; 
    }
    cout << endl;
}

int main()
{
    char C[20] = "Hello";
    print(C);   
}

