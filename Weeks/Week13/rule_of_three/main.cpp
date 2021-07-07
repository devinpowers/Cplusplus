#include <iostream>
using std::cout;
using std::endl;

#include "GCharacter.h"

GCharacter exCopyConstructor(GCharacter tempGC)
{
    cout << "Copy Constructor called twice." << endl;
    cout << "Once for the formal parameter being passed by value" << endl;
    cout << "Once for the return value." << endl; 

    return tempGC;
}

int main()
{
    GCharacter gc1;

    gc1.insert("Potion");
    gc1.insert("Crossbow");
    gc1.insert("Gun");
    gc1.insert("Ray Gun");
    gc1.insert("Cloak");
   // gc1.insert("Sword"); // won't get added in since we have a tool array of 5 by default

    cout << endl;
    cout << gc1 << endl;
    cout << endl;
    
   // GCharacter gc2("Devin", 5); // 5 size for the tool array

    //gc2.insert("Axe");

    // exCopyConstructor(gc2);

    // Copy Constructor 
    // GCharacter gc3 = gc2; // gc3 wasn't in exisitence

    // Over loaded Assignment Operator
  //  gc2 = gc1;

    // overloaded insertion operator
    // cout << "_____________________ " << endl;
   // cout << "gc2: " << gc2 << endl;
    // cout << "gc1: " << gc1 << endl;
   // cout << "gc3: " << gc3 << endl;




}

