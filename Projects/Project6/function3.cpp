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


 string num_to_nstep_coding ( long num, long nstep )
{
    
    string b_string = "00000000000";  // hardcoded??
    vector <long> vec;


    vec = gen_nstep_vector (150, nstep);  // Unsure How I decide what the limit will be?

    // print vec
    print_vector(vec);
    
    for ( int x = vec.size(); x > 0; x-- ){

        if (vec[x] <= num)
        {
            num -= vec[x];
            //cout << "Number: " << num << endl;
            b_string[x] = '1'; 

        }
      
       
    }
    // drop trailing 0 (for index 0) from string we just converted into binary code
    return b_string.substr(1,10);
}



int main() {

    //call function
    cout << "Code: " << num_to_nstep_coding(100,2) << endl;

}