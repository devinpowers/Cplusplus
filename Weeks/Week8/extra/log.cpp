
#include<iostream>
using std::cout; using std::cin; using std::endl;
#include "log.h"

void Initlog()
{
    Log("Initializing Log");
}
void Log( const char* message)
{
    cout << message << endl;
}
