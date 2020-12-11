

#include <iostream>


using namespace std;

void print_array(int array[], int size )
{
    for (int i = 0; i < size; i++)

    {
        cout << array[i] << "\t";
    }
    cout << endl;

}

int main()
{
    const int SIZE = 10;

    int guesses[SIZE];

    for (int i = 0; i < SIZE; i++ )
    {
       if (cin >> guesses[i])
       {
           //Input Worked
       }
       else
       {
           cout << "Invalid Input" << endl;
           break;
       }
       
    }

   // print_array(guesses, SIZE);
    
}

