

#include <iostream>
using std::cout; using std::cin; using std::endl;
#include<string>
using std::string;


const string alphabet = "abcdefghijklmnoprstuvwxyz"; //without 'q'

string create_encoding(string key){

    string keyword = ""; // string that were returning 


    for (auto character : key) {

        if ( keyword.find(character) == -1)
        {
            keyword += character;
        }
    }

    // need to add the rest of the alphabet to the end!

    for (auto character : alphabet){

        if ( keyword.find(character) == -1 ){

            keyword += character;
        }
    }
    return keyword;

}
string decode_digraph(string dg, string block1, string block2)
{
    string results;

    char first_letter = dg[0];
    char second_letter = dg[1];
    // return index from blocks
    int index_1 = block1.find(first_letter);
    int index_2 = block2.find(second_letter);
    
    int first_row = index_1/5;
    int first_column = index_2 %5;

    int second_row = index_2/5;
    int second_column = index_1 %5;


    int first_location_index = (first_row * 5) + first_column;

    int second_location_index = (second_row * 5) + second_column;

    results += alphabet[first_location_index];
    results += alphabet[second_location_index];

    return results;

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

    string keyword = "keyword";
    string example = "example";

    string word = "fy";

    string answer;
    answer = decode(word, example, keyword);

    cout << answer << endl;
}