#include<iostream>
using std::cout; using std::endl; using std::boolalpha;
#include<string>
using std::string;
#include<sstream>
using std::ostringstream;
#include<algorithm>
using std::transform;
#include<iterator>
using std::ostream_iterator;
#include<utility>
using std::pair; using std::make_pair;
#include<map>
using std::map;

template<typename K, typename V>
string pair_to_string(pair<K,V> p){
  ostringstream oss;
  oss << p.first <<":"<< p.second;
  return oss.str();
}


int main(){
  cout << boolalpha;
  map<string, string> phone_book{ {"jill", "555-2323"}, {"bill", "555-1212"} };
  map<string, string>::iterator iter;

   
  // iter points to the pair
  cout << "Iter Points to the pair:" << endl;
  for (iter = phone_book.begin(); iter != phone_book.end(); ++iter)
    cout << pair_to_string( *iter ) << ", ";
  cout << "\n" << endl;

  // element *is* the pair
  cout << "Element is the pair: " << endl;
  for(pair<string,string> element : phone_book)
    cout << pair_to_string( element ) << ", ";
  cout << "\n" << endl;

}

