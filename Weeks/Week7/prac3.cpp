
#include<iostream>
using std::cout; using std::endl;
#include<vector>
using std::vector;
#include<string>
using std::string;
#include<sstream>
using std::ostringstream;

template<typename T>
string vector_to_string ( const vector<T> & v) 
{
    ostringstream oss;

    for (auto iter = v.cbegin(); iter != v.cend(); ++iter )
    {
        oss << *iter << ", ";
    }
    string results = oss.str();
    return results.substr(0, results.size() - 2);

}



int main()
{    
    vector<int> v{ 1,2,3,4,5,6,7,8,9,10};

    vector<long> v2{ 1,2,3,4,5,6,7,8,9,10};

    cout << "Vector of Ints to String: " << vector_to_string (v) << endl;

    cout << "Vector of Long to String: " << vector_to_string (v2) << endl;

}




