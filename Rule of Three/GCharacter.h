
#ifndef GCHARACTER_H_
#define GCHARACTER_H_

#include <iostream>
#include <string>

class GCharacter
{
    public:

        static const int DEFAULT_CAPACITY = 5;

        // Constructor
        GCharacter(std::string name = "John", int capacity = DEFAULT_CAPACITY );

        // Copy Constructor
        GCharacter(const GCharacter& source);

        // Overloaded Assignment 
        GCharacter& operator = (const GCharacter& source);

        // Destructor (easy to write)
        ~GCharacter();

        // Insert (member function) a new tool into the tool array (holder)
        void insert(const std::string& toolName);
    
    private:
        // Data Members
        std::string name;
        int capacity;
        int used;
        std::string* toolHolder;

    // Overloading the << operator (syntax)
    friend std::ostream& operator <<(std::ostream& os, const GCharacter& gc);

};

#endif


