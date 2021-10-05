#include <string>
using std::string;
#include <vector>
using std::vector;
#include <iostream>
using std::cout;
using std::endl;›
using std::boolalpha;

bool isUniqueChars(const string &str){

		if (str.length() > 128){
			// If more than 128 Characters long, there is a duplicate somewhere!
			return false;
		}
		vector<bool> char_set(128); // Vector contains true and false for 


		for (int i = 0; i < str.length(); i++){
			// Loop over string 

			int value = str[i];
			if (char_set[value]){ // if true
				// char_set contains char, return false, as there is a duplicate alreadys
				return false;
			}
			else{
				char_set[value] = true;
			}
		}

		return true;
}



int main(){

    // Vector of words passed to our function to check if their are duplicate characters

    vector<string> words = {"abcde", "Devin", "Lebron", "instagram", "oowowowowow", "cvbnmpoiwersajkl"} ;
    
    for (auto word : words)
    {
        // cout << word << string(": ") << boolalpha << isUniqueChars(word) <<endl;
		cout << word << string(": ")  << isUniqueChars(word) <<endl;

    }

}

