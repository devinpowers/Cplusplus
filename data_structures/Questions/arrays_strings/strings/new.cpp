#include <string>
using std::string;
#include <vector>
using std::vector;
#include <iostream>
using std::cout;
using std::endl;

string reverseWords(string s) 
{ 
    vector <string> v;
    string temp = s;
    temp.clear();
    s = s +'.';
    
    for(int i = 0; i  < s.length(); ++i)
    {
        if(s[i]=='.')
        {
            v.push_back(temp);
            temp.clear();
        }
        else
        {
            temp=temp + s[i];
        }
    }
    for(int i = v.size()-1; i>=0; --i)
    {
        // loop over vector and add . after each word
        temp = temp+v[i];
        if(i!=0)
        {
            temp=temp+'.';
        }
    }
    return temp;
} 


int main()

{    
    string str = "Hello.Devin.Powers.OK.Big.CowGirls";

    cout << "String before reverse: " << str << endl;
    cout << "String after reversal: " ;
    cout <<reverseWords(str) << endl;
}