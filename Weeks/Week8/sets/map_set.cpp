
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
#include<algorithm>
using std::transform;
using std::find;
#include<iterator>
#include<set>
using std::set;


// using mymap as global 
using Devin = map<string, set<string>>;

Devin mymap;

void insertValue(Devin &myMap, string const& key, string const& value)
{
   // Check whether there is already a set given the key.
   // If so, insert to the existing set.
   // Otherwise, create a set and add it to the map.
   Devin::iterator found = myMap.find(key);
   if ( found != myMap.end() )
   {
      cout << "Adding '" << value << "' to an existing set of " << key << "s.\n";
      found->second.insert(value);
   }
   else
   {
      cout << "Adding '" << value << "' to a new set of " << key << "s.\n";
      set<string> temp;
      temp.insert(value);
      myMap.insert(make_pair(key, temp));
   }
}

int main()
{
  // map<string, set<string> > mymap;
   insertValue(mymap, "car", "orange");
   insertValue(mymap, "car", "blue");
   insertValue(mymap, "car", "red");
   insertValue(mymap, "truck", "orange");
   insertValue(mymap, "truck", "blue");
   return 0;
}




