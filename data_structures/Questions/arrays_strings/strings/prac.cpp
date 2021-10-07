#include <string>
using std::string;
#include <vector>
using std::vector;
#include <iostream>
using std::cout;
using std::endl;


int main()
{
    string prac = "Devin";

    string str1 = "aabbbeccciiiiiiiiioooooooLLLLLLLmmmmmmmmmrrrr";

    string str2;

    int count = 1;

    for (int i = 0; i < str1.length() + 1; ++i ){

        if (str1[i+1] == str1[i]){
            //increase count
            count++;
        }
        else {
            str2 += str1[i];
            // add number to string
            str2 +=std::to_string(count);
            // reset count to 0
            count = 1;
        }


    }

    cout << str2 << endl;


    
}