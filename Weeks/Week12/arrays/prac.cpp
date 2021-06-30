
#include <iostream>
using std::cout;
using std::endl;


void print_array( int array[])
{
   cout << sizeof(array) << endl;
}

int main() {

   int guesses[] = {12, 43, 23, 56, 69};

   cout << sizeof(guesses) << endl;

   print_array(guesses);

}