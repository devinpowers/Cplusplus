
#include<iostream>
using std::cout; using std::endl; using std::boolalpha;
#include<string>
using std::string;
#include<map>
using std::map;

int main()
{
    cout << boolalpha;
    map < int, string > map_name;

    map_name.insert({3, "Chris Paul"});
    map_name.insert({23, "Michael Jordan"});

    cout << "The Size of the Map is: " << map_name.size() << endl;

    cout << "Is the Map Empty? : " << map_name.empty() << endl;

    //Lets Clear the Map!

    map_name.clear();

    cout << "Is the Map Empty now? " << map_name.empty() << endl;

}



