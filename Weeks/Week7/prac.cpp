#include<string>
using std::string;
#include<vector>
using std::vector; 
#include<iostream>
using std::cout; using std::endl; 

int main() 
{
    //declaring a vector

    vector<int> v = {5,1,2,3};

    //you have to declar an iterator

    vector<int>::iterator i;

    int j;

    for (i = v.begin(); i != v.end(); i++){
        if ( i == v.begin() +1 ) {

            i = v.erase(i);
        }
    }

    for ( i = v.begin(); i != v.end(); i++ ) {
        cout << *i << " " << endl;
        cout << "OK dude: " << endl;
    }




    
}
