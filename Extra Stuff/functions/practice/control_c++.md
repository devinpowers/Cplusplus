---
layout: archive
permalink: /C++/control_c++
title: "Control in C++"
author_profile: true

header:
  image: "/images/tower3.jpeg"
  
---



- Insert Notes here for learning C++ Control Flow


IF Else Conditions


Code For using the Or Operator:


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



Code for Using Not Equal Operator:

    #include <iostream>
    #include <string>

    using namespace std;


    int main () 
    {
        string answer = "Devin";
    
        string guess;

        cout << "Guess my name!: ";
        cin >> guess;


        if ( (guess != answer) )  
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








Code for using the Not Operator:

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


### Loops 

![inserting an Image](/images/C++/Control/Page1.jpg)


#### For Loops 

![inserting an Image](/images/C++/Control/for.jpg)


For Loop Code:

    #include <iostream>

    using namespace std;

    int main () 
    {
        for(int i =0; i < 10; i++ )
        {
            cout << i << endl;
        }
        return 0;
    }

Display name multiple times using a for loop:

    #include <iostream>

    using namespace std;

    int main() {
        for (int i = 1; i <= 5; ++i) {
            cout <<  "My name is Devin!!! " << endl;
        }
        return 0;
    }


We can also do a Range Based for loop.


    #include <iostream>

    using namespace std;

    int main() {
    
        int number_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
        for (int n : number_array) {
            cout << n << " ";
        }
    
        return 0;
    }


#### While Loop

![inserting an Image](/images/C++/Control/while.jpg)

While Loop Code:

    #include <iostream>

    using namespace std;

    int main () 
    {
        int i = 0; // initization

        while (i < 10) // Condtion
        {
            cout << i << endl;

            i ++; // Update
        }

        return 0;
    }


While Loop Factorial Example:

    #include <iostream>

    using namespace std;

    int main () 
    {
        int fact = 5;
        int factorial = fact; // 5 * 4 * 3 * 2 * 1
        int i = factorial - 1;

        while( i > 1)
        {
            factorial *= i;
            i-- ;

        }

        cout << "Factorial of " << fact << " is: " << factorial << endl;

    }


Here is an example of a while loop that will sum up numbers given, until 0 is entered in:


    #include <iostream>
    using namespace std;

    int main() {
        int number;
        int sum = 0;

        cout << "Enter a number: ";
        cin >> number;

        while (number != 0) {

            sum += number;

            // take input again if the number is not 0
            cout << "Enter a number: ";
            cin >> number;
        }

        // display the sum
        cout << "\nThe sum is " << sum << endl;
        
        return 0;
    }




#### Do While Loop

![inserting an Image](/images/C++/Control/dowhile.jpg)


Do While Loop Code for Guessing the Correct Password:

    #include <iostream>

    using namespace std;

    int main () 
    {
        string  password = "Hellotacos123";
        string guess;
        do 
        {
            cout << "Guess the password: ";
            cin >> guess;

        } while(guess != password);

        cout << "Exited out the 'Do While Loop' because you entered the Correct Password" << endl;

    }


Can we do this "do while" loop using a regualr while loop?

    #include <iostream>

    using namespace std;

    int main () 
    {
        string  password = "Hellotacos123";
        string guess;
        cout << "Guess the Password: ";
        cin >> guess;
        while(guess != password)
        {
            cout << "Guess the Password: ";
            cin >> guess;
        }

        cout << "Exited out the 'Do While Loop' because you entered the Correct Password" << endl;

    }


## Break and Continue Keywords

![inserting an Image](/images/C++/Control/break1.jpg)
![inserting an Image](/images/C++/Control/break2.jpg)
![inserting an Image](/images/C++/Control/break3.jpg)


Break out of Code Example:

    #include <iostream>
    #include <string>

    using namespace std;

    int main () 
    {
    string sentence = "Hello my name is Devin";

    for (int i = 0; i < sentence.size(); i++ )
    {
        cout << sentence[i] << endl;
        if (sentence[i] == 'o')
        {
            cout << "Found o!\n ";
            break;
        }
    }
    cout << "Done!\n";
    }


Continue Keyword to skip example:

    #include <iostream>
    #include <string>

    using namespace std;

    int main () 
    {
    string sentence = "Hello my name is Devin";

    for (int i = 0; i < sentence.size(); i++ )
    {
        if (sentence[i] == 'o')
        {
            continue;
        }
        cout << sentence[i] << endl;
        
    }
    cout << "Done!\n";
    }



Using Continue in a for loop while printing the numbers 1 to 10, and skipping current iteration and updating the expression once i = 5


    #include <iostream>


    int main() {
        for (int i = 1; i <= 10; i++) {
            if (i == 5) {
                continue;
            }

            std::cout << i << std::endl;
        }

        return 0;
    }

Output

    1
    2
    3
    4
    6
    7
    8
    9
    10


## Switch

Has to be an int type that is passed in the switch!
switch(int)

![inserting an Image](/images/C++/Control/switch1.jpg)
![inserting an Image](/images/C++/Control/switch2.jpg)

switch example:

    #include <iostream>

    #include <string>

    using namespace std;

    int main()
    {
        int age;

        cout << "What is you Age?: ";
        cin >> age;

        switch(age)
        {
            case 25:
                cout << "You're age is 25\n";
                break;

            case 15:
                cout << "Your age is 15";
                break;

            case 13:
                cout << "Your age is 13";
                break;

        }

        return 0;

        
    }



## Goto Statement
