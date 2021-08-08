#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int main()

{
    //here some of our input values
    int input_number;

    int sum = 0;

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

    for ( int k = 0; k <= 1000; k++ )
    {
        // B is representing a K-Factor Placeholder
        if (((sum*k) + 1 ) == input_number )
        {
            cout << " The K factor for " << input_number << " is " << k << endl;
            break;

        }
    }

}
