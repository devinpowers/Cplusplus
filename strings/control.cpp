

#include <iostream>

using namespace std;

int main () 

{
    cout << "How old are you? ";
    int age;
    cin >> age;

    if (age < 13)

    {
        cout << "You're not old enough\n";
     
    }
    else if( age < 19)

    {
        cout << "You're almost 19!\n";

    }

    else 

    {
        cout << "You're older than 19\n";

    }

    return 0;
}

