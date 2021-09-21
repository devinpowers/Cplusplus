#include <iostream>
#include <string>

using namespace std;

int main () 
{
    string greeting = "What the Hell";

    greeting.replace(9, 4, "Heaven");

    cout << greeting << endl;

}

