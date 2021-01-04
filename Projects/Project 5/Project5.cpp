
#include <cstring>
#include <cstdio>
#include <cctype>
#include<iostream>
using std::cout; using std::cin; using std::endl;
#include<string>
using std::string;



string clean_string (string s)
{
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



int main() {

    string s = "Hello World My Name iS DevIn";



    cout << "Our Original String here: " << s << endl;
    // call function clean string to clean out string

    cout << "Our OG String cleaned: " << clean_string(s) << endl;


}