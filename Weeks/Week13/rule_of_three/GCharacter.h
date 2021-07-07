
#ifndef GCHARACTER_H_

#define GCHARACTER_H_

#include <iostream>
using std::cout;
#include <string>
using std::string;

class GCharacter
{
    private:
        // Data Members (attributes)
        string name; // Name of Character
        int capacity;
        int used;
        string* toolHolder;

    public:

         static const int DEFAULT_CAPACITY = 5;

        // Constructor
        GCharacter(string name = "John", int capacity = DEFAULT_CAPACITY );

        // Copy Constructor
        GCharacter(const GCharacter& source);

        // Overloaded Assignment 
        GCharacter& operator = (const GCharacter& source);

        // Destructor (easy to write)
        ~GCharacter();

        // Insert (member function) a new tool into the tool array (holder)
        void insert(const string& toolName);
    
    

    // Overloading the << operator (syntax) Can Access the Priate memebers
    friend std::ostream& operator <<(std::ostream& os, const GCharacter& gc);
};

#endif

