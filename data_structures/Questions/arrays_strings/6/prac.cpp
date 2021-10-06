#include <iostream>

using std::cout;
using std::endl;

#include <string>
using std::string;


int main(){

    string str = "aabbbccc";
    string compressed_string = "";

    int count = 1;
    
    for (int i = 1; i < str.length(); i++ ){

        if (str[i-1] == str[i]) {
            ++count;

        }
        else {
            compressed_string +=str[i-1]; // add char to compressed_string
            compressed_string += std::to_string(count); // add count number to string
            count = 1; // reset count
        }

    }
    // we go all the way to the end of the string length()
    compressed_string += str[str.length() - 1];
    compressed_string += std::to_string(count);


    cout << compressed_string << endl;

}

