#include<vector>
#include<string>
#include<iostream>
using std::vector;
using std::string;
using std::cin; using std::cout; using std::endl; using std::ostream;

#include "splitter-functions.h"

vector<string> split(const string &s, char separator){
    
    vector<string> result;
    std::istringstream split(s);
    for (std::string each; std::getline(split, each, separator); result.push_back(each));

    return result;
}

void print_vector (ostream &out, const vector<string> &v){
    for (int i = 0; i < v.size(); ++i){
        out << v[i] << endl;
    }
}
