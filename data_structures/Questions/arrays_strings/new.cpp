#include <string>
using std::string;
#include <vector>
using std::vector;
#include <iostream>
using std::cout;
using std::endl;

string change_string(string str)
{
    //replace space with %20

    string new_string = "";
 

    for(int i = 0; i < str.length(); ++i)
    {
        if (str[i] == ' ')
        {
            // replace
            new_string += "%20";
            
        }
        else {
            // add char to new_string

            new_string += str[i];

         }
    }

    return new_string;
}
int main()

{
    string phrase = "Mr John Smith";


    cout << change_string(phrase) << endl;



}