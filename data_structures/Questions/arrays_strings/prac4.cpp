#include <string>
using std::string;
#include <vector>
using std::vector;
#include <iostream>
using std::cout;
using std::endl;
using std::boolalpha;




string str_length()

int main()
{
    string prac1 = "acde";
    string prac3 = "bbdbb";

    string result = "";
    int len1 = prac1.length();
    int len2 = prac3.length();

    for (int i= 0, j =0; i <= len1-1 && j <= len2-1; i++,j++ ){

        if (prac1[i] != prac3[j]){
            cout << "YES " << endl;
        }
        else{
            result.push_back(prac1[i]);

        }
    }
    cout << result << endl;

}