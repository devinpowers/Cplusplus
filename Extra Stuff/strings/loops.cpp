
#include <iostream>
#include <string>

using namespace std;

int main () 
{
   string sentence = "Hello my name is Devin";

   for (int i = 0; i < sentence.size(); i++ )
   {
       if (sentence[i] == 'o')
       {
           continue;
       }
       cout << sentence[i] << endl;
       
   }
   cout << "Done!\n";
}



