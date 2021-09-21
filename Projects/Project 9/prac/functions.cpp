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

    cout << "Using the ifstream method " << endl;
    string start, stop, input;  // 

    fs >> start >> stop;
    // set
    start_ = start;
    finish_ = stop;
    state_ = start;

    // now we need to get all the transitions in the file
    int count = 0;
    while (fs >> start >> input >> stop)
    {
        table_[start][input] = stop;   // Input into the table_
        count += 1;
    }
    cout << "count: " << count << endl;
    // Print out
}

// Member Functions to Work with 


bool FSA::exists_state(string s)
{
    // finds if the key is in the table

    if (table_.find(s) == table_.end()){
        // Key isn't in the table
        return false;
    }
    return true; // key is in the table
}


void FSA::add_state(string s){

    if (!exists_state(s)) {
        // if True, which exist_state function returns a false hence with the !
        // We add the string s as a key in our table
        table_[s];
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

    cout << "s: " << s << endl;
    
    if (table_.find(s) != table_.end())
    {
        os << s << ":";
        for (pair<string, string> p: table_[s] )
        {
            cout << "s: " << s << endl;
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



string FSA::next (string state, string input)
{
    // Pass in a State (s) and an input (1 or 0) and it will return the next State!
    // Starting from state s and given an input, return the next state
    if (table_.find(state) != table_.end())
    {
        // if the key is in the table
        if (table_[state].find(input) != table_[state].end())
        {
            // then return the next order
            return table_[state][input];
        }
        else
        {
            // throw a domain error
            string error_string = state + " has no transition on the input " + input;
            throw std::domain_error(error_string);
        }
    }
    // throw the domain error
    else
    {
        string error_string = state + " Key doesn't exist";
        throw std::domain_error(error_string);
    }
}

bool FSA::run(string s)
{
    // starting from the start state, run the FSA and having consumed the input, return
    // if the final state is finish_state or not
    // Use the method next to help

    cout << "Using Run Function" << endl;

    for (char c : s)
    {
        state_ = next(state_, string(1,c)); // get the next state
        cout << "Got to: " << state_ << " on a  " << c << endl; // outputs the path it took
    }
    return (state_ == finish_); 


}



// Friend Function heres

ostream& operator<<(ostream& out, FSA& fsa)
{
    // This function prints a representation of the FSA including the start, finish, and current state
    // including all the transitions
    // Friend Function

    cout << "Using Operator Friend Function!!!!" << endl;
    // Accessing private attribute values ( start_, finish_, and state_)  
    out << "Start: " << fsa.start_ << ", Finish: " << fsa.finish_ << ", Present: " << fsa.state_ << endl;

    // Print the table from the private attributes
    for (pair<string,map<string, string>> p : fsa.table_)
    {
        // Use transitions_to_string method to print map
        out << fsa.transitions_to_string(p.first) << endl;
    }

    return out;
}


