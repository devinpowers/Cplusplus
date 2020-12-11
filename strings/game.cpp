
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void print_array(int array[], int count )
{
    cout << "Here were your Guesses: ";
    for (int i = 0; i < count; i++)

    {
        cout << array[i] << "\t";
    }
    cout << endl;

    cout << "It took you: " << count << " trys" << endl;

}
void play_game()
{
    int guesses[251];
    int guess_count = 0;

    int random = rand() % 251; // function call function number between ( 0 and 250 )
    cout << random << endl;
    cout << "Guess a number: ";

    while(true)
    {
        int guess;
        cin >> guess;
        guesses[guess_count++] = guess;  // increment 


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
    print_array(guesses, guess_count);
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

