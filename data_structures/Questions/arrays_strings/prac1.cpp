#include <string>
using std::string;
#include <vector>
using std::vector;
#include <iostream>
using std::cout;
using std::endl;
using std::boolalpha;

bool isUniqueChars(const string &str){

		if (str.length() > 128){
			return false;
		}

		vector<bool> char_set_(128); // Vector contains true and false for 

		for (int i = 0; i < str.length(); i++){

			int value = str[i]; // Each Char has a int representation

			cout << "Value: " << value << endl;
			if (char_set_[value]){ // if true
				return false;
			}
			else{
				char_set_[value] = true;
			}
		}
		return true;

}


int main(){

    // Vector of words passed to our function to check if their are duplicate characters

    vector<string> words = {"abcde", "Devin", "Lebron", "instagram", "oowowowowow", "cvbnmpoiwersajkl"} ;
    
    for (auto word : words)
    {
        cout << word << string(": ") << boolalpha << isUniqueChars(word) <<endl;

    }
}






