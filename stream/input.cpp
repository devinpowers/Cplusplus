
#include <iostream>
#include <fstream>
#include <vector>


using namespace std;

int main()
{
    ifstream file ("tacos.txt"); // wont open if file doesnt exist

    vector <string> names;

    string input; // where names are being stored tempoary

    while(file >> input )   // will evaluate as true if the read is sucessful (return file)
    {
        names.push_back(input);

    }

    for(string name : names )
    {
        cout << name << endl;
    }
    return 0;


}
