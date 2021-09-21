
#include <iostream>
using std::cout; using std::endl;
#include<string>
using std::string;


struct AbstractEmployee {
    // serve as a contract
    virtual void AskForPromotion() = 0;       

};


struct Employee: AbstractEmployee{

private:

    string Company;
    string Email;
    int Age;
protected:
    string Name;

public:
    
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

        // provide logic
        
        if (Age > 30){
            cout << Name << " got promoted!! " << endl;
        }
        else
        {
            cout << Name << " sorry NO promotion for you!" << endl;
        }
        
    }
    
    virtual void Work(){

        cout << Name << " is checking email, task backlog, performing tasks....." << endl;

    }
};

struct Developer:public Employee {

public: 
    string  FavProgrammingLanguage;

    Developer(string name, string company, string email ,int age, string favProgrammingLanguage)

        :Employee(name, company, email, age)
    {
        FavProgrammingLanguage = favProgrammingLanguage;
    }
    void FixBug(){

        cout << Name << " Fixed bug using " << FavProgrammingLanguage << endl;

    }

    void Work() {
        cout << Name << " is writing " << FavProgrammingLanguage <<  "code " << endl;
    }

};


struct Teacher: public Employee {

    string Subject;

    void PrepareLesson(){
        cout << Name << " is preparing " << Subject << " lesson" << endl;
    }
    Teacher(string name, string company, string email ,int age, string subject)

        :Employee(name, company, email, age)
    
    {
        Subject = subject;

    }

    void Work() {
        cout << Name << " is teaching " << Subject << endl;
    }

};

int main()
{      

    Developer d = Developer ("Kobe", "Lakers", "braynt@lakers", 15, "C++");

    Teacher t = Teacher("Jacob", "Cool School", "jack@school.com", 34, "Math");

    Employee *e1 = &d; //hold reference to derived class

    Employee *e2 = &t;

    e1->Work();
    e2->Work();

    e1->AskForPromotion();
    e2->AskForPromotion();
}


