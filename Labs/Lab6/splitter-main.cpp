#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
using std::cout; using std::cin; using std::endl;
using std::vector;
using std::string;

#include "splitter-functions.h"

int main(){
    vector<string> result;
    string split_s;
    char split_ch;
    cin >> split_s;
    cin >> split_ch;
    result = split(split_s, split_ch);
    print_vector(cout, result);
}