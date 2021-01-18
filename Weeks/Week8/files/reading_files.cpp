
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <utility>
#include <vector>
using std::vector;
#include <fstream>
#include <algorithm>
using std::string; using std::set; using std::map; using std::pair;
using std::ifstream; using std::cout; using std::endl; using std::to_string;
using std::invalid_argument;

// create custom data struture here



void print_server ( ServerData &server_in ) {
// using iterators to print

    for(auto it=server_in.begin();it!=server_in.end();++it)  //Loop to iterate over map elements
    {
        cout<<it->first<<": ";    
        for(auto it1= it->second.begin(); it1 != it->second.end(); it1++)
            cout<<*it1<<", ";
        cout<<"\n";   
    }
}


void ParseFileData(const string &fname){


    ifstream inFile(fname);   //ifstream is the txt file object?

    bool result;

    //error handling for no file found
    if(!inFile){
        throw std::invalid_argument("invalid argument");
    }

    if (inFile.is_open()){

        string username, command, server_name;

        while (inFile >> username >> command >> server_name ){ //each name/command one at a time

            if ( command != "join" && command != "leaving")
            {
                cout << "ERRORRRRR!!!" << endl;
            }
            // else tho
            if ( command == "join")
            {
                cout << "Joining:  " << username << " : " << server_name << endl;
                //result = //send to add connection
            }
            else if (command == "leaving"){

                cout << "Leaving " << username << " : " << server_name << endl;
            }

         
        }


       
        
        
    }
    inFile.close(); // close file


    // print Server here just for show?



}

    


int main(){

    // send file to our function
    ParseFileData("file.txt");

}