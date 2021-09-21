
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
    string keyword = "example";

    cout << "Created Encoding: " << create_encoding(keyword) << endl;
  
}

