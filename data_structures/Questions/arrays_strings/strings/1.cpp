#include<iostream>
using std::cout;
using std::endl;
#include<string>
using std::string;
#include<vector>
using std::vector;

string reverseWords(string str){

    vector<string> temp;

    // loop thru str and removed word
    int ptr0 = 0;  // track of the index
    int ptr1 = 0;   // track of length of the string

    for (int i = 0; i < str.length(); i++ )
    {
        // Start both pointers at the beginging of the loop in the string

        if (str[i] != '.')
        {
            ++ptr1;
        }   
        else {
        
            temp.push_back(str.substr(ptr0,ptr1));
            // update ptr indexes: set ptr0 to ptr
            ptr0 = i + 1;
            ptr1 = 0; // update length to zero
        }
        // add last wor
    }
    temp.push_back(str.substr(ptr0,ptr1)); // add last element
    string reverse;

    // Find Size of the temp vector
    int temp_size = temp.size()-1;

    for (int i = temp_size; i >= 0; i-- )
    {
        // add to reverse string and add "."
        reverse += temp[i];
        reverse += ".";
    }

    return reverse;

}



int main(){

    string pass = "i.like.this.program.very.much";

    cout << reverseWords(pass) << endl;

}