#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>
using std::cout; using std::cin; using std::endl;
#include<string>
using std::string;


const string alphabet = "abcdefghijklmnoprstuvwxyz"; //without 'q'



string encode_digraph(string dg, string block1, string block2){
    string result;

    char first_letter = dg[0];
    char second_letter = dg[1];

    /*  Location information:
        row = index/5 (integer division)
        col = index %5
        index = row * 5 + col */

    int first_location = alphabet.find(first_letter);

    cout << "First Location: " << first_location << endl;
    int first_row = first_location/5;
    cout << " First Row: " << first_row << endl;

    int first_col = first_location%5;

    cout << "First Column: " << first_col << endl;

    int second_location = alphabet.find(second_letter);
    int second_row = second_location/5;
    int second_col = second_location%5;

    //get new indexes from blocks
    int first_new_index = first_row * 5 + second_col;
    int second_new_index = second_row * 5 + first_col;

    result += block1[first_new_index];
    result += block2[second_new_index];

    return result;
}

int main() {

    

    cout << "Encdode Diagrpah: " << encode_digraph  ("ld", "examplbcdfghijknorstuvwyz", "keywordabcfghijlmnpstuvxz") <<  endl;

}
