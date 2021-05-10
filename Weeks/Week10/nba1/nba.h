
#ifndef NBA_H
#define NBA_H

#include<string>
using std::string;
#include<vector>
using std::vector;

struct NBA{

  string first_name = "First_Name";         // Default
  string last_name = "Last_Name";
  int number = 0;

  
  NBA()=default;
  NBA(string first, string last, int num) : first_name(first), last_name(last), number(num) {};

  NBA(string s);
  // explicit NBA(string s);  // no implicit conversion
  
  void add_minutes(int);
};

string nba_to_string(const NBA &);
void split(const string &, vector<string> &, char);

#endif

