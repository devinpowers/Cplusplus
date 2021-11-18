/*	

	Question 1: Write a program that checks if a string has all unique characters
	Extra: What if you cannot use any other data structures

	In this method, we solve it by writing a IsUniqueChars function that takes string and loops through it.
	We use vector<bool> to represented if we've seen character before. We Loop over the string and turn each element into a int value and check if it's not in our character_set vector, if not we set value to true and continue to loop through.
	If the element is already in our character_set (means duplicate) we return false.
*/



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

    vector<string> words = {"abcde", "Devin","Powers", "abcdefghijklmnopqrstuva", "Lebron", "instagram", "oowowowowow", "cvbnmpoiwersajkl"} ;
    
    for (auto word : words)
    {
        cout << word << string(": ") << boolalpha << isUniqueChars(word) << endl;
    }
}

