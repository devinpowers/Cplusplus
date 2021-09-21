#include <iostream>
using std::cout; using std::cin; using std::endl;
#include<string>
using std::string;


const string alphabet = "abcdefghijklmnoprstuvwxyz"; //without 'q'


// Block 1:  examplbcdfghijknorstuvwyz
// Block 2:  keywordabcfghijlmnpstuvxz


string encode_digraph(string dg, string block1, string block2){
    string result;

    /*
        string dg is a pair of letters passed to our function hre
        Example:  "he" returns "fy"

    */

    char first_letter = dg[0];
    char second_letter = dg[1];

        /*  Location information:
        row = index/5 (integer division)
        col = index %5
        index = row * 5 + col */
    

    int first_location = alphabet.find(first_letter);
    int first_row = first_location/5;
    int first_col = first_location%5;

    int second_location = alphabet.find(second_letter);
    int second_row = second_location/5;
    int second_col = second_location%5;

    //get new indexes from blocks
    int first_new_index = first_row * 5 + second_col;
    int second_new_index = second_row * 5 + first_col;

    cout << endl;

    cout << "First new Index: " << first_new_index << endl;
    cout << "Second new Index: " << second_new_index << endl;

    result += block1[first_new_index];
    result += block2[second_new_index];

    return result;

}

int main() {

    cout << endl;
    cout << "Encdode Diagrpah: " << encode_digraph  ("he", "examplbcdfghijknorstuvwyz", "keywordabcfghijlmnpstuvxz") <<  endl;
    cout << endl;


}
