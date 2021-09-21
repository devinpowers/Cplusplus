
#include<iostream>
using std::cout; using std::endl;
#include <vector> 
using std::vector;
#include<string>
using std::string;
#include <algorithm> 
using std::transform;


int increment( int l)
{
    return l+9;
}

int main() 
{ 
    vector<int> vec = {1,2,4,5,6};

    vector<int> new_vec(7);

    cout << "Vector before Transform: ";
     for ( auto element : vec )
    {
        cout << element << ", ";
    }

    transform( vec.begin() , vec.end(), vec.begin(), increment);

    cout << endl;

    cout << "Vector after Transform: ";

    for ( auto element : vec )
    {
        cout << element << ", ";
    }
    cout << endl;

} 





