#include<iostream>
using std::cout; using std::endl; using std::boolalpha;
#include<string>
using std::string;
#include<sstream>
using std::ostringstream;
#include<algorithm>
using std::transform;
#include<iterator>
using std::ostream_iterator;
#include<utility>
using std::pair; using std::make_pair;
#include<map>
using std::map;
#include<vector>
using std::vector;



void print_server2 ( ServerData &server_in ) {
// using iterators to print

    for(auto it=server_in.begin();it!=server_in.end();++it)  //Loop to iterate over map elements
    {
        cout<<it->first<<": ";    
        for(auto it1= it->second.begin(); it1 != it->second.end(); it1++)
            cout<<*it1<<", ";
        cout<<"\n";   
    }
}

void print_server ( ServerData &server_passed){
    //print server

    for(auto const& pair : server_passed) {

        cout << pair.first << " : ";
        for(auto const& elem : pair.second) {
            cout << elem << ", ";
        }
        cout << "\n";
    }
   

}


int main()
{   
   


}