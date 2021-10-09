/*
    Check for Isomorphic strings

    given two strings str1 and str2 check if the two strings are isomorphic to each other

    one to one mapping

*/

#include<iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;
#include <vector>
using std::vector;


#define MAX_CHARS 256


bool isomorphicStrings(string str1, string str2){

    int m = str1.length(), n = str2.length();

    // length of both must be the sasme to corresponsing

    if (m != n){
        return false;
    }

    bool marked[MAX_CHARS] = { false}; // to mark visited characters in str2

    int map[MAX_CHARS];
    memset(map, -1, sizeof(map));
 
    // Process all characters one by on
    for (int i = 0; i < n; i++) {
        // If current character of str1 is seen first
        // time in it.
        if (map[str1[i]] == -1) {
            // If current character of str2 is already
            // seen, one to one mapping not possible
            if (marked[str2[i]] == true)
                return false;
 
            // Mark current character of str2 as visited
            marked[str2[i]] = true;
 
            // Store mapping of current characters
            map[str1[i]] = str2[i];
        }
 
        // If this is not first appearance of current
        // character in str1, then check if previous
        // appearance mapped to same character of str2
        else if (map[str1[i]] != str2[i])
            return false;
    }
 
    return true;
}





int main(){


    cout << isomorphicStrings("aab", "xxy") << endl;
    cout << isomorphicStrings("aab", "xyc") << endl;


}