

#include <iostream>

using namespace std;

// Function of hyper_perfect_number



void hyper_perfect_number ( int input_number )

{
    long int sum = 0;

    int k_factor = 500;

    if (input_number < 6)

    {
      cout << "the Factor K is 0" << endl;
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
            cout << "The K factor of " << input_number << " is " << b << endl;
            break; // Break out of the Loop since we have our K Kactor 

        }
    }

}





int main()

{
    long int input_number;
    hyper_perfect_number ( 301);
    hyper_perfect_number ( 808861);
    hyper_perfect_number ( 542413);
    hyper_perfect_number ( 306181);
    hyper_perfect_number ( 389593);
;


    
}


