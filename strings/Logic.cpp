
#include <iostream>
#include <string>

using namespace std;

int main () 
{
    string answer = "Devin";
    int age_answer = 24;

    string guess;
    cout << "Guess my name!: ";
    cin >> guess;

    int age_guess;
    cout << "Guess my Age: ";
    cin >> age_guess;


    if (guess == answer || age_guess == age_answer )  
    {

        cout << "Correct, you guessed it right!\n";
    }


    else
    {
        cout << "You entered both the age and name incorrectly\n! ";
    }


    return 0;

}

