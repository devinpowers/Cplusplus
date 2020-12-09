
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void play_game()
{
    int random = rand() % 251; // function call function number between ( 0 and 250 )
    cout << random << endl;

    cout << "Guess a number: ";
    while(true)
    {
        int guess;
        cin >> guess;
        if (guess == random)
        {
            cout << "You win!!\n";
            break;

        } 
        else if (guess < random)
        {
            cout << "Too Low\n";
        } 
        else
        {
            cout << "Too High\n";
        }
            
    }
}

int main () 
{
   
   srand(time(NULL)); //getting number from system clock, simple method

   int choice;

   do
   {
       cout << "0. Quit\n1. Play Game\n";
       cin >> choice;

       switch(choice)
       {
       case 0:
           cout << "Bye thank you for Playing!!\n";
           return 0;
       case 1:
            play_game();
            break;

        }
   } 
   while (choice != 0);
   

}

