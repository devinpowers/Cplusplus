
#include <iostream>
using std::cout;
using std::endl;


#include <string>

//Function that take in two paramters (two integar values) and then returns a int!

int multiply(int a, int b)
 {
    return (a * b);
}

int main()
{
  int sum;

  // Call function and pass parameters into it. set equal to Integar value named sum!
  sum = multiply(100, 5);

  cout << "Pass Integers into Function and here is the output: " << endl;

  cout << "100 * 5 = " << sum << endl;

}






