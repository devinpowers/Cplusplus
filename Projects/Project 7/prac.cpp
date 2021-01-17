
#include<iostream>
using std::cout; using std::endl; using std::boolalpha;
#include<string>
using std::string;
#include<sstream>
using std::ostringstream;
#include<utility>
using std::pair; using std::make_pair;
#include<map>
using std::map;
#include<algorithm>
using std::transform;
using std::find;
#include<iterator>
#include <fstream>
using std::ifstream;

void print_strings (string a, string b, string c)
{  
   cout << a << ": " << b << ": " << c << endl;


}

int main(){
   std::string line;
   std::ifstream infile("prac.txt");

   while (std::getline(infile, line))
   {
      std::istringstream iss(line);
      string a, b, c;
      if (!(iss >> a >> b >> c)) { break; } // error

      print_strings (a,b,c);
}


}
