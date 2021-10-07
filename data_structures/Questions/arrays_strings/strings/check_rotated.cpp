/*
    check if a string is rotated by two place
    Example:
    a = amazon
    b = azonam

*/

#include <string>
using std::string;
#include <vector>
using std::vector;
#include <iostream>
using std::cout;
using std::endl;

using std::boolalpha;

// Function to rotate string two spots

string rotate_string(string str )
{
    string str1 = str.substr(str.length()-2,str.length());

    string str2 = str.substr(0, str.length()-2);

    // combine and return string
    string rot_str = str1 + str2;   
    return rot_str;
}

bool check_equal(string str1, string str2){
    // pass in two strings and check if they're equal

    if (str1 == str2)
    {
        return true;
    }
    else{
        return false;
    }
}


int main(){


    string str = "amazon";
    string str2 = "azonam";

    cout << boolalpha << check_equal(rotate_string(str),str2) << endl;
}

