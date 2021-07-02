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

// Member Functions to Work with 


bool FSA::exist_state(string s)
{
    // finds if the key is in the table

    if (table_.find(s) == table_.end()){
        // Key isn't in the table
        return false;
    }
    return true; // key is in the table
}


void FSA::add_state(string s){

    if (!exist_state(s)) {
        // if True, which exist_state function returns a false hence with the !
        // We add the string s as a key in our table
        table_s[s];
    }
    // Else the key already exists and we throw a domain error
    else
    {
        string error_string = s + " already exists in our Map";
        throw std::domain_error(error_string); // throw the domain error

    }

}

void FSA::add_transition(string s1, string input, string s2)
{
    if (table_.find(s1) != table_.end())
    {
        // if the key (s1) is in the table, we add the transition
        table_[s1][input] = s2;

    }
    else
    {
        // The key isn't in the Map so we throw another Domain error
        string error_string = s1 + " doesn't exist in our map";
        throw std::domain_error(error_string);
    }


}

string FSA::transitions_to_string(string s)
 {
    // Returns a string off all the transitions associated with the state "s"
    // Otherwise it throws a domain_error if the state isn't in the table

    ostringstream os;
    string return_string;

    // if the key is in the table, lets add it to our string return_string;

    if (table_.find(s) != table_.end())
    {
        os << s << ":";
        for (pair<string, string> p: table_[s] )
        {
            os << " on " << p.first << " --> " << p.second << ",";
        }
        return_string = os.str(); // convert os to a string
        return_string = return_string.substr(0, return_string.size() -1 );
        return return_string;
    }
    else
    { 
      // Throw a domain error because the key does not exist!!!
       string error_string = s + " doesn't exist";
       throw std::domain_error(error_string); 
    }

}



string FSA::next (string s, string input)
{
    //

}