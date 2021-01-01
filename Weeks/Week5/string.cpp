#include<iostream>
using std::cin; using std::cout; using std::endl;
#include<string>
using std::string;

/*
  find the smallest (by ASCII value) character
  in the parameter str and return that char
*/
char fn2(string str){
  char ch = str[0];
  for (auto i = str.size(); i>=0; --i){
    cout << ch << endl;
    if (str[i] < ch)
      ch = str[i];
  }
  return ch;
}

/*
  make a substring of the parameter str
  of size 3, consisting of:
  - the smallest chararter as found by fn2
  - the character in front of the smallest
  - the character in back of the smallest.
  Thus fn1("cdeaxyz") --> "eax"
*/
string fn1(string str){
  char ch = fn2(str);
  size_t indx = str.find(ch);
  return str.substr(indx-1, 3);
}

int main (){
  string my_string = "abcdefg";
  cout << "Fixed Function 2: " << fn2_fixed(my_string) << endl;  
  cout << "Fixed Function 1: " << fn1(my_string) << endl;

}

