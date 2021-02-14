
#include <iostream>
using std::cout; using std::endl;
#include<string>
using std::string;


struct AbstractEmployee {
    virtual void AskForPromotion() = 0;
};


struct Employee: AbstractEmployee{

private:
    string Name;
    string Company;
    string Email;
    int Age;

public:
    //setter
    void setName(string name) { //setter
        Name = name;
    }
    string getName(){ //getter
        return Name;
    }
    void setCompany(string company){

        if (company == "ADAC"){
            Company = "ADAC Automotive";
        }
        else {
            Company = company;
        }    
    }
    string getCompany(){
        return Company;
    }
    void setEmail(string email){
        Email = email;
    }
    string getEmail(){
        return Email;
    }
    void setAge(int age){
        
        if (age >= 18){
            Age = age;
        }    
    }
    int getAge(){
        return Age;
    }

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
    
    void AskForPromotion(){
        
    }
};

int main()
{
    Employee employee1 = Employee("Devin", "ADAC", "powers88@msu.edu", 25);
    //employee1.IntroduceYourself();

    //Employee employee2 = Employee("Bob", "Apple", "bob23@amazon.com", 67);
    //employee2.IntroduceYourself();

    employee1.setAge(12);
    employee1.setCompany("Bobs Construction Company");

    cout << employee1.getName() << " is " << employee1.getAge() << " years old! "<< endl;

    cout << employee1.getName() << " works at: " << employee1.getCompany() << endl;

    employee1.setCompany("ADAC");
    // after changing the Companies name:
    cout << employee1.getName() << " works at: " << employee1.getCompany() << endl;


}