#include<string>
using std::string;
#include<sstream>
using std::ostringstream; using std::istringstream;

#include "nba.h"

//Defaul constructor
NBA::NBA(){
  first_name = "first_name";
  last_name = "last_name";
  number = 0;
}

// Constructor of 3 Arguments

NBA::NBA(string first, string last, int num){

  first_name = first;
  last_name = last;
  number = num;

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
