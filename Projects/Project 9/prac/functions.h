#ifndef FSA_H
#define FSA_H

#include<iostream>
using std::ostream;
#include<fstream>
using std::ifstream;
#include<map>
using std::map;
#include<string>
using std::string;

class FSA{
private:

  // Attributes
  map<string, map<string, string>> table_;
  string state_;                             // Current State
  string start_;                             // Starting State
  string finish_;                             // Ending State

public:
  // Constructor
  FSA()=default; // Default contructor 
  FSA(string start, string stop);  
  FSA(ifstream&);   // If opening via a file
  
  // Member functions for FSA
  bool exists_state(string);
  void add_state(string);
  void add_transition(string, string, string);
  string transitions_to_string(string);
  string next(string,string);
  bool run(string);
  friend ostream& operator<<(ostream&, FSA&); //friend function to print (access private members)
};

#endif
