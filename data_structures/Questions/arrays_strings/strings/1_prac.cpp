#include<iostream>
using std::cout;
using std::endl;

#include<string>
using std::string;
#include<vector>
using std::vector;

int main(){

    vector<string> vec;
    string name = "HelloWorld";

    int index1 = 0;
    int index2 = 3;

    // slice name string?

    string str1 = name.substr(index1, index2);

    cout << "String 1: " << str1 << endl;

    cout << "name string: " << name << endl;



}