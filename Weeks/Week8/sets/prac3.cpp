#include <map> 
#include <set>
#include <string>
#include <iostream>

using namespace std;

// using mymap as global 
map<string, set<string>> mymap;

void insertValue(map<string, set<string> >& myMap, string const& key, string const& value)
{
   // Check whether there is already a set given the key.
   // If so, insert to the existing set.
   // Otherwise, create a set and add it to the map.
   map<string, set<string> >::iterator found = myMap.find(key);
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

