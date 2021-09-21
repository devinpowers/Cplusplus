
#include<iostream>
using std::cout; using std::endl;
#include <map> 
using std::map;
#include<string>
using std::string;
#include <fstream>
using std::fstream;
#include<set>
using std::set;


using ServerData = map<string, set<string>>;  // ServerData is a "Type"



string ParseServerData(const std::string &fname)
{
    cout << "fuck me" << endl;
}


int main() 
{ 
    // filestream variable file 
    fstream file, fname;
    
    
    //file.open("file.txt");

    //send fstring to function above

    file.open("file.txt");

    ParseServerData(file);



    
} 