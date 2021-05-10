#include<iostream>
using std::cout;
using std::endl;
using std::cin;
#include<fstream>
using std::ifstream;

#include<map>
using std::map;

#include<utility>
using std::pair;
using std::make_pair;

#include<string>
using std::string;




int main() {
    
    pair <int, string > a;
    pair <int, string > b;

    a = make_pair( 3, "Chris Paul");
    b = make_pair( 23, "Michael Jordan");


    // printing out 

    cout << "a: " << a.first << " , " << a.second << endl;
    cout << "b: " << b.first << " , " << b.second << endl;

}