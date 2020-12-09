// Arrays

#include <iostream>


using namespace std;


void print_array(int array[])
{
    cout << sizeof(array) << endl;


}



int main()
{
    int guesses[10] = {12, 43, 23, 43, 23};

    cout << sizeof(guesses) << endl;

    print_array(guesses);

}



