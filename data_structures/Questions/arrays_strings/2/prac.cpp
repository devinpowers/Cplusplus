#include <iostream>
using std::cout;
using std::endl;
#include<string>
using std::string;
using std::boolalpha;
using std::sort;

bool check_strings(string str1, string &str2)
{
    // Check length of string
    if (str1.length() != str2.length())
    {
        return false;
    }
    // Sort strings and compare == equality
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    // Then just compare
    if (str1 == str2){
        return true;
    } 
    else
    {
        return false;
    }
}

int main()
{
    string one, two;
    one = "lleoH";
    two = "Hello";
    // check if two strings are anagrams

    cout << "Example One: ";
    cout << boolalpha << check_strings(one, two) << endl;

    string three,four;
    three = "hello";
    four = "heilo";
    cout << "Example Two: ";
    cout << boolalpha << check_strings(three, four) << endl;

}