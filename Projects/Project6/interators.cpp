
#include <iostream>
using std::cout; using std::cin; using std::endl;

#include <vector>
using std::vector;
using std::iterator;

int main(){



    vector <long> values = {1,2,3,4,5};

    vector <long >::iterator i;


    for ( i = values.begin(); i != values.end(); i++)
    {
        // how to get value at iterator? de-reference it
        cout << *i << endl;
    }


}