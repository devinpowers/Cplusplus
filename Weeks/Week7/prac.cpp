#include<string>
using std::string;
#include<vector>
using std::vector; 
#include<iostream>
using std::cout; using std::endl; 

int main() 
{ 
    // auto a; this line will give error 
    // because 'a' is not initialized at 
    // the time of declaration 
    // a=33; 
  
    // see here x ,y,ptr are 
    // initialised at the time of 
    // declaration hence there is 
    // no error in them 
    auto x = 4; 
    auto y = 3.37; 
    auto ptr = &x; 
    cout << typeid(x).name() << endl 
         << typeid(y).name() << endl 
         << typeid(ptr).name() << endl; 
  
    return 0; 
}