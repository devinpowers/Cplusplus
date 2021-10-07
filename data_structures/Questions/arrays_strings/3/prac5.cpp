#include<iostream>
using std::cout;
using std::endl;

#include<string>
using std::string;

void test_string(string &str, string &str2){
    // & reference to the string str globally so it changes
    int i, j = 0;
    for ()
    str = str.substr(1,4);

}

int main(){

    // string before

    string one = "Hello";

    cout << "string before: " << one << endl;

    // String after

    test_string(one);

    cout << "string after: " << one << endl;




}