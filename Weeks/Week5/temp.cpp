
#include<iostream>
using std::cout; using std::endl;

#include <string>
using std::string;


template <typename template_type>
void function (template_type &first, template_type &second) {
    // basic function just prints the values passed in !
    cout << "Value for first: " << first << endl;
    cout << "Value for second: " << second << endl;
}

int main() {

    int a = 10;
    int b = 34;
    double c = 899.42;
    double d = 9002.20202;
    long e = 184834848484844488;
    long f = 120380398923429042;

    string g = "Hello";
    string h = "World";

    // call to fuction

    function(a,b);
    function(c,d);
    function(e,f);
    function(g,h);
    
}