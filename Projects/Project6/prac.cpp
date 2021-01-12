
#include<iostream>
using std::cout; using std::cin; using std::endl;
#include<vector>
using std::vector; using std::iterator;
#include<string>
using std::string;




int main(){

    string b_string = "00000000000";

    long num = 100; // value to incode

    vector <long> vec{1,2,3,5,8,13,21,34,55,89,144}; // really will call for the function
    

    for ( int x = vec.size(); x > 0; x-- ){


        if (vec[x] <= num)
        {
            num -= vec[x];
            cout << "Number: " << num << endl;
            b_string[x] = '1';                   // replace 0 with 1 

        }
       
    }
     cout << "String encoded: " << b_string.substr(0,10) << endl;

    
  


}

   