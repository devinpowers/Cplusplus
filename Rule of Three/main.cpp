
#include <iostream>
using std::cout;
using std::endl;

#include "GCharacter.h"

int main()
{
    cout << endl;
    cout << "Creating Another Character gc1: " << endl;
    GCharacter gc1;      

    gc1.insert("Potion");
    gc1.insert("Crossbow");
    gc1.insert("Gun");
    gc1.insert("Ray Gun");
    gc1.insert("Cloak");
    gc1.insert("Sword");

    cout << "gc1: " << endl;
    cout << gc1 << endl;

    cout << "Creating Another Character gc2: " << endl;

    GCharacter gc2("Devin", 5);

    gc2.insert("Axe");  // insert into gc2
    gc2.insert("Potion");
    gc2.insert("Ray Gun");

    cout << "gc2: " << endl;
    cout << gc2 << endl;
    
    // Copy Constructor 
    cout << "Creating Another Character gc3: " << endl;

    GCharacter gc3 = gc2; // gc3 wasn't in existence

    cout << "gc3: " << endl;
    cout << gc3 << endl;

    // Over loaded Assignment Operator
    gc2 = gc1;

    // overloaded insertion operator
    cout << "_____________________ " << endl;
    cout << "gc2: " << gc2 << endl;
    cout << "gc1: " << gc1 << endl;
    cout << "gc3: " << gc3 << endl;

}



