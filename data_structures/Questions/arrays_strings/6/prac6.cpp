#include <iostream>

using std::cout;
using std::endl;

#include <string>
using std::string;


int main()
{

    string str = "aaabbbbcc";

    
    string compressed_string = "";

    for (int i = 0; i < str.length(); ++i)
    {
        string current_char; // Keep track of current char
        int count = 0; // Keep track of count of char


        current_char += str[i];

        while (str[i] = current_char )
        {
            // increase count
            count += 1;
        }
        // now we can update char and the int

        compressed_string += current_char; // add char
        compressed_string += std::to_string(count);

        // reset char and count
        current_char = "";
        count = 0;
        

    }

    cout << compressed_string << endl;
    
}