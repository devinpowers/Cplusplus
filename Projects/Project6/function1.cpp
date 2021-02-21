
#include<iostream>
using std::cout; using std::cin; using std::endl;
#include<vector>
using std::vector;
#include<string>
using std::string;
#include<sstream>
using std::ostringstream;


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


int main(){


    // pass vector of long to vec_2_str

    vector<long> v{1,3,2,3,5,8,13,21,34,55,89,144,233,377,610};

    string new_vec;


    new_vec =  vec_2_str(v);

    cout << "New String: " << new_vec << endl;
}

