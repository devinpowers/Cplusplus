#include<iostream>
using std::cout; using std::endl;
#include<string>
using std::string;

#include "nba.h"

int main(){
    NBA player1; // Default constructor
    NBA player2("Steph", "Curry", 35); // 3 arg constructor
    NBA player3("Lebron:James:23"); // string constructor
 
    
    cout << nba_to_string(player1)<<endl;
    cout << nba_to_string(player2)<<endl;
    cout << nba_to_string(player3)<<endl;
    
    player1.first_name = "Chris";
    player1.last_name = "Paul";
    player1.add_minutes(10);
    cout << nba_to_string(player1) << endl;

 

    string s="Devin:Powers:3";
    
    // implicit conversion
    cout << nba_to_string(s) << endl;
    // implicit conversion
    cout << nba_to_string(string("Tony:Parker:9"))<< endl; 
    // cannot, 2 conversions!
    // cout << nba_to_string("paul:pierce:34")); 
    cout << endl;
}

