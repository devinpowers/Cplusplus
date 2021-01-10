
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

    vector<long> vec{1,1};  // initial seed values in our vector

    int n_step = 10;

    int adjust_nstep = n_step - 2; 

    for ( int x = 1; x <= adjust_nstep; x++ ) //loop thru adjusted n_step
    {
        vec.push_back(vec.back()*2) ;
        //cout << "testing " << endl;   // add to vector by accessing last element in vector and multiplying it by 2
    }

    // call to print vector

    cout << "Printed Vector 'seeds' : " << endl;
     
    print_vector(vec);




}