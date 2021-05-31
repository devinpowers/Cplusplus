#include<vector>
using std::vector;
#include<string>
using std::string; using std::to_string;
#include<map>
using std::map;
#include<utility>
using std::pair;
#include<stdexcept>
using std::range_error;

// Custom Data structure
using Collatz = pair<long, vector<long> >;

/*
  input is a positive (1 or greater) integer
  returns the next collatz number
  if number is 0 or less, throws range_error;
 */
long collatz_next(long n){

    //range error
    if (n <= 0){
        throw range_error("number is not in range > 0.");
    }
    //return next collatz (if isEven) : (if isOdd)
    if(!(n%2)){
        return n/2;
    }
    return 3*n+1;
}

/*
  input is a Collatz pair (pair<long, vector<long > >)
  output is a string of the format
     number: sequence (comma separated) ending in 1
     no trailing comma
*/
string Collatz_to_string(const Collatz &p){
    string result;
    string num = to_string(p.first);
    vector <long> vec = p.second;

    //add number to string
    result += num;
    result += ": ";

    //add vector elements
    for(auto element: vec){
        result += to_string(element);
        result += ",";
    }

    result = result.substr(0, result.size()-1);

    return result;
}

/*
  input is a collatz map (map<long, vector<long> >)and a long
  if the number exists as a key in the map
     returns the Collatz_to_string of that pair
  otw returns an empty string
*/
string sequence_in_map_to_string(map<long, vector<long> > &m, long number){

    long key = m.count(number);

    if(key == 0){
        return "";
    }
    auto value = m.find(key);
    vector <long> thing = value -> second;
    pair <long, vector<long>> pair_thing = {number, thing};
    string result = Collatz_to_string(pair_thing);
    return result;
}

/*
  input is a collatz map (map<long, vector<long> >)and a long
  returns a vector<long>, the collatz sequence for that number
  Operation. As you iterate through the collatz sequence
     - uses collatz_next if the element in question is not in the map
     - if the element *is* in the map, copies the sequence from the map
       to the end of the current sequence and ends.
*/
vector<long> collatz_sequence(map<long, vector<long> > &m, long number){

    vector<long> sequence = {};

    while(number > 1){
        number = collatz_next(number);
        sequence.push_back(number);
    }

    return sequence;
}

/*
  input is a collatz map (map<long, vector<long> >)and a low and high long
  fills the map from low to high inclusive with each element's collatz sequence
  using the function collatz_sequence
*
void collatz_range(map<long, vector<long> > &m, long low, long high){


}
*/
