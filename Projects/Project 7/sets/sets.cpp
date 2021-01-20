
#include<iostream>
using std::cout; using std::endl; using std::boolalpha;
#include<string>
using std::string;
#include<sstream>
using std::ostringstream;
#include<utility>
using std::pair; using std::make_pair;
#include<map>   
using std::map;
#include<set>
using std::set;
#include<fstream>
using std::ifstream;
using std::invalid_argument;
using std::domain_error;
using std::set_intersection;
using std::set_symmetric_difference;
using std::copy_n;

using ServerData = map<string, set<string>>;


void print_server ( ServerData &server_in ) {
// using iterators to print
// I should make sure the trailing comma is removed!

    for(auto it=server_in.begin();it!=server_in.end();++it)  //Loop to iterate over map elements
    {
        cout<<it->first<<": ";    
        for(auto it1= it->second.begin(); it1 != it->second.end(); it1++)
            cout<<*it1<<", ";
        cout<<"\n";   
    }
}

int main(){

    //string server1, server2;
    set<string> set1, set2, set_comp;

    // add to two sets

    set1.insert("Devin");
    set1.insert("Bob");
    set1.insert("Nick");

    set2.insert("Robert");
    set2.insert("Chris");
    set2.insert("Noah");

    // lets create our custom data structure for map

    ServerData map_;

    map_["Server1"] = set1;
    map_["Server2"] = set2;

    // test to see if our stategy works!

    cout << "Print: " << endl;

    print_server(map_);
    // now I need to Copy to compare the two sets



    // Lets compare the two sets
    set<string>:: iterator it, st;
    it = set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), set_comp.begin());

    cout << "Intersecting Set Elements are : " << (it - set_comp.begin() ) << "elements:";




    

    return 0;
}