

#include <iostream>
using std::cout;
using std::endl;
#include <vector>
using std::vector;

int main()
{
    vector<int> my_ints { 1, 2, 3, 4, 5};

    for (auto element : my_ints){

        cout << element << " : ";
    }
    cout << endl;

    for (auto & x : my_ints){

        x += 2;
    }

    for (auto element : my_ints)
    {
        cout << element << " : ";
    }
    cout << endl;
   

}
