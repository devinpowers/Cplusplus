
#include<iostream>
using std::cout; using std::endl;
#include <map> 
using std::map;
#include<string>
using std::string;


int main()
{
 
    // initialize the Map container
    map<int, string> mp;

    // inserting into the Container
    mp.insert({ 2, "Lebron" });
    mp.insert({ 1, "Wade" });
    mp.insert({ 4, "Jordan" });
    mp.insert({ 5, "Durant" });
    mp.insert({ 3, "Curry" });

 
    // prints the elements
    cout << "The map before using erase() is : \n";

    cout << "KEY\tELEMENT\n";

    for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
        cout << (*itr).first << '\t' << (*itr).second << '\n';
    }
 
    // Lets Erase some Keys in our Map
    mp.erase(1);
    mp.erase(3);
 
    // prints the elements
    cout << "\nThe map after applying erase() function is : \n";
    cout << "KEY\tELEMENT\n";
    for (auto itr = mp.begin(); itr != mp.end(); ++itr) {

        cout << (*itr).first << '\t' << (*itr).second << '\n';

    }

}


