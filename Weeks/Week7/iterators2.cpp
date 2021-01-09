
#include<iostream>
using std::cout; using std::endl; 
#include<vector>
using std::vector;
#include<string>
using std::string;
#include<sstream>
using std::ostringstream;

template<typename T>
string vec_to_string(const vector<T>& v){
  ostringstream oss;
  for(auto iter=v.cbegin(); iter!=v.cend(); ++iter){
    oss << *iter << ", ";
    // *iter = *iter + 1; // can't, it's low-level const
  }
  string result = oss.str();

  return result.substr(0, result.size() - 2 );
}

template<typename T>
vector<T> rev_vector(vector<T>& v){
  vector<T> result;
  for(auto iter=v.rbegin(); iter!=v.rend(); ++iter)
    result.push_back(*iter);

  return result;
}
    

int main (){
  vector<long> v{1,2,3,4,5,6,7,8,9,10};
  string s = "abcd1234";  

  cout << "initial:\n" << vec_to_string(v) << endl;
  
  //rev = rev_vector(v);

  auto rev = rev_vector(v);
  cout << "reversed vector\n" <<  vec_to_string(rev) << endl;

  // check vector right now

  cout << "Checking Vector to see if anything changed: " << endl;
  for (auto element : v ){

    cout << element << ",";
  }
  
  cout << endl;

  /* range-for and iter loop equivalents */
  
  // copy, change not reflected
  for (auto element : v)
    element += 1;
  
  for (auto pos=v.begin(), end=v.end(); pos != end; ++pos){
    auto element = *pos;
    element += 1;
  }
  cout <<"first version\n" << vec_to_string(v)<<endl;

  // reference, change is reflected
  for (auto &element : v)
    element += 1;
  
  for (auto pos=v.begin(), end=v.end(); pos != end; ++pos){
    auto &element = *pos;
    element += 1;
  }
  cout <<"second version (done twice)\n" << vec_to_string(v)<<endl;  

  // const reference, can't modify
  for (const auto &element : v)
    // element += 1;
  
  for (auto pos=v.begin(), end=v.end(); pos != end; ++pos){
    const auto &element = *pos;
    // element += 1;
  }
  
}

