
#include <iostream>
using std::cout; using std::cin; using std::endl;
#include<string>
using std::string;



string encode (string msg, string key1, string key2)
{
    // probably should clean the message first! send it to the clean message! to lower and remove spaces


    string encoded_message;
    string block1;
    string block2;
    // send key 1 and key to create_encoding funtion and return block1 and block2
    //block1 = create_encoding(key1);
    //block2 = create_encoding(key2);

    // check to see if msg is even or odd, if odd add a 'x' onto the end

    if (msg.length() % 2 != 0)
    {
        msg += "x" //add x
    }
    // send pair of letters from msg to encode_diagraph (loop thru the message)

    
    return encoded_message;

}


int main() {

    cout << return 0;
}