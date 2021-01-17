


#include<iostream>
using std::cout; using std::endl; using std::boolalpha;
#include<string>
using std::string;
#include<sstream>
using std::ostringstream;
#include<utility>
using std::pair; using std::make_pair;
#include<map>
using std::map;
#include<set>
using std::set;
#include<algorithm>
using std::transform;
#include<iterator>
using std::ostream_iterator;



int main()
{
    map < string, set <string> > mymap;
    set <string> s;

    s.insert ("orange");
    mymap.insert(make_pair("car", s));

   
    // add new element to set

    if (mymap.find("car") != mymap.end())
    {
        set<string>& s_ref = mymap["car"];
        s_ref.insert("blue")
    }
    

}