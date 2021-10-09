#include<iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;
#include <vector>
using std::vector;


void print_vector(vector<string> vec1){

    for (auto element : vec1 ){

        cout << element << endl;
    }
}


void long_rep_char(string &str, int k){
    // Return longest repeating character replacement
    // k = 2
    // Can pick "ANY" character I want

    string temp = str;

    int k_f = k; // k_f = 2; // Holds the number of times we can use our replacement character

    char ch = str[0]; // Character I picked, which is just the first one!!!!!

    vector<string> vec;

    for (int i = 0; i < str.length(); ++i){
        
        if (str[i] != ch && k_f != 0){ // if currently isnt equal to our replace char AND k_f isn't 0!!!! -> Replace Character
            str[i] = ch;
        }
        cout << "out " << endl;

    
    }
}


int main(){

    string str1 = "AABABBA";
    int k_num = 1;
    long_rep_char(str1, k_num);
}