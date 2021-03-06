#ifndef CLOCK_H
#define CLOCK_H

#include<string>
using std::string;
#include<vector>
using std::vector;

class Clock{
 private: 
  int minutes_ = 0;
  int hours_ = 0;
  string period_;
  // function member adjusts the clock for us
  void adjust_clock(int, int, string);

 public:
  // constructors
  Clock()=default; // Default constructor
  Clock(int, int, string);
  explicit Clock(string s);       // if we pass in one big long string -> "min:hours:period"


  // getters (grab our attributes)
  int hours() const {return hours_;}
  int minutes() const {return minutes_;}
  string period() const {return period_;}
  
  // setters
  void hours(int);
  void minutes(int);
  void period(string);
  
  // members
  void add_minutes(int);

  // friend function
  friend string clk_to_string(const Clock &);
};

string clk_to_string(const Clock &);
void split(const string &, vector<string> &, char);

#endif
