#include<iostream>
using std::ostream;
using std::boolalpha;
#include<sstream>
using std::ostringstream;
#include<fstream>
using std::ifstream;
#include<map>
using std::map;
#include<string>
using std::string;
#include<iostream>
using std::cout; using std::endl;
#include<utility>
using std::pair;
#include"functions.h"

// Constructors
FSA::FSA(string start, string stop)
{
    // Initilizer

    start_ = start;
    finish_ = stop;
    state_ = start; // current state you're in is the starting position
}

FSA::FSA(ifstream& fs){
    string start, stop, input;

    fs >> start >> stop;
    // set
    start_ = start;
    finish_ = stop;
    state_ = start;

    // now we need to get all the transitions in the file
    while (fs >> start >> input >> stop)
    {
        table_[start][input] = stop;
    }
}

