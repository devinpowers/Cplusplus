#include<iostream>
using std::cout; using std::endl;
#include<iterator>
using std::ostream_iterator;
#include<set>
using std::set;
#include<string>
using std::string;

int main()
{
    set<string> NBA;

    // insert method

    NBA.insert("Jordan");
    NBA.insert("Lebron");
    NBA.insert("Kobe");

    //declaring iterator to a set
    set<string>::iterator it;

    cout << "Elements of the set:     ";

    for (it = NBA.begin(); it != NBA.end(); it++)
    {
        cout << *it << ", ";
    }
    cout << endl;
}