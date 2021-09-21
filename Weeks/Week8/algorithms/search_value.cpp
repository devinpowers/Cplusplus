
#include<iostream>
using std::cout; using std::endl;
#include <map> 
using std::map;
#include<string>
using std::string;
 
void printKey(map<int, string>& Map, string K) // pass in map and value to find
{ 
  
    // If a is true, then we have 
    // not key-value mapped to K 
    bool a = true; 
  
    // Traverse the map 
    for (auto& it : Map) { 
  
        // If mapped value is K, 
        // then print the key value 
        if (it.second == K) { 
            cout << "key: " << it.first << ' ' << endl; 
            a = false; 
        } 
    } 
  
    // If there is not key mapped with K, 
    // then print -1 
    if (a) { 
        cout << "-1"; 
    } 
} 

int main() 
{ 
    map<int, string > Map; 
    // Given map 
    Map[1] = "Lebron James"; 
    Map[2] = "Steph Curry"; 
    Map[4] = "Kevin Durant"; 
    Map[7] = "Michael Jordan"; 
    Map[10] = "Blake Griffin"; 
    Map[6] = "Lebron James"; 
    Map[8] = "Lebron James"; 

    // Given value K 
    string K = "Lebron James"; 
  
    // Function call 
    printKey(Map, K); 
} 

