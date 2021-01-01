
#include<iostream>
using std::cout; using std::endl; using std::endl;

#include<vector>
using std::vector;

#include<string>
using std::string;

int main(){

   vector<char> v_char{'a', 'b', 'c', 'd'};
   cout << "Size of Char Vector is: " <<  v_char.size() << endl;
   cout << "Capacity of Char Vector is: " << v_char.capacity() << endl;
   v_char.clear();

   cout << "Char Vector Size after Empty: " << v_char.size() << endl;
   cout << "Char Vector Capacity after Empty: " << v_char.capacity() << endl;


   for (int i=0; i<10; ++i)
   {
       v_char.push_back( static_cast<char>('a' + i) );
   } 
   // print after we added elements
    for(auto element : v_char)
   {
        cout << element << ":";
   }

  cout << endl; // end line


   cout << "Char Vector Size: " << v_char.size() << endl;
   cout << "Char Vector Capacity: " << v_char.capacity() << endl;
  

   // access
   cout << "Char at 9th: " <<  v_char.at(9) << endl;
   cout << "Char at 10th: " << v_char[10] << endl;

   // Change element
   v_char.at(9) = 'z';

   cout << "Char at 9th is now: " << v_char.at(9) << endl;


    // print, range-based for
   for(auto element : v_char)
   {
        cout << element << ":";
   }

  cout << endl; // end line

}



