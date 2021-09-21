#include <iostream>
using std::cout; using std::endl;
#include<string>
using std::string;



// represents Blueprint
struct Employee{
    // inside the class we need to put attributes and behaviors
public:
    string Name;
    string Company;
    int Age;

    void Introduceyourself(){

        cout << "Hello my name is " << Name << endl;
        cout << "I am "  << Age << " years old." << endl;
        cout << "I work for " << Company << endl;
    }

    Employee(string name, string company, int age){

        Name = name;
        Company = company;
        Age = age;   
    }

};


int main()
{
    Employee employee1 = Employee("Devin", "ADAC", 100);


    Employee employee2 = Employee("Kobe", "Lakers", 43);

    employee1.Introduceyourself();
    employee2.Introduceyourself();
 

}

// constructor doesnt have a return type