#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include<string>
using std::string;
#include <bitset>
#include<algorithm>
using std::find;



bool check_string(string str){
    
    // Check Yes or NO 
    // Leave me alon
    boolean[] char_set = new boolean[128];

    for (int i = 0; i <str.length(); i++ )
    {
        int value = str.charAt(i);
        if (char_set[value]){
            return false;
        }
        char_set[value] = true;

    }
    return true;


    
}


int main()
{
    string check;
    cout << "INput a string to check if there is a duplicate Char: ";

    cin >> check;

    // send string to check to our function to check

   check_string(check);

}