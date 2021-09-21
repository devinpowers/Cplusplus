#ifndef NBA_H
#define NBA_H

#include<string>
using std::string;

struct NBA{

  string first_name = "First_Name";        
  string last_name = "Last_Name";
  int number = 0;

  NBA();
  NBA(string, string, int);


  void add_minutes(int); // method relating to NBA Struct
};

string nba_to_string(const NBA &);

#endif

