

#include<iostream>
using std::cout; using std::endl;
#include<string>
using std::string;
#include<fstream>
using std::ifstream;
#include<vector>
using std::vector;



int main(){

    ifstream in_file("file2.txt");

    vector <string> names;

    string input; // where the names are being stored temp

    while (in_file >> input )
    {
        cout << "Input: " << input << endl;
        names.push_back(input);
    }

    // lets print the names in the file
    for (auto input : names)
    {
        cout << input << endl; 
    }
}

