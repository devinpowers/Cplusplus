

#include <string>
#include <iostream>
using namespace std;
 
int main () {
   // Local variable declaration:

   
   string names = "devin Powers";

   // while loop execution

   int i = 0;

   while( i < names.length()) {

      cout << "index: " << i <<  names[i] << endl;
   }

   cout << names[3] << endl;
 
   return 0;
}