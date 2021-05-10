#include<iostream>
using std::endl;
#include<fstream>
using std::ifstream;
#include<vector>
using std::vector;
#include<string>
using std::string;
using std::cout;


void print_vector ( vector<string> & v){
    // print vector passed it
    for (auto name : v){
        cout << name << endl;
    }
    cout << "Finished" << endl;
}


int main(){

    ifstream file; // Create a File Object

    file.open("file.txt");

    vector<string> names; // vector to store the names
    string input; // where the names will be tempoary stored

    while( file >> input) // will evaluate as True if the read is sucessful
    {
        names.push_back(input);
    }

    cout << "Done" << endl;
    // Lets pass our vector to the print_vector function to print

    print_vector(names);
}

