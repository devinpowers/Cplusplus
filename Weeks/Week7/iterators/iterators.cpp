
#include<iostream>
using std::cout; using std::endl;
#include<vector>
using std::vector;
#include<string>
using std::string;
#include<utility>
using std::pair; using std::make_pair;

int main()
{
    
    vector<int> v = {1,2,3,4,5};

    for ( auto itr : v )
    {
        cout << itr << endl;
    }
}





