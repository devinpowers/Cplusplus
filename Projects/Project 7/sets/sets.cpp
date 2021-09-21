
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
#include<vector>
using std::vector;
using std::set;
#include<fstream>
using std::ifstream;
using std::invalid_argument;
using std::domain_error;
using std::set_intersection;
using std::set_symmetric_difference;
using std::copy_n;
using std::inserter;
#include <algorithm>
using std::sort;


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
    set<string> set1, set2;

    // add to two sets

    set1.insert("Devin");
    set1.insert("Bob");
    set1.insert("Nick");
    set1.insert("Abe");
    set1.insert("Zoe");
    set1.insert("Alex");

    set2.insert("Robert");
    set2.insert("Chris");
    set2.insert("Noah");
    set2.insert("Devin");
    set2.insert("Abe");



    // lets create our custom data structure for map

    ServerData map_;

    map_["Server1"] = set1;
    map_["Server2"] = set2;


    set<string> new_set1, new_set2;

    set_intersection (set1.begin(), set1.end(), set2.begin(), set2.end(), inserter( new_set1, new_set1.begin()));

    new_set2 = new_set1;
    
    // Lets try and Print our two new_set1 and new_set2

    cout << "Set 1: " << endl;
    for (auto element : new_set1){
        cout << element << "\n";
    }

    cout << "Set 2: " << endl;
    for (auto element : new_set2){
        cout << element << "\n";
    }

    // can we create a set or a list with the o
    
    vector <string> new_vec;

    set_symmetric_difference (set1.begin(), set1.end(), set2.begin(), set2.end(), inserter( new_vec, new_vec.begin()));

    // now we can try and print our new_vec to see if it worked

    sort(new_vec.begin(), new_vec.end());

    cout << "New Vector sorted: " << endl;
    for (auto element : new_vec ) {
        cout << element << ", ";
    }
    cout << endl;

    // everything in the vector is now sorted so we just gotta add them to our "new_set1" and "new_set2"

    cout << "vector Size? " << new_vec.size() << endl;

    // for loop to insert vector elements into sets?
    // now that we have two set with the same names, we can sort our vector and send one
    // half to one vector and the other half to the other vector

    // adjust the vector size by seeing if its divide
    int vec_size_half = new_vec.size()/2;

    cout << "VECTOR SIZE HALF:  "<< vec_size_half << endl; 
    if (new_vec.size() % 2 != 0)
    {
        vec_size_half += 1;
    }
    // now we can loop over the the new_vec and add elements to sets 1 and 2

    cout << "TESTING???" << endl;


    vector <string>:: iterator it;

    for (it = new_vec.begin(); it != new_vec.end(); it++ )

    { 
        // insert into sets
        new_set1.insert(*it);
    }

    

    






    cout << " " << endl;

    cout << "Set 1: " << endl;
    for (auto element : new_set1){
        cout << element << "\n";
    }




   //cout << "Printing Map before Changing Shit around " << endl;

   print_server(map_);

   // lets see if I can update the Map Via here


   // YESSSSSSS IT DOESS

   map_["Server1"] = new_set1;
   map_["Server2"] = new_set2;

   cout << " Lets see if this updates the MAP!!!" << endl;
    
   
   print_server(map_);




    

    return 0;
}