#include<iostream>
using std::cout; using std::endl;
#include<map>
using std::map;
#include<string>
using std::string;
#include<set>
using std::set;
#include<iterator>

using ServerData = map<string, string >;  // ServerData is a "Type"

void print_server ( ServerData &server_in ) {
// using iterators to print

    for(auto it=server_in.begin();it!=server_in.end();++it)  //Loop to iterate over map elements
    {
        cout<<it->first<<": "; 
        cout <<it->second << endl;   
        
    }

}

void print_set ( set<string> set_passed)
{
    for (auto itr = set_passed.begin(); itr != set_passed.end(); itr++ )
    {
        cout << "servers in the Set are: " << *itr << "\n";
    }
}
int main ()
{
    //add servers to ServerData above

    ServerData ServerData1;

    ServerData1["Server1"] = "Devin";
    ServerData1["Server2"] = "Paul";
    ServerData1["Server3"] = "Abe";

    // string that we will add to
    set <string> prac_set;
    string str1, str2, str3;

    for ( auto itr = ServerData1.begin(); itr != ServerData1.end(); ++itr)
    {
        //add keys to OUR SET

        cout << itr->second << "\n";
        
    }

    // print our set here
    print_set(prac_set);




    return 0;

}