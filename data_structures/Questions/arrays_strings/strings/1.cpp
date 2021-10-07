#include<iostream>
using std::cout;
using std::endl;

#include<string>
using std::string;
#include<vector>
using std::vector;

void reverseWords(string str){

    vector<string> temp;

    // loop thru str and removed word
    int ptr1 = 0;
    int ptr0 = 0;
    
    // Hi.my.name.is.devin
    for (int i = 0; i < str.length(); i++ )
    {
        // Start both pointers at the beginging of the loop in the string
        i
        // loop thru the str and remove/push words onto .
        if (str[i] != '.')
        { 
            cout << str[i] << endl;
            ptr1 += 1; //move pointer
        }
        cout << "Pointer 1 value: " << ptr1 << endl;
        // else
        temp.push_back(str.substr(ptr0,ptr1));
        // Reset pointers
        ptr0 = ptr1 + 1;
        ptr1 = ptr1 + 1;

    }

    for (auto element : temp ){
        cout << element << endl;
    }

    
    // return a string reversed
}



int main(){

    string pass = "Hello.World.My.Name.Is";

    reverseWords(pass);
    
}