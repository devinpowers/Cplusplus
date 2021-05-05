
#include <iostream>
using std::cout; using std::cin; using std::endl;

#include <vector>
using std::vector;
using std::iterator;
  

void print_vector (vector<long> vector)
{
    for (int i = 0; i < vector.size(); i++)
    {
        cout << vector[i] << "\t";
    }
}

int main () 

{
    // call gen_nstep_vector with limit and a step
    // then print

    long limit = 274;
    long n_step = 2;
    long n_element = 0;

    vector <long> vec{1,1}; // vector for 3 n_steps

    while (n_element <= limit )
    {
        for (int n = vec.size() - n_step; n < vec.size(); n++ )
        {
            n_element += vec[n];
        }
        if (n_element <= limit)
        {
            //add to vec
            vec.push_back(n_element);
            //reset n_element
            n_element = 0;
        }
    }

    print_vector(vec);


} 