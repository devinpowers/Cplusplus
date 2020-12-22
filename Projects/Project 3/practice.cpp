

#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
using std::cout; using std::cin; using std::endl; using std::boolalpha;
using std::to_string; using std::string;

// Project 3
// Practice with Functions and Shit


long divisor_sum ( long number ) 
{ // sums up all the divisors of the number we entered
    long sum = 1; // Sum (1 always divides into any whole number so start sum at one)

    sum = sum/number;

    return sum;
}

long hyper_perfect_number ( long input_number )

{
    long int sum = 0;

    int k_factor = 500;

    if (input_number < 6)

    {
        return 0;
      //cout << "the Factor K is 0" << endl;
    }


    // otherwise we proceed

    for (int i = 2; i < input_number; i++ )
    {
      if (input_number % i== 0)
      {
        //cout << "the Number " << i << " is Divisible in " << input_number  << endl;
        sum += i;
      }
       
    }

    for ( int b = 0; b <= k_factor; b++ )
    {
        if (((sum*b) + 1 ) == input_number )
        {   
            return b;
            // cout << "The K factor of " << input_number << " is " << b << endl;
            // break; // Break out of the Loop since we have our K Kactor 

        }
    }

}

int main(){

    long input;

    cin >> input;

    cout << hyper_perfect_number(input) << endl;

    //cout << divisor_sum(input) << endl;


}

