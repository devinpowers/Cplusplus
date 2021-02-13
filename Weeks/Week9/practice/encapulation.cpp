
#include <iostream>
using std::cout; using std::endl;
#include<string>
using std::string;

struct Employee{

public:
    // attributes
    string Name;
    string Company;
    string Email;
    int Age;

    void IntroduceYourself()
    {
        cout << "Hi, My name is " << Name << endl;
        cout << "I work for " << Company << endl;
        cout << "I am " << Age << " years old" << endl;
        cout << "My email address is: " << Email << endl;

    }
    Employee(string name, string company, string email, int age){

        Name = name;
        Company = company;
        Email = email;
        Age = age;   
        }
};

int main()
{
    Employee employee1 = Employee("Devin", "ADAC", "powers88@msu.edu", 25);

    employee1.IntroduceYourself();

}



