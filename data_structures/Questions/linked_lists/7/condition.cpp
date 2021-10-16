
#include <iostream>
using namespace std;

int main ()
{
  int a,b,c;

  a=2;
  b=7;
  c = (a>b) ? a : b;

  // condition ? result1 : result2
  // if condition is true the expression will return result1, if not it will return result2

  cout << c << endl;

  return 0;
}