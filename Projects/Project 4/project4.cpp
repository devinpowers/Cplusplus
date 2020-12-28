

// C++ program to find the length of the longest substring 
// without repeating characters 
#include <iostream>
#include <string>
#include <vector>
using namespace std; 
  
// This functionr eturns true if all characters in str[i..j] 
// are distinct, otherwise returns false 
bool areDistinct(string str, int i, int j) 
{ 
  
    // Note : Default values in visited are false 
    vector<bool> visited(26); 
  
    for (int k = i; k <= j; k++) { 
        if (visited[str[k] - 'a'] == true) 
            return false; 
        visited[str[k] - 'a'] = true; 
    } 
    return true; 
} 
  
// Returns length of the longest substring 
// with all distinct characters. 
int longestUniqueSubsttr(string str) 
{ 
    int n = str.size(); 
    int res = 0; // result 
    for (int i = 0; i < n; i++) 
        for (int j = i; j < n; j++) 
            if (areDistinct(str, i, j)) 
                res = max(res, j - i + 1); 
    return res; 
} 
  
// Driver code 
int main() 
{ 
    string str = "";
    cout << "Please Enter a String to check: ";
    cin >> str;
    cout << "The input string is " << str << endl; 
    int len = longestUniqueSubsttr(str); 
    cout << "The length of the longest non-repeating "
            "character substring is "
         << len << endl;
    return 0; 
} 