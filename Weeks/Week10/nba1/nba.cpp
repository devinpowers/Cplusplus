#include<string>
using std::string;
#include<sstream>
using std::ostringstream; using std::istringstream;

#include "nba.h"

// string constructor
NBA::NBA(string s){
  // format is first_name:last_name:number
  vector<string> fields;
  split(s, fields, ':');
  first_name = fields[0];
  last_name = fields[1];
  number = stol(fields[2]);
}

// add to minutes, correct hours if overflow
void NBA::add_minutes(int min){
  auto temp = number + min;
  if (temp >=60){
    number = temp % 60;
  }
  else
    number = temp;
}

// convert clock to string
string nba_to_string(const NBA &p){
  ostringstream oss;
  oss << "First Name:"<<p.first_name<<", Last Name:"
      <<p.last_name<<", Number:"<<p.number;
  return oss.str();
}

// split string based on sep, ref return of vector<string>
void split(const string &s, vector<string> &elems, char sep) {
    istringstream iss(s);
    string item;
    while(getline(iss, item, sep))
      elems.push_back(item);
}

