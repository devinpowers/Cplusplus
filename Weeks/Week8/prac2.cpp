




//#include<utility>
//using std::pair; using std::make_pair;

#include<iostream>
using std::cout; using std::endl;
#include <iterator> 
#include <map> 
using std::map;




int main()
{
 
    // initialize container
    map<int, int> mp;
 
    // insert elements in random order
    mp.insert({ 2, 30 });
    mp.insert({ 1, 40 });
    mp.insert({ 3, 69 });
 
    // does not inserts key 2 with element 20
    mp.insert({ 2, 20 });
    mp.insert({ 5, 50 });
 
    // prints the elements
    cout << "KEY\tELEMENT\n";
    for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
        cout << itr->first
             << '\t' << itr->second << '\n';
    }
    return 0;
}


