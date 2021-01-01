


#include <iostream>

using namespace std;


int main()

{

    int input_number;
    int sum = 0;

    int k_factor; // another input value

    cout <<  "Enter a number: ";

    cin >> input_number;

    if (input_number < 6)
    {
      cout << "the Factor K is 0" << endl;
    }

    // otherwise we proceed

    for (int i = 2; i < input_number; i++ )
    {
      if (input_number % i== 0)
      {
        cout << "the Number " << i << " is Divisible in " << input_number  << endl;
        sum += i;
      };
      sum += 1
    }

    cout << "The Sum of Values divisble by " << input_number << " is: " << sum << endl;






}







