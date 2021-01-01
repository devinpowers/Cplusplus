
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream file ("tacos.txt"); 
    
    string line;

    getline(file,line );  

    cout << line << "\n";

    return 0;

}
 

