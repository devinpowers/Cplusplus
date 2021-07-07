
#include<iostream>
using std::cout; using std::endl; 
#include<string>
using std::string;
#include<algorithm>
using std::copy;

#include "GCharacter.h"


// Constructor
GCharacter::GCharacter(string n, int cap)
{
    name = n;
    capacity = cap;
    used = 0;  // Default which is the number of spaces used in the array of weapons
    toolHolder = new string[cap]; // New Array of size of the capacity (default to 5)
}

// Copy Constructor
GCharacter::GCharacter(const GCharacter& source)
{
    cout << "Copy Constructor Called. " << endl;

    this->name  = source.name;
    this->capacity = source.capacity;
    this->used = source.used;
    this->toolHolder = new string[source.capacity]; // In order to do a  Deep Copy!!!, we need to create a brand new string array (IMPORTANT)

    copy(source.toolHolder, source.toolHolder + used, this->toolHolder );
}

// Overloaded Assignment Operator
GCharacter& GCharacter::operator=(const GCharacter& source)
{
    // Testing for self-assignment
    cout << "Overloaded Assignment Called. " << endl;
    
    // Check for self assignment
    // gc1 = gc1;
    if (this == &source)
    {
        return *this; // return GCharacter Object
    }
    this->name  = source.name;
    this->capacity = source.capacity;
    this->used = source.used;

    copy(source.toolHolder, source.toolHolder + used, this->toolHolder );

    return *this; // return GCharacter Object
}


// Destructor

GCharacter::~GCharacter()
{
    // only handling the dynamic memory
    cout << "Destructor called for " << this->name << " at this memory location " << this << endl;

    delete[] toolHolder; 
}

// Inserting a new tool into our toolHolder

void GCharacter::insert(const string& toolName)
{
    if (used == capacity) 
    {
        // if all the spaces are filled up in the Array
        cout << "Tool Holder is full. Cannot add any additional tools " << endl;
    }
    else
    {
        toolHolder[used] = toolName;
        used++; //increment
    }

}

std::ostream& operator<<(std::ostream& os, const GCharacter& gc)
{
    // Prints out our Object! We overloaded the << 
    // Friend function so it can access the "private" data types
    os << "Game Character " << gc.name << " has the following tools: " << std::endl; 
    
    // iterate over our tool array and print

    for(int i = 0; i < gc.used; i++)
    {
        os << gc.toolHolder[i] + " | ";
    }

    return os << std::endl;
}


