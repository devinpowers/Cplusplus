#include<iostream>
using std::cout; using std::endl;
#include<string>
using std::string;
#include<vector>
using std::vector;

#include<algorithm>
using std::transform;
using std::back_inserter;
using std::copy;

int main() 
{ 
    // Declaring first container 
    vector<int> v1 = { 1, 2, 3 }; 
  
    // Declaring second container for 
    // copying values 
    vector<int> v2 = { 4, 5, 6 }; 
  
    // Using std::back_inserter inside std::copy 
    copy(v1.begin(), v1.end(), back_inserter(v2)); 
    // v2 now contains 4 5 6 1 2 3 
  
    // Displaying v1 and v2 
    cout << "v1 = "; 
  
    int i; 
    for (i = 0; i < 3; ++i) { 
        cout << v1[i] << " "; 
    } 
  
    cout << "\nv2 = "; 
    for (i = 0; i < 6; ++i) { 
        cout << v2[i] << " "; 
    } 
  
    return 0; 
} 