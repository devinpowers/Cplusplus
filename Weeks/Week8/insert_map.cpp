
#include<iostream>
using std::cout; using std::endl;
#include <map> 
using std::map;
#include<string>
using std::string;
#include<utility>
using std::pair; using std::make_pair;

int main() 
{ 
  
    map <int, string > nba;

    // insert elements into the nba map 3 different ways!!

    nba.insert({1, "Lebron James"});
    
    nba.insert(make_pair(3,"Steph Curry"));

    nba.insert(pair<int, string>(8, "Kobe Bryant"));

    // another way to insert is using array index notation

    nba[2] = "Kevin Durant";
    nba[3] = "Nick Young";   // this would replace Steph Curry Above
    nba[10] = "Trae Young";


    //print out our map 

    cout << "KEY\tELEMENT\n";

    for (auto itr = nba.begin(); itr != nba.end(); ++itr) {
        cout << (*itr).first << '\t' << (*itr).second << '\n';

    }
} 

 