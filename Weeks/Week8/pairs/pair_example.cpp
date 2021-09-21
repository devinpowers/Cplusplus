
#include<iostream>
using std::cout; using std::endl;
#include<string>
using std::string;
#include<vector>
using std::vector;
#include<utility>
using std::pair; using std::make_pair;
#include<sstream>
using std::ostringstream;
#include<iterator>
using std::ostream_iterator;
#include<algorithm>
using std::transform;

#include<map>
using std::map;


using NBA = pair<string, int >;

string pair_to_string (NBA p){

    ostringstream oss;
    oss << p.first << ":" << p.second;
    return oss.str();

}


int main(){


    vector<NBA> v(5, NBA("Jordan", 23));
 
    v.push_back(make_pair("Billups", 1)); // add another to the vector NBA

    transform(v.begin(), v.end(), ostream_iterator<string>(cout, ", "), pair_to_string );

    cout << endl;



}




