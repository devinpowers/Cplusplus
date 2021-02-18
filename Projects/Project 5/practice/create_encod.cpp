
#include <iostream>
using std::cout; using std::cin; using std::endl;
#include<string>
using std::string;


const string alphabet = "abcdefghijklmnoprstuvwxyz"; //without 'q'

string create_encoding(string key){

    string keyword = ""; // string that were returning 


    for (auto character : key) {

        if ( keyword.find(character) == -1)
        {
            keyword += character;
        }
    }

    // need to add the rest of the alphabet to the end!

    for (auto character : alphabet){

        if ( keyword.find(character) == -1 ){

            keyword += character;
        }
    }
    return keyword;

}

int main()
{
    // this function will create an encoding

    string str1 = "keyword";
    string str2;

    str2 = create_encoding(str1);

    cout << "Create Encoding : " << str2 << endl;

    
}