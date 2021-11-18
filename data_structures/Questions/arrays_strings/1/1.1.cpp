
#include <string>
using std::string;
#include <vector>
using std::vector;
#include <iostream>
using std::cout;
using std::endl;
using std::boolalpha;

bool isUniqueChars(std::string str)
{
    std::sort(str.begin(), str.end());

    /* detect duplicate characters */
    for (size_t i = 0; i + 1 < str.size(); ++i)
    {
        if (str[i] == str[i + 1])
        {
            return true;
        }
    }
    return false;
}

int main(){

    vector<string> words = {"abcde", "Devin","Powers", "abcdefghijklmnopqrstuva", "Lebron", "instagram", "oowowowowow", "cvbnmpoiwersajkl"} ;
    
    for (auto word : words)
    {
        cout << word << string(": ") << boolalpha << isUniqueChars(word) <<endl;
    }
}


