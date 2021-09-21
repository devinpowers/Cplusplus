#include<string>
using std::string;
#include<sstream>
using std::ostringstream;

#include "clock.h"



string print_clk(const Clock& c){
  // converts clock to a string
  ostringstream oss;
  oss << "Hours:"<< c.hours <<", Minutes:"<< c.minutes <<", Period:"<< c.period;
  return oss.str();
}


