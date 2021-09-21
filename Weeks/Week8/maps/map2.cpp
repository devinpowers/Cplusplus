#include<iostream>
using std::cout; using std::endl;
#include<string>
using std::string;
#include<sstream>
using std::ostringstream;
#include<utility>
using std::pair; using std::make_pair;
#include<map>
using std::map;
#include<algorithm>
using std::transform;
#include<iterator>
using std::ostream_iterator;


template <typename K, typename V> // key and value
string pair_to_string(pair<K,V> pair)
{
    ostringstream oss;
    oss << pair.first << ":" << pair.second;
    return oss.str();
}

template <typename K, typename V>
void print_map(const map<K,V>& map){
    transform(map.cbegin(), map.cend(), ostream_iterator<string> (cout, ", "), pair_to_string <K,V>);
}

int main()
{

    map <string, string> phone_book{ {"Devin", "914-8235"}, {"Abe", "896-9223"}};

   // print_map(phone_book);
   
    pair< map<string, string>::iterator, bool > result;

    result = phone_book.insert({"Kyle", "892-3213"});

    cout << "Results.second: " << result.second << endl;
    cout << pair_to_string( *(result.first)) << endl;



}

