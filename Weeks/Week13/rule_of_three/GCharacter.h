
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
        int used; // This will represent number of spaces taken by the array (keep track)
        string* toolHolder; // this will be our array

    public:
        // Constructor
        GCharacter(string name = "John", int capacity = 5 );

        // Copy Constructor
        GCharacter(const GCharacter& source);

        // Overloaded Assignment with source being the Object were copying
        GCharacter& operator = (const GCharacter& source);

        // Destructor (easy to write)
        ~GCharacter();

        // Insert (member function) a new tool into the tool array (holder)
        void insert(const string& toolName);
    

    // Overloading the << operator (syntax) Can Access the Priate memebers
    friend std::ostream& operator <<(std::ostream& os, const GCharacter& gc);
};

#endif

