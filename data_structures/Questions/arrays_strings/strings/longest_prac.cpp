#include <iostream>
using std::cout;
using std::endl;
#include<string>
using std::string;
#include<vector>
using std::vector;

void longestSubstring(string &str ){
    // find longest substring

    vector<bool> known_(128); // vector<bool> = <true, true, t
   // int ptr0 = 0; // begin index
    
    for (int i = 0; i < str.length(); i++)
    {
        int value = str[i];

        if (known_[value]){
            
           cout << str.substr(0, 1) << endl; 
            // Clear our Vector
           // known_.clear();
            // reset postion of index
            // ptr0 = i;
        }
        // else add
        known_[value] = true;
    }
}

int main() {

    string phrase ="pwwkew";

    longestSubstring(phrase);
}