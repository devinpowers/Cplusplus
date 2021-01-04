#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>
using std::cout; using std::cin; using std::endl;
#include<string>
using std::string;


const string alphabet = "abcdefghijklmnoprstuvwxyz"; //without 'q'

string create_encoding(string key){
    string keyword;

    for(auto ch: key){
        if(keyword.find(ch)==-1 and alphabet.find(ch)!= -1){ //add char one at a time but no dupes in key or alphabet
            keyword+= ch;
        }
    }

//    for(auto ch: alphabet){
  //      if(keyword.find(ch)==-1 && key.find(ch) == -1){ //if its not in there add it in
    //        keyword+=ch;
      //  }
    //}


    return keyword;
}



int main()
{
    string keyword = "example";


    cout << "Created Encoding: " << create_encoding(keyword) << endl;
  
}

