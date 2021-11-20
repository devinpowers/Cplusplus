/*
    Question 3: URLify: write a method to replace all spaces in a string with '%20

    Example:

    input: "Mr John Smith   ", 13
    output: "Mr%20John%20Smith"

    You can assume that you're given extra space at the end and you're given the length of the "true" length of the string


  Question 6: Write a method to replace all spaces in a string with '%20'. You may assume that the string has
    sufficient space at the end to hold the additional characters, and that you are given the "true" length of
    the string.

    
*/


#include <iostream>
using std::cout;
using std::endl;
#include<string>
using std::string;


string change_string(string str, int length_str)
{
    string new_string = "";
 
    for(int i = 0; i < length_str; ++i)
    {
        if (str[i] == ' ')
        {  
            new_string += "%20";         
        }
        else {
            new_string += str[i];
         }
    }
    return new_string;
}


int main(){
        cout << endl;
        string phrase = "Mr John Smith";
        int true_len1 = 13;
        cout << "Before URLifying String: " << phrase << endl;

        cout << change_string(phrase, true_len1) << endl;
        int true_len2 = 19;

        string phrase2 = "Mr. Devin J. Powers";
        cout << "Before URLifying String: " << phrase2 << endl;
        cout << change_string(phrase2,true_len2) << endl;
        cout << endl;
 }