
/*  
    Question 6: Write a method to perform basic string compression using the counts of repeated characters. For example,
     the string aabccccaaa would become a2b1c5a3. If the "compressed" string would not become smaller than the original string, your
     method should return the original string. You can assume the string has only uppercase and lowercase letters (a-z).
     
*/

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
            compressed_string +=str[i-1]; // add char to compressed_string
            compressed_string += std::to_string(count); // add count number to string
            count = 1; // reset count
        }

    }

    // we go all the way to the end of the string length()
    compressed_string += str[str.length() - 1]; // add last char to compressed_string
    compressed_string += std::to_string(count); // add count value to compressed_string

	return compressed_string;

}

int main()
{
    cout << endl;
	string prac = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbiiiiiiiippppppppppwwwwwwaaaaabbzzzzQQQQ";
	cout << compress_string(prac) << endl;
    cout << endl;
}