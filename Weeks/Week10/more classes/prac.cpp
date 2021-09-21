#include<iostream>
using std::cout;
using std::endl;
using std::ostringstream
#include<vector>
using std::vector;

#include<string>
using std::string;


struct NBA {

public:
    string first_name = "First_Name";         // Default
    string last_name = "Last_Name";
    int number = 0;

    NBA() = default; // <-- Default Constructor

    NBA(string first, string last, int num) : first_name(first), last_name(last), number(num) {};

    // implicit to-cast

    NBA(string);

    // explicit to-cast

    //explicit NBA(string);

};

NBA::NBA(string s) {
    // Implicit to-cast

    // format is first:last:number
    vector<string> fields;
    split(s, fields,  ":")

    first_name = fields[0];
    last_name = fields[1];
    number = stol(fields[2]);


}

string NBA_to_string (const NBA & n){
    ostringstream oss;

    oss << "First Name: " << n.first_name << ", Last Name: " 
        << n.last_name << ", Number: " << n.number;

    return oss.str(); 
}

int main() {

    NBA player("Devin", "Powers", 3);

    NBA player2; // Default;

    cout << player.first_name << endl;
    cout << player.last_name << endl;
    cout << player.number << endl;


    cout << player2.first_name << endl;
    cout << player2.last_name << endl;
    cout << player2.number << endl;
    
    string s = "Devin:Powers:3";
    
    cout << NBA_to_string(s) << endl;


}