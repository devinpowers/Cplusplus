
#include <iostream>
#include <string>
#include <utility>
#include <fstream>
#include <algorithm>
using std::string; 
using std::ifstream; using std::cout; using std::endl; using std::to_string;
using std::invalid_argument;

// create custom data struture here



void ParseFileData(const string &fname){


    ifstream inFile(fname);   //ifstream is the txt file object?

    bool result;

    //error handling for no file found
    if(!inFile){
        throw std::invalid_argument("invalid argument DUDE!!");
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

}

int main(){

    // send file to our function
    ParseFileData("file.txt");
}



