

#include<iostream>
using std::cout; using std::endl; using std::boolalpha;
#include <vector> 
using std::vector;
#include <algorithm> 
using std::copy;
#include<iterator>
using std::back_inserter;

int main() 
{ 
vector<int> v1 = { 1, 8, 2, 3, 1, 3, 10, 12, 67, 90, 100, 82 };
    
vector<int> v2;
    
copy(v1.begin(), v1.end(),back_inserter(v2));
    
// printing new vector
cout << "The new vector elements entered using copy() : ";
for(int i = 0; i < v2.size(); i++)
{
    cout << v2[i] << " ";
}
cout << endl;

} 