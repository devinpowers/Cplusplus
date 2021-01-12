#include<iostream>
using std::cout; using std::cin; using std::endl;
#include<vector>
using std::vector;
#include<string>
using std::string;


void print_vector (vector<long> vector)
{
    for (int i = 0; i < vector.size(); i++)
    {
        cout << vector[i] << "\t";
    }
}

// Function 2:
vector <long> gen_nstep_vector (long limit, long nstep)
{
    vector <long> vec{1,1}; // initial vector with 2 seed values 

    long n_element = 0;

    int adjust_nstep = nstep - 2;

    for ( int x = 1; x <= adjust_nstep; x++)
    {
       vec.push_back(vec.back()*2);
    }

    // finish up adding rest of the values to the Vector vec 

    while (n_element <= limit )
    {
        for (int n = vec.size() - nstep; n < vec.size(); n++ )
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
    return vec;
}



int main(){

    vector <long> vector2; 
    

    vector2 = gen_nstep_vector(200, 2);

    //can we print our return vector?

    print_vector(vector2);


    
}