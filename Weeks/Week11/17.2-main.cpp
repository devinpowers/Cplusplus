#include<iostream>
using std::cout; using std::endl;
#include<string>
using std::string;

#include "17.2-clock.h"

int main(){
    // Normal
    Clock a_clk(121,24,"today");       
    cout << "3 param check:"<<clk_to_string(a_clk) << endl;

    // Explicit
    Clock some_clk("24:121:today"); 
    cout << "string param check:"<<clk_to_string(some_clk) << endl;

    Clock test_clk(30,6,"PM");
    cout << clk_to_string(test_clk) << endl;
    // change hours attribute
    test_clk.hours(24);
    cout << "Hours test:"<< clk_to_string(test_clk) << endl;
    // Changing minutes attribute
    test_clk.minutes(120);
    cout << "Mins test:"<< clk_to_string(test_clk) << endl;
    // Changing the period attribute
    test_clk.period("today");
    cout << "Period test:"<<clk_to_string(test_clk) << endl;

    test_clk.add_minutes(40);

    cout << "Add test:"<<clk_to_string(test_clk) << endl;

    // More Testing
    cout << "More Testing!! " << endl;
    Clock another_one;
    another_one.hours(23);
    another_one.minutes(34);
    another_one.period("PM");
    
    cout << "Testing: Another One::: " << clk_to_string(another_one) << endl;
    cout << "Lets see if the Getters work: " << another_one.hours() << endl;
}


