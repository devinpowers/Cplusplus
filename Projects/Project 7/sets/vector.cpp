
#include<iostream>
using std::cout; using std::endl; using std::boolalpha;
#include<string>
using std::string;
#include<sstream>
using std::ostringstream;
#include<utility>
using std::pair; using std::make_pair;
#include<map>   
using std::map;
#include<set>
#include<vector>
using std::vector;
using std::set;
#include<fstream>
using std::ifstream;
using std::invalid_argument;
using std::domain_error;
using std::set_intersection;
using std::set_symmetric_difference;
using std::inserter;
#include <algorithm>
using std::sort;
using std::copy_n;
using std::back_inserter;


int main()
{
    vector<string> vec = { "Abe", "Bob", "Carrie", "Devon", "Jimmy", "noah", "Zoe"};


    for ( auto it = vec.begin(); it != vec.end(); it ++)
    {
        cout << *it << endl;
    }

    set<string> set_1,set_2;
    //print this vector

  // cout << "Vector Size is: " << vec.size() << endl;
    int vec_size_half = vec.size()/2;

    if ( vec.size() % 2 != 0)
    {
        //add 1 to vec_size half
        vec_size_half -= 1;
    }

   // auto it = vec.begin();

    for (int i = 0; i <= vec_size_half; i++)
    {
        // add to set_1

        set_1.insert(vec[i]); // add
    }

    for (int a = (vec_size_half + 1); a <= vec.size(); a++ )
    {
        set_2.insert(vec[a]);
    }

    
   // cout << "Vec Size half: " << vec_size_half << endl;
    cout << endl;
    cout << "Set 1: " << endl;
    for (auto element : set_1){
        cout << element << "\n";
    }

    cout << endl;
    cout << "Set 2: " << endl;
    for (auto element : set_2){
        cout << element << "\n";
    }

    
  
    

    
}