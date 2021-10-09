/*

Question: Longest Repeating Character Replacement

You are given a string s and an integer k.
You can choose any character of the string and change it to any other uppercase English character.
You can perform this operation at most k times.

Return the length of the longest substring containing the same letter you can get after performing the above operations.

*/

#include<iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;
#include <vector>
using std::vector;


string check_if_longest(string str1){

    string temp; // temp string that "holds" the largest

    if (str1.length() > temp.length()){
        temp = str1;
    }

    return temp;

}



string long_rep_char(string &str, int k){
    // Return longest repeating character replacement
    // k = 2
    // Can pick "ANY" character I want

    string temp;

    int k_f = k; // k_f = 2; // Holds the number of times we can use our replacement character

    char ch = str[0]; // Character I picked, which is just the first one!!!!!

    // Need pointers to keep track of indexes

    
    for (int i = 0; i < str.length(); ++i){
        
        if (str[i] != ch && k_f != 0){ // if currently isnt equal to our replace char AND k_f isn't 0!!!! -> Replace Character
            str[i] = ch;
            --k_f;    
        }
    }
    
    // Exit out of the loop that replaced the string with char, k times
    cout << str << endl;

    // keep track of indexes here!!

    // Pointers to track
    int ptr0 = 0;



    
    for (int i = 0; i < str.length(); ++i ){

        if (str[i] != ch){
            // send shit to check function

             temp = check_if_longest(str.substr(0, i - 1));
        }

       
    }


    return temp;
  




}

int main(){

    string str1 = "AABABBA";
    // 
    int k_num = 1;
    long_rep_char(str1, k_num);

}