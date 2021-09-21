#include <iostream>
#include <sstream>
#include <string>
using std::istringstream;
using std::string;
using std::cout;
  
// Driver Code
int main()
{
    // Input string
    string a("1 2 3");
  
    // Object class of istringstream
    istringstream my_stream(a);
  
    // Variable to store number n
    int n;
  
    // Stream a number till white space
    // is encountered
    my_stream >> n;
  
    // Print the number
    cout << n << "\n";
}
