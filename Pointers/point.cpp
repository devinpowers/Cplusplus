
#include <iostream>
using std::cout;
using std::endl;



int main()
{
   struct sSomeObject
   {
       int x = 0xA3A2A1A0;
       int y = 0xB3B2B1B0;
   };

   // Stack Allocation (Compile Time)
   sSomeObject pSomeObject[10];

   // Heap (Run Time)

   sSomeObject *pSomeObject = new sSomeObject[10];

   cout << endl;
   return 0;

}



