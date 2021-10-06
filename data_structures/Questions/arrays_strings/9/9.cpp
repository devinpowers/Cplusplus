#include <iostream>
using std::cout;
using std::endl;

#include<string>
using std::string;
using std::sort;
using std::boolalpha;

bool isSubstring(string &str1, string &str2){

	// check is s2 is a rotation of r1
	// can i just sort them and see ??
	// First check length of 

	if (str1.length() != str2.length()){
		return false; 
	}

	// sort string 1 and 2

	sort(str1.begin(),str1.end());
	sort(str2.begin(),str2.end());

	// Now compare if they equal


	if (str1 == str2 )
	{
		return true;
	}
	else {
		return false;
	}

}


int main() {

	string one, two;
	one = "waterbottle";
	two = "erbottlewat";

	cout << "Are the two strings substrings: " << endl;
	cout << boolalpha << isSubstring(one, two) << endl;

}