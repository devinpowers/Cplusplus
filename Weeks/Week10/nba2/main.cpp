#include<iostream>
using std::cout; using std::endl;
#include<string>
using std::string;

#include "nba.h"

int main(){
    NBA player1; // Default constructor
    NBA player2("Steph", "Curry", 35); 

    
    cout << nba_to_string(player1)<<endl;
    cout << nba_to_string(player2)<<endl;
    
    player1.first_name = "Chris";
    player1.last_name = "Paul";
    player1.add_minutes(10);
    cout << nba_to_string(player1) << endl;

}


