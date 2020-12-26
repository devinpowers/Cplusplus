// any other includes you think you might need here
#include<iostream>
using std::cout; using std::cin; using std::endl;
#include<iomanip>
using std::setprecision;
#include<string>
using std::string;
// global variable for 
const string code = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

//
// your functions here
//
string encode_sequence(string sequence, char encoder) {
	string results = "";
	if (sequence.length() <= 3) {
		//don't encode
		return sequence;
	}
	else {
		results.push_back(encoder);                       // adds encoder to results string (:)
		results.push_back(code.at(sequence.length() - 4 ));  // Adds decimal reference from code string above ()
		results.push_back(sequence.at(0));
	}
	return results;
}



int main()
{
    string input; 
    char sep;

    cout << "Please Enter a String Sequence to Check: ";
    cin >> input;
    cout << "Please enter a character to seperate the code sequence: ";
    cin >> sep;

    cout << "The Encoded Sequence for the input: " << input << " is: " << encode_sequence (input, sep) << endl;
}