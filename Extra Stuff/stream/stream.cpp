

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()


{
    string filename;
    cin >> filename;

    ofstream file (filename, ios::app); 

    if(file.is_open())   

    {
        cout << "Sucessfully Opened the File\n";

    }
  
    vector <string> names;

    names.push_back("Wade");
    names.push_back("Bosh");
    names.push_back("Austin");


    for (string name : names )
    {
        file << name << endl;

    }

    file.close();

}



