
#include<iostream>
using std::cout; using std::endl;
#include<string>
using std::string;
#include <map> 
using std::map;
#include<iterator>
using std::ostream_iterator;
#include<sstream>
using std::ostringstream;
#include<utility>
using std::pair; using std::make_pair;


string pair_to_string(WordCnt p){
  ostringstream oss;
  oss << p.first <<":"<<p.second;
  return oss.str();
}


int main()  
{
  
  using WordCnt = pair<char,long>; 

  vector<CNT> v = {{'a', 0}, {'b', 1}};

  // using iterator
  map<char, long > m (v.begin(), v.end());

 
}  



