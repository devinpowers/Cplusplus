
#include<iostream>
using std::cout; using std::endl;
#include <map> 
using std::map;
#include<string>
using std::string;



using namespace std;
 
int main()
{
 
    // Initialize container
    map<int, int> mp;
 
    // Insert elements in random order
    mp.insert({ 2, 30 });
    mp.insert({ 1, 40 });
    mp.insert({ 3, 20 });
    mp.insert({ 4, 50 });
    mp.insert({ 9, 90 });
 
    cout << "Elements from position of 3 in the map are : \n";
    cout << "KEY\tELEMENT\n";
 
    // find() function finds the position
    // at which 3 is present
    for (auto itr = mp.find(3); itr != mp.end(); itr++) {      // function from where it finds 3
       
        cout << itr->first << '\t' << itr->second << '\n';
    }
 
    return 0;
}