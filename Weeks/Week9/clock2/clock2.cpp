

#include<string>
using std::string;
#include<sstream>
using std::ostringstream;

#include "clock2.h"

/* add to minutes member,
correct hours if overflow
*/
void Clock::add_minutes(int min){
  auto temp = minutes + min;
  if (temp >= 60) {
    minutes = temp % 60;
    hours = temp / 60 + hours;
  } else {
    minutes = temp;
  }
}

// convert clock to string
string clk_to_string(const Clock &c){

  ostringstream oss;
  oss << "Hours:"<< c.hours <<", Minutes:"<<c.minutes <<", Period:"<<c.period;
  return oss.str();

}

