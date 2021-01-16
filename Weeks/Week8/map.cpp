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

template<typename K, typename V>
void print_map(const map<K,V>& m){
  transform(m.cbegin(), m.cend(), ostream_iterator<string>(cout, ", "),pair_to_string<K,V>);
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

  // Send  to print_map function 
  cout << "Print Map: " << endl;
  print_map(phone_book);
  cout << "\n" << endl;

  pair< map<string,string>::iterator, bool> result;


  result = phone_book.insert({"eric", "555-3434"}); 

  cout << "Result: " << result.second << endl;   // we can use pair.second or pair.first
  cout << "Pair to String: " << pair_to_string( *(result.first) ) << endl;
  cout << "\n" << endl;

  
  result = phone_book.insert(make_pair("eric", "555-4545") );
  cout << "Result.second: " << result.second << endl;          // false as in failed to add
  cout << "\n" << endl;

  cout << "Pair to String: " <<  pair_to_string( *(result.first) ) << endl;

  cout << "\n" << endl;

  cout << "Print Map Again:  ";
  print_map(phone_book);

  cout << endl;
  cout << "\n" << endl;

    // change phone number once we find eric 
  iter = phone_book.find("eric");
  if (iter != phone_book.end() ){
    // *(iter).second = "555-4545";
    iter->second = "555-4545";
    // iter->first = "irving";
  }
  print_map(phone_book);
  cout << "\n" << endl;

  cout << "Phone_book[eric]: ";
  cout << phone_book["eric"] << endl;   //print value of string
  phone_book["eric"] = "555-5656";   
  cout << "Change erics number to: ";     
  cout << phone_book["eric"] << endl; 
  cout << phone_book["john"] << endl;   // searching for a John, but there isnt one, so it will add it and use a default Value 
  phone_book["john"]= "555-3434";     // change John number to
  print_map(phone_book);
  cout << "\n" << endl;

  string number = phone_book["eric"];      // store erics number 
  phone_book.erase("eric");               //erase key
  phone_book["erik"] = number;            // add back eric and his number

  // no increment, done in the body
  for(iter = phone_book.begin(); iter != phone_book.end(); ){
    if (iter->first[0] == 'j')
      iter = phone_book.erase(iter); // returns next element           // if first letter in key is 'j' erase the key and valuye
    else
      ++iter;
  }
  cout << "Print Map: ";
  print_map(phone_book); 
  cout << "\n" << endl;

}



