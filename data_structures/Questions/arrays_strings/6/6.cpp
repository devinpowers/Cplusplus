#include <string>
using std::string;
#include <vector>
#include <iostream>

using std::cout;
using std::endl;


string compress_string(string &str ){

	string compressed_string = "";

    int count = 1;
    
    for (int i = 1; i < str.length(); i++ ){

        if (str[i-1] == str[i]) {
            ++count;

        }
        else {
			cout << "Count: " << count << endl;
            compressed_string +=str[i-1]; // add char to compressed_string
            compressed_string += std::to_string(count); // add count number to string
            count = 1; // reset count
        }

    }
	cout << "Count: " << count << endl;
    // we go all the way to the end of the string length()
    compressed_string += str[str.length() - 1]; // add last char to compressed_string
    compressed_string += std::to_string(count); // add count value to compressed_string

	return compressed_string;

}

int main()
{
	string prac = "aaaaaabbbiiiiiiii";
	cout << compress_string(prac) << endl;
}