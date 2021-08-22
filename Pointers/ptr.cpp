
#include <iostream>

using std::cout;
using std::endl;

void PrintHello(char *name)
{
    cout << "Hello World " << name << endl;
}

int Add (int a, int b)
{
    return a+b;
}

int main(){
   
   void (*ptr)(char*);
   ptr = PrintHello;
   // Can execute the function through the pointer
   ptr("Devin");

}

