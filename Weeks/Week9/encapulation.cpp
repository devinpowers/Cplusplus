
#include <iostream>
using std::cout; using std::endl;
#include<string>
using std::string;


//getter and setters



struct Employee{

private:
    string Name;
    string Company;
    int Age;

public:

    void Introduceyourself(){

        // method to introduce the Employee

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
