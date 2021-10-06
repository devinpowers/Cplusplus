#include <iostream>

using std::cout;
using std::endl;

#include <string>
using std::string;


int main()
{

    string str1 = "Hello";
    string str2 = "";

    for(int i = 0; i < str1.length(); ++i){

        str2 += str1[i];
    }

    // append

   // str2.append(str1);
    cout << str2 << endl;

}