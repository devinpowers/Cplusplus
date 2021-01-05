#include <iostream>
using std::cout; using std::cin; using std::endl;
#include<string>
using std::string;


void print_pairs(string pairs)                  
{
    for (auto letter : pairs)
    {
        cout << "1st letter: " << letter << endl;
    
    }
    cout << "End: " << endl;
}



int main() {

    string msg = "Hellomynameisdevinpowerss";

    cout << "Msg length: " << msg.length() << endl;

    //if msg is odd add a "x" to the end

    if (msg.length() % 2 != 0)
    {
        msg += "x";
    }

    // loop through msg and send pairs to function

    for ( int i = 0; i < msg.length(); i++)
        {
            // send pairs to print_pairs function above

            print_pairs(msg.substr(i,i+1));

            i++;
            i++;

       
        }

    
}
