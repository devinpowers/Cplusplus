
#include<iostream>
using std::cout; using std::endl; 
#include<vector>
using std::vector;
#include<string>
using std::string;
#include<numeric>
using std::accumulate;
#include<algorithm>
using std::find;

int main()
{
    vector<int> vec { 10, 25, 30, 45, 55};

    // iterator to store th

    cout << "Original Vector: ";

    for ( auto element : vec)
    {
        cout << element << ", ";
    }

    int search = 30;

    it = std::find (vec.begin(), vec.end(), ser); 

    if (it != vec.end()) 
    { 
        std::cout << "Element " << ser <<" found at position : " ; 
        std::cout << it - vec.begin() << " (counting from zero) \n" ; 
    } 
    else
        std::cout << "Element not found.\n\n"; 
          
    return 0;   
    

    
}

