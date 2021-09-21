
#include<iostream>
using std::cout; using std::endl; using std::boolalpha;
#include<vector>
using std::vector;
#include<string>
using std::string;

int main (){
  vector<long> v{1,2,3,4,5,6,7,8,9,10};
  vector<long> odds;
  vector<long> evens;
  
  string s = "abcd1234";  
  string letters;
  string numbers;

  cout << boolalpha;
  
  //iterators, explicit and auto for same type
  vector<long>::iterator v_start = v.begin();
  string::iterator s_start = s.begin();
  auto v_past_end = v.end();
  auto s_past_end = s.end();

  /*  basic, common functions: 
      dereference, not equal, preinc
  */
  // deref, lvalue and rvalue
  cout << "V Start: " << *v_start << endl;
  cout << "S_Start: " << *s_start << endl;
  *v_start = 100;
  *s_start = 'z';
  cout << endl;

  // increase by one, pre-increment
  cout << "Increase one by one. Pre-increment " << endl;
  //++v_start;
  cout << "V_Start: " << *v_start << endl;
 // ++s_start;
  cout << "S_Start " << *s_start << endl;

  cout << endl;
  // comparison, not equal
  cout << "Comparison, Not Equal" << endl;
  cout << (s_start != s_past_end) << endl;

  /* basic capabilities allow for this */
 cout << "print with iterators" << endl;
  for(auto itr=v_start; itr != v_past_end; ++itr)
    cout << *itr << ", ";

  cout << endl;

  cout << "V_Start: " << *v_start << endl;

  /* some containers allow more operations */
  //vector iterator math
  cout << "Iteration Math: " << endl;
  cout << "Third:"<< *(v_start + 2) <<endl;
  cout << "Tenth:"<< *(v_past_end - 1) <<endl;
  cout << "Who knows:"<< *v_past_end<< endl;
  cout << "Grouping???:"<< (*v_past_end - 1) <<endl;
  cout << (v_start > v_past_end) << endl;

  cout << endl;

  cout << "Gather Odds and Evens using Iterators " << endl;
  // gather odds and evens, use iterators
  for(auto itr = v.begin(); itr != v.end(); ++itr)
    if (*itr % 2)
      odds.push_back(*itr);
    else 
      evens.push_back(*itr);

  cout << "Gather Letters and Numbers " << endl;
  // gather letters and numbers
  for (auto itr = s.begin(); itr != s.end(); ++itr)
    if ( isalpha(*itr) )
      letters.push_back(*itr);
    else if ( isdigit(*itr) )
      numbers.push_back(*itr);
    
}

