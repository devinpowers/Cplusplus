

#include <string>
using std::string;
#include <vector>
#include <iostream>
using std::cout;
using std::endl;

string compress_string(string &str ){

	string compressed_string = "";

    int count = 1;
    
    for (int i = 1; i < str.length(); i++ ){

        if (str[i-1] == str[i]) {
            ++count;
        }
        else {
            compressed_string +=str[i-1]; 
            compressed_string += std::to_string(count); 
            count = 1; 
        }
    }

    compressed_string += str[str.length() - 1]; 
    compressed_string += std::to_string(count); 

	return compressed_string;
}


int main() {
	string prac = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbiiiiiiiippppppppppwwwwwwaaaaabbzzzzQQQQ";
	cout << compress_string(prac) << endl;
}






