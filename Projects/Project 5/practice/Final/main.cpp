#include<iostream>
using std::cout; using std::cin; using std::endl; using std::boolalpha;
#include<string>
using std::string; using std::to_string; using std::tolower;
#include<cmath>
#include <locale>
using std::tolower;
#include "functions.h"

int main(){

    //here is some function testing, not included in mimir submission

    //clean string
    cout << "PLease enter a word/phrase to Encode: ";
    string s;
    cin >> s;
    cout << "The orginal Message : " << s << endl;
    cout << endl;
    /*
    string clean = clean_string(s);
    cout << clean << endl;
    */

    //create encoding
    
    //string result = create_encoding("example");
    /*
    // encode_digraph
    string first_keyword = create_encoding("example");
    string second_keyword = create_encoding("keyword");
    string result = encode_digraph("he", first_keyword, second_keyword);
    cout << result << endl;

    */

    /*
    // decode_digraph
    string first_keyword = create_encoding("example");
    string second_keyword = create_encoding("keyword");
    string result = decode_digraph("fy", first_keyword, second_keyword);
    cout << result << endl; 

    */


    string first_keyword = create_encoding("example");
    string second_keyword = create_encoding("keyword");

    string result = encode(s,first_keyword,second_keyword);

    cout << "Encode: " << result << endl;

    cout << endl;

    //now lets decode out result

    string decode_msg = result;

    string result2 = decode(decode_msg, first_keyword, second_keyword);
    cout << "Decode: " <<result2 << endl;
    

    return 0;
}
