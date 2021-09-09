
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <cstdlib>
#include <string>
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

using std::string;

class CEmployee {

    protected:
        string firstName;
        string lastName;
        tm hireYear;
        int salary;

    public:
        CEmployee(){ //Project says we need to implement default constructor
            firstName = "Devin";
            lastName = "Powers";
            hireYear.tm_year = 2015;
            salary = 20;
        }
        CEmployee(string fn, string ln, int muny, tm hy){
            firstName =fn;
            lastName =ln;
            salary = muny;
            hireYear.tm_year = hy.tm_year;
        };
        CEmployee(CEmployee &other){ 
            // Copy Constructor (Rule of 3)
            firstName = other.firstName;
            lastName = other.lastName;
            salary = other.salary;
            hireYear = other.hireYear;
        }
        
        CEmployee& operator=(CEmployee &other){
            // Overloaded Operator(Rule of 3)
            if(this!=&other){
                this->firstName = other.firstName;
                this->lastName = other.lastName;
                this->salary = other.salary;
                this->hireYear = other.hireYear;
            }
            return *this;
        }

        string getFirstName()const{
            return firstName;
            }
        void setFirstName(string fn){
            firstName = fn;
            }
        
        string getLastName()const{
            return lastName;
            }

        void setLastName(string ln){
            lastName = ln;
            }
        
        tm getHireYear()const{return hireYear;}
        
        void setHireYear(int yr){hireYear.tm_year = yr;}
        void setHireYear(tm yr){hireYear = yr;}
        
        int getSalary()const{return salary;}
        void setSalary(int s){salary = s;}
        
        
        virtual void DisplayEmployee()const{
            cout << firstName << " " << lastName << "\tSalary: " << salary 
                    << "\t Hiring Year: " << hireYear.tm_year << endl;
        }
};
#endif


