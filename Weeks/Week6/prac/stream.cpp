
#include <iostream>
#include <sstream>
#include <string>
using std::ostringstream;
using std::string;
using std::cout;
using std::endl;
using std::boolalpha;
using std::stol;


int main() 
{ 
  
    // converting decimal number. 
    string dec_num = "9876543210"; 

    cout << dec_num + dec_num << endl;
    // convering 

    cout << "Lets convert!! " << endl;
 
    cout << "dec_num = " <<  stol(dec_num,nullptr,10) << "\n"; 

    // perform some operations on the long;

    cout << dec_num + dec_num << endl;


    
  

  } 
