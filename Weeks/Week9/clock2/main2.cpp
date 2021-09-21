#include<iostream>
using std::cout;using std::endl;
#include<string>
using std::string;

#include "clock2.h"

int main(){
  Clock my_clk;
  my_clk.hours = 1;
  my_clk.minutes = 55;
  my_clk.period = "AM";
  cout << "Before method: " << endl;
  cout << clk_to_string(my_clk) << endl;

  my_clk.add_minutes(10);  // method to add minutes onto the clock
  cout << "After method: " << endl;

  cout << clk_to_string(my_clk) << endl;
}


