#include<iostream>
using std::cout;
using std::endl;

#include<vector>
using std::vector;
#include<algorithm>

int main ()
{
    std::vector<int> vec { 10, 20, 30, 40 };
    // Iterator used to store the position thats what the iterator is for !! to store the position
    // of searched element
    std::vector<int>::iterator it;
      
    // Print Original Vector
    std::cout << "Original vector :";
    for (int i=0; i<vec.size(); i++)
    {
        cout << " " vec[i];
    }          
    std::cout << "\n";
      
    // Element to be searched
    int ser = 30;
      
    // std::find function call
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