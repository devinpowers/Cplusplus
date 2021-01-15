#include<iostream>
using std::cout; using std::cin; using std::endl;
#include<vector>
using std::vector;
#include<string>
using std::string;
#include<sstream>
using std::ostringstream;


//Funtion 1!!!!
string vec_2_str ( const vector<long>& v)
{
    string string_returned;
    ostringstream oss;

    for(auto iter = v.cbegin(); iter != v.cend(); ++iter){   //iterate thru vector

        oss << *iter << ", ";
    }
    string_returned = oss.str();
    return string_returned.substr(0, string_returned.size() - 2); // - 2 to remove the space and , 
    

}

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

    long next_element = 0;

    for ( int x = 1; x <= (nstep - 2); x++)      // this here adds "push_back"  new vector value
    {                                            // based on the back*2 so 1*2, vec{1,1,2}, then                                               //
       vec.push_back(vec.back()*2);               // back*2 again so 2*2, vec{1,1,2,4}.... etc
    }                                            // Seed numbers required to Start the Sequence

    // lets add the 
    while (next_element <= limit )
    {
        for (int n = vec.size() - nstep; n < vec.size(); n++ )
        {
            next_element += vec[n];
        }
        if (next_element <= limit)
        {
            vec.push_back(next_element);  // add sum of previous n_step terms as the next element in our vector
        
            next_element = 0; // reset next element sum to 0
        }
    }
    return vec;
}



int main(){

    vector <long> vector2; 
    
    long steps = 4;
    long limit = 1000;

    vector2 = gen_nstep_vector(limit, steps);   // put in limit and n steps into funtion

    //can we print our return vector? lets pass it to our function 1 where we turned a vector into a string!!
    cout <<"\n";
    cout << "Our new string for " << steps << " steps is: " << vec_2_str(vector2) << endl;
    cout << "\n";



    
}