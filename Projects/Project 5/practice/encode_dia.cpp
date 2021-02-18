#include <iostream>
using std::cout; using std::cin; using std::endl;
#include<string>
using std::string;


const string alphabet = "abcdefghijklmnoprstuvwxyz"; //without 'q'






string encode_digraph(string dg, string block1, string block2){
    string result;

    /*
        string dg is a pair of letters passed to our function hre
        Example:  "he" returns "fy"

    */

    char first_letter = dg[0]; // h

    cout << "first letter " << first_letter << endl;

    char second_letter = dg[1];   // e

        /*  Location information:
        row = index/5 (integer division)
        col = index %5
        index = row * 5 + col */
    

    int first_location = alphabet.find(first_letter);
    cout << "First Location:  " << first_location << endl; 
    int first_row = first_location/5;
    cout << "First row: " << first_row << endl;
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

string decode (string msg, string key1, string key2)
{
    string result;

    // take 2 keywords and create_encoding so I can pass them to our decode_digraph functionm

    string block1 = create_encoding(key1);
    string block2 = create_encoding(key2);

    result = decode_digraph(msg,block1,block2);

    return result;

}



int main(){

    string keyword = "keywordabcfghijlmnpstuvxz";
    string example = "examplbcdfghijknorstuvwyz";

    string word = "he";

    string answer;
    answer = encode_digraph(word, example, keyword);

    cout << answer << endl;
}