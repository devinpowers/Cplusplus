#include<iostream>
using std::cout; using std::endl;
#include<set>
using std::set;
#include<string>
using std::string;
#include<vector>
using std::vector;


int main()
{
    set<string> NBA;

    // insert method

    NBA.insert("Jordan");
    NBA.insert("Lebron"); 
    NBA.insert("Lebron"); //sets doesnt add duplicates!! 
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

    // remove method for sets

    NBA.erase("Jordan");

    cout << "After removing the GOAT:   ";

    for (it = NBA.begin(); it != NBA.end(); it++)
    {
        cout << *it << ", ";
    }
    cout << endl;

    // check for number of elements in a set

    cout << "The NBA has " << NBA.size() << " elements" <<endl;


    //clearing the set

    NBA.clear();

    cout << "The NBA has " << NBA.size() << " elements" <<endl;


}



