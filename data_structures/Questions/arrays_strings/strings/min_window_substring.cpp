#include<iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;
#include <vector>
using std::vector;



void check_min_string(string str1 ){

    //
    cout << str1 << endl;
}


void minWindowSubstring( string str, string t) {

    vector<char> temp_t; //

    // insert t into vector of char
    for (int i =0; i< t.length(); ++i){
        temp_t.push_back(t[i]);
    }

    // Now we can use our "temp_t" vector to check if ourrec

    for (int i =0; i < str.length(); ++i){
        // we can check  for duplicate
    }


}

int main(){

    string prac = "jhsflfl";
    string t = "abc";

    minWindowSubstring(prac, t);

    
}