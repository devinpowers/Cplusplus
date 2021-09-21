

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;


double power(double base, int exponent)  //definition and Decleration

{
    double result = 1;

    for(int i = 0; i < exponent; i++)
    {
        result = result * base;
    }
    return result;
}

void print_pow(double base, int exponent)
{
  double myPower = power(base,exponent);
  cout << base << " raised to the " << exponent << " power is " << myPower << ".\n";

}

int main()
{
  double base;
  int exponent;

  cout << "What is the base?:  ";
  cin >> base;
  cout << "What is the Exponent?: ";
  cin >> exponent;
  print_pow(base, exponent);

  print_pow(100,4);
  print_pow(4,2);
}

