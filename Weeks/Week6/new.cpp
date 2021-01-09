
#include <iostream> 
using std::cout; 
using std::endl;

#include <string> 
using std::string; 

#include<sstream>
using std::istringstream; using std::ostringstream;
// Driver Code 

int main() 
{ 
  string name = "devin";
  string word = "loves";
  string dog = "Kava";

  ostringstream oss;

  oss << name << word << " his dog " << dog << endl;

  cout << oss.str(); // output one big string
  
} 


