/*

Longest Substring Without Repeating Characters!!!!!!

https://leetcode.com/problems/longest-substring-without-repeating-characters/

Example 1: 

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.

Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.

Example 3:

    Input: s = "pwwkew"
    Output: 3
    Explanation: The answer is "wke", with the length of 3.
    Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.

Example 4:

    Input: s = ""
    Output: 0


*/

#include <iostream>
using std::cout;
using std::endl;
#include<string>
using std::string;
#include<vector>
using std::vector;

string check_length(string str2 ){

    string temp;

    if (str2.length() > temp.length())
    {
        //update string
        temp = str2;
    }

     return temp;
}

string longestSubstring(string str ){
    // find longest substring
    string longest_;
    string temp_; // temp string size
    vector<bool> known_(128); // vector<bool> = <true, true, t
    int ptr0 = 0; // begin index
    
    for (int i = 0; i < str.length(); i++)
    {
        int value = str[i];

        if (known_[value]){
            // value is already in our vector so
            // add to known_ vector
           //  check_length(str.substr(ptr0, i-ptr0)); // send phrase to check (i-1) = length of substring

            temp_ = check_length(str.substr(ptr0, i-ptr0));
            if (temp_.length() > longest_.length()){
                // replace/update
                longest_ = temp_;
            }

            // Clear our Vector
            known_.clear();
            // reset postion of index
             ptr0 = i;
        }
        // else add
        known_[value] = true;
    }

    return longest_;
}

int main() {

    string phrase ="abcabcbb";
    string phrase2 = "pwwkeaigdwwfwsbawddshsdwwrgfrwwosjwweessddwdlmrtefddncewqw";
    string phrase3 = "bbbbbbbbbbbbbbbbbb";
    string phrase4 = "";



    string longestsub = longestSubstring(phrase);
    string longestsub2 = longestSubstring(phrase2);
    string longestsub3 = longestSubstring(phrase3);
    string longestsub4 = longestSubstring(phrase4);


    cout << "For the Phrase " << phrase <<  " ;The longest substring is: " << longestsub <<  " with the size: " << longestsub.size() <<endl;
    cout << "For the Phrase " << phrase2 << " ;The longest substring is: " << longestsub2 <<  " with the size: " << longestsub2.size() <<endl;
    cout << "For the Phrase " << phrase3 << " ;The longest substring is: " << longestsub3 <<  " with the size: " << longestsub3.size() <<endl;
    cout << "For the Phrase " << phrase4 << " ;The longest substring is: " << longestsub4 <<  " with the size: " << longestsub4.size() <<endl;


}