
#include <iostream>
using std::cout;
using std::endl;


void Increment(int *p)
{
    *p = *p + 1;
}
int main()
{
   int a;
   a = 10;
   Increment(&a);

   cout << "a = " << a << endl;
}



