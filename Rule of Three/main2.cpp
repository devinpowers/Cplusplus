
#include <iostream>
using std::cout;
using std::endl;

#include "GCharacter.h"

GCharacter exCopyConstructor(GCharacter tempGC)  
{   // Pass GCharacter by Value
    cout << "Copy Constructor called twice." << endl;
    cout << "Once for the Formal Parameter being passed by value" << endl;
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
    gc1.insert("Sword"); // won't get added in since we have a tool array of 5 by default

    cout << gc1 << endl;

    cout << "Creating another Character g2 Named Devin!!!! " << endl;

    GCharacter gc2("Devin", 5); // 5 size for the tool array

    gc2.insert("Axe");
    gc2.insert("Sword");
    gc2.insert("Knife");


    cout << gc2 << endl;

    // Call to exCop
    exCopyConstructor(gc2);

}



