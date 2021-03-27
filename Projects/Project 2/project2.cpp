


#include <iostream>

using std::cout;
using std::cin;
using std::endl;


//* example of hyper perfect numbers

// 1950625 ( k = 4), 159841 (k= 10), 1570153 (k  12)


int main()

{
    //here some of our input values
    long int input_number;

    int k_factor = 10000;

    long int sum = 0;

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
      }
       
    }
    cout << "The sum of the divisors of value " << input_number << " is: " << sum << endl;
    for ( int b = 0; b <= k_factor; b++ )
    {
        if (((sum*b) + 1 ) == input_number )
        {
            cout << "The K factor for " << input_number << " is " << b << endl;
            break;

        }
    }

    return 0;


}







