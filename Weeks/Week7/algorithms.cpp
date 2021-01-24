
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
#include <vector> 
#include <algorithm> 
using namespace std; 
int main() 
{ 
    int i, j; 
  
    // Declaring the sequence to be searched into 
    vector<int> v1 = { 1, 2, 3, 4, 5, 6, 7 }; 
  
    // Declaring the subsequence to be searched for 
    vector<int> v2 = { 3, 4, 5 }; 
  
    // Declaring an iterator for storing the returning pointer 
    vector<int>::iterator i1; 
  
    // Using std::search and storing the result in 
    // iterator i1 
    i1 = std::search(v1.begin(), v1.end(), v2.begin(), v2.end()); 
  
    // checking if iterator i1 contains end pointer of v1 or not 
    if (i1 != v1.end()) { 
        cout << "vector2 is present at index " << (i1 - v1.begin()); 
    } else { 
        cout << "vector2 is not present in vector1"; 
    } 
  
    return 0; 
} 

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

    vector<int>::interator it;
    it = std::find (vec.begin(), vec.end(), ser); 

    if (it != vec.end()) 
    { 
        std::cout << "Element " << search <<" found at position : " ; 
        std::cout << it - vec.begin() << " (counting from zero) \n" ; 
    } 
    else
        std::cout << "Element not found.\n\n"; 
          
    return 0;   
    

    
}

