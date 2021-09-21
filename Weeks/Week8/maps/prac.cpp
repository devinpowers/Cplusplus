#include<iostream>
using std::cout; using std::endl;
#include<iterator>
using std::ostream_iterator;
#include<utility>
using std::pair; using std::make_pair;
#include<map>
using std::map;
#include<set>
using std::set;
#include<string>
using std::string;
#include<sstream>
using std::ostringstream;

void print_map(map<string, string> & map){
   
   for ( pair<string, string> x : map){
       cout << x.first << " : " << x.second << endl;
   }
}


int main() {

    map<string, string> map_1 = {
        {"Server One", "Devin"},
         {"Server Two", "Noah"},
         {"Server Three", "Jimmy"}
    };
    
    cout << "Print Map 1: " << endl;
    print_map(map_1);

}