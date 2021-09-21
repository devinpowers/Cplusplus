
#include<iostream>
using std::cout; using std::endl;
#include<string>
using std::string;
#include <vector>
using std::vector;
#include<utility>
using std::pair; using std::make_pair;
#include<sstream>
using std::ostringstream;
#include<map>
using std::map;
#include<set>
using std::set;

template < typename K, typename V >

void print_map ( map <K, V>& map_passed)

{
    for ( pair<string,string> x : map_passed)
    {
        cout << x.first << " : " << x.second << endl;
    }

}

int main()
{
    map <string,string > map_1 = {

        {"Server One", "Devin"},
        {"Server Two", "Noah"},
        {"Server Three", "Jimmy"}
    };


    cout << "Print Map 1: " << endl; 
    print_map(map_1);

}



