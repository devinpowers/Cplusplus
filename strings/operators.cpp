

#include <iostream>
#include <string>

using namespace std;


int main () 
{
    string answer = "Devin";
   
    string guess;

    cout << "Guess my name!: ";
    cin >> guess;


    if ( !(guess == answer) )  
    {

        cout << "You got the Wrong Name Sir!\n";
        cout << "The name you entered was: " << guess << endl;
    }

    else
    {
        cout << "You entered the Right name Devin!\n";
    }
    

    return 0;
}


