


#include<iostream>
using std::cout; using std::endl; using std::boolalpha; using std::cin;
#include<string>
using std::string;

int main () {

    string s;

    cout << "Please Input your full name: ";

    getline(cin, s);







    for ( decltype(s.size()) i = 0; i < s.size(); i++ )
    {
        cout << i << " : " << s[i] << endl; // print index and character at that index


    }

}


