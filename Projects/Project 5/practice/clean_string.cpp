#include <iostream>
using std::cout; using std::cin; using std::endl;
#include<string>
using std::string;


const string alphabet = "abcdefghijklmnoprstuvwxyz"; //without 'q'


string clean_string (string s) 

{
    // Function will lower any Char and remove empty spaces
    string clean_string = "";

    for ( int i = 0; i < s.length(); i++)
    {
        if (s[i] != ' ')
        {          
            clean_string += tolower(s[i]); // lowers and cleans string ifthere is a space!
        }
    }
    return clean_string;


}

int main()
{

    //call the clean_string function
    string str1 = "Dev IN PoW Ers";

    string str2;

    str2 = clean_string(str1);
    cout << "Clean string: " << str2 << endl;

}
