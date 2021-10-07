#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include<string>
using std::string;
#include <bitset>
#include<algorithm>
using std::find;
#include <vector>



void shortestDistance(string str1, string str2){

    std::vector<string> list = { "the", "quick", "brown", "fox", "quick"};

    int count = 1; // keep count of spaces between word 1 and word 2
    for (auto i : list )
    {
        
        if (i == str1) {

            cout << i << endl;
            
        }
    }


    cout << "-------------" << endl;
    cout << str1 << endl;    
    cout << str2 << endl;

}

int main() {

    string word1 = "the";
    string word2 = "fox";

    shortestDistance(word1, word2);

}