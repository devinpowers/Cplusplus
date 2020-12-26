#include<iostream>
using std::cout; using std::cin; using std::endl;
#include<iomanip>
using std::setprecision;
#include<string>
using std::string;




int main(){

    const string code = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

    string code2 = "+ab";

    string key = "";
    string value = "";

    key = code[1]     
    value = code[2]

    int multiplier;

    for (int a = 0; a < code.length(); a++)
    {
        if (code[a] == key )
        {
            multiplier = ( a + 4 );
        }
    }

    cout << "the value for " << multiplier << endl;
}


