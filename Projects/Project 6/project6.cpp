#include<string>
using std::string;
#include<iostream>
using std::cout; using std::cin; using std::endl;
#include<vector>
using std::vector;

#include<sstream>
using std::ostringstream;




string vec_2_str ( const vector<long>& v)
{
    string string_returned;
    ostringstream oss;

    for(auto iter = v.cbegin(); iter != v.cend(); ++iter){

        oss << *iter << ", ";
    }
    string_returned = oss.str();
    return string_returned.substr(0, string_returned.size() - 2);
    

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
    int limit = 50 + num; //get high enough values back in vector for the limit?
    string b_string = ""; 
   // int vec_length;
    vector <long> vec;

    vec = gen_nstep_vector (limit, nstep);  // Unsure How I decide what the limit will be?


    b_string.append(vec.size(), '0');


    cout << "Vector Size: " << vec.size() << endl;
    
    for ( int x = vec.size(); x > 0; x-- ){

        if (vec[x] <= num)
        {
            num -= vec[x];
            //cout << "Number: " << num << endl;
            b_string[x] = '1'; 

        }
      
       
    }
    // drop trailing 0 (for index 0) from string we just converted into binary code
    return b_string.substr(1,vec.size()-2);
}
long nstep_coding_to_num (const string& coding, const vector<long>& nstep_sequence)
{
    long code_num = 0;

    for ( int i = 0; i <= coding.size(); i++)
    {
        (coding[i] == '1') ? (code_num += nstep_sequence[i+1]) : (code_num += 0);
    }

    return code_num;
}



int main(){

    vector<long> v = gen_nstep_vector(140,2);

        //num_to_nstep_coding
    string result = num_to_nstep_coding(140,2);
    cout << result << endl;

    //nstep_coding_to_num
    long result_num = nstep_coding_to_num(result, v);
    cout << result_num << endl;


    return 0;

}
