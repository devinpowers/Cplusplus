#include<iostream>
#include<unordered_map>
#include<list>
#include <string>
#include<map>
#include<set>
using namespace std;

int main(){


    std::map<string,std::set<string> > mp;
    std::map<string,std::set<string> >::const_iterator row;
    std::set<string>:: const_iterator col;

    mp["A"].insert("pawan");
    mp["A"].insert("patil");

    for(auto const& pair : mp) {
        cout << pair.first << ": ";
        for(auto const& elem : pair.second) {
            cout << elem << ", ";
        }
        cout << "\n";
    }
}