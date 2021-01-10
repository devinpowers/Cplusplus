
#include<iostream>
using std::cout; using std::cin; using std::endl;
#include<vector>
using std::vector;
#include<string>
using std::string;

#include<sstream>
using std::ostringstream;


void print_vector (vector<long> vector)
{
    for (int i = 0; i < vector.size(); i++)
    {
        cout << vector[i] << "\t";
    }
}


int main(){

    vector <long> vec{1,2,3,4,5};

    // add iterator
    vector<long>::iterator i;

    long limit = 4;

    for ( i = vec.begin(); i != vec.end(); ++i)
    {
        cout << *i << " ";
    }

    //  continue to loop through Vector untill we've reached the limit that was passed in
    //while ( find(vec.begin(), vec.end(), limit) != vec.end())
    //{
        // add to vector untill limit is found

    //}

    cout << "finishing up " << endl;
    
    


}