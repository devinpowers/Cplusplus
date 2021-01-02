

#include<iostream>
using std::cout; using std::endl; using std::endl;

#include<vector>
using std::vector;

int main(){

    // initize a vector
    vector<char> v_char{};

    // add a,b,c,d,... to vector
    for (int i=0; i<10; ++i)
   {
       v_char.push_back( static_cast<char>('a' + i) );  
       cout << ('a' + i) << endl;
   } 
   // printing vector using for loop

   for(auto element : v_char)
   {
        cout << element << ":";
   }

   cout << endl; // end line


    return 0;
}


