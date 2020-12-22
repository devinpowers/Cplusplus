

#include <iostream>

using namespace std;

// Function of hyper_perfect_number



void hyper_perfect_number ( int input_number, int k_factor )

{
   
    long int sum = 0;

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
            cout << "The K factor for " << input_number << " is " << b << endl;
            break; // Break out of the Loop since we have our K Kactor 

        }
    }

}





int main()

{
    long int input_number;
    long int k_factor;
    hyper_perfect_number ( 301, 10);
    hyper_perfect_number ( 808861, 400);
    hyper_perfect_number ( 542413, 400);
    hyper_perfect_number ( 306181, 400);
    hyper_perfect_number ( 5, 400);
    hyper_perfect_number ( 389593, 400);
    hyper_perfect_number ( 176661, 10);
    hyper_perfect_number ( -306181, 400);
    hyper_perfect_number ( 130153, 300);
    hyper_perfect_number ( 96361, 300);
    hyper_perfect_number ( 963261, 300);


    
}


