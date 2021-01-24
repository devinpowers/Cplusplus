
#include<iostream>
using std::cout; using std::endl;
#include<string>
using std::string;
#include<utility>
using std::pair;
#include<algorithm>
using std::copy;
#include<iterator>
using std::ostream_iterator;
#include<sstream>
using std::ostringstream;
#include<set>
using std::set;


template<typename T>
string set_to_string(const set<T>& s){
  ostringstream oss;
  for (auto element : s)
    oss << element << ", ";
  string result = oss.str();
  result = result.substr(0, result.size() - 2 );
  return result;
}


int main (){

    set<string> groccery_list{"Butter", "Eggs", "Milk"};

    pair<set<string>::iterator,bool> result;
    set<string>::iterator iter;
    result = groccery_list.insert("Bacon");

    if (result.second) // result.second is equal to a boolean
    {
        cout << "Successfully Inserted Bacon " << endl;
    } 
    else
    {
        cout << "Couldn't insert bacon! " << endl;
    }
    
    // Trying to Insert into the Set again!!

    result = groccery_list.insert("Bacon");
        if (result.second) // result.second is equal to a boolean
    {
        cout << "Successfully Inserted Bacon " << endl;
    } 
    else
    {
        cout << "Couldn't insert bacon! " << endl;
    }

    //other stuff

    iter = groccery_list.find("Milk");

    if (iter != groccery_list.end() )
    {
        cout << *iter << endl;
    }

    cout << "Set to String: ";
    cout << set_to_string(groccery_list) << endl;

    groccery_list.erase("Eggs");
    groccery_list.insert("Kale");
    groccery_list.insert("Beer");
    groccery_list.insert("Beans");


    //print again
    cout << "after adding and deleting elements in our set: ";
    cout << set_to_string(groccery_list) << endl;

    for(iter = groccery_list.begin(); iter != groccery_list.end(); ){

        if ( (*iter)[0] == 'B')
        {
            iter = groccery_list.erase(iter);
        }   
        else
          ++iter;
  }

   cout << set_to_string(groccery_list) << endl;

}


