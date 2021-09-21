

#include <iostream>
#include <string>

using namespace std;

int main () 
{
    enum class Season{summer, spring, fall, winter};

    Season now = Season::winter;

    switch(now)
    {
        case Season::summer:
            break;
        case Season::spring:
            break;
        case Season::fall:
            break;
        case Season::winter:
            cout << "Stay Warm!\n";
            break;

    }
    return 0;

}

