#ifndef CLOCK_H
#define CLOCK_H

#include<string>
using std::string;

struct Clock {
  int minutes;
  int hours;
  string period;
};

// includes any function declearation
string print_clk(const Clock &c);

#endif
