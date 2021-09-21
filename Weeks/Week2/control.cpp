

#include<iostream>
using std::cout;
using std::endl;
using std::cin;

int main () {
  // basic for loop
  int i, j; // Global

  // comma separated fields. Only one type in the init field
  // i and j are int, two increments in expression

  for (i = 10, j = 20; i * j < 500; i += 5, j += 5){

        cout << "i:"<<i<<", j:"<<j<<endl;
  }
  cout << "Final i:" << i << ", j:" << j << endl;

}


