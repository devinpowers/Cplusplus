

#include<iostream>
using std::cout; using std::endl;
#include<set>
using std::set;
#include <algorithm>
using std::sort; using std::set_intersection;
using std:: set_symmetric_difference;
#include<string>
using std::string;
#include<vector>
using std::vector;


int main()
{
    int first[] = { 5, 10, 15, 20, 25 };
    int second[] = { 50, 40, 30, 20, 10 };
    int n = sizeof(first) / sizeof(first[0]);
         
    vector<int> v(10);
    //declaring iterator for vector
    vector<int>::iterator it, st;
    //print_vector(v);


    //using sort algorithm
    sort(first, first + n);
    sort(second, second + n);

 
    // Using default function
    it = set_symmetric_difference( second, second + n, first, first + n, v.begin());

    cout << "Set Symmetric Difference  " << (it - v.begin()) << " elements:\n";

    for (st = v.begin(); st != it ; ++st)
    {
        cout << ' ' << *st;
    }
    cout << endl;
}

