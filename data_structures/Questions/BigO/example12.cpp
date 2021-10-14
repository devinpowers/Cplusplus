/*
	O(n) Runtime

*/
#include<iostream>
#include<string>
using std::string;

void permutation(string str){
    permutation(str, "");sys
    
}

void permutation(string str, string prefix){
    if (str.length() == 0){
        std::cout << prefix << std::endl;
    }
    else{
        for (int i = 0; i <str.length(); i++ ){
            string rem = str.substr(0, i) + str.substr(i+1);
            permutation(rem, prefix + str.charAt(i))
        }
    }
}