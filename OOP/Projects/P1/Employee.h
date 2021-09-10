
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

class Employee {

    protected:
        string first_name;
        string last_name;
        tm hire_year;
        int salary;

    public:
        Employee(){
            // Defualt Constructor
            first_name = "Devin";
            last_name  = "Powers";
            hire_year.tm_year = 2016;
            salary = 20;
        }
        Employee(string first, string last, int sal, tm hyear){
            first_name = first;
            last_name = last;
            salary = sal;
            hire_year.tm_year = hyear.tm_year;
        }

        Employee(Employee& other){

            // Copy Constructor
            first_name = other.first_name;
            last_name = other.last_name;
            salary = other.salary;
            hire_year = other.hire_year;
        }

        Employee& operator=(Employee& other){
            // Overloaded Operator 
            if (this != &other){
                this->first_name = other.first_name;
                this->last_name = other.last_name;
                this->salary = other.salary;
                this->hire_year = other.hire_year;
        }
        return *this;
        }


        string GetFirstName()const{
            return first_name;
        }

        void SetFirstName(string first){
            first_name = first;
        }
        
        string GetLastName()const{
            return last_name;
        }

        void SetLastName(string last){
            last_name = last;
        }


        tm GetHireYear()const{return hire_year;}

        void set_hire_year(int year){hire_year.tm_year = year;}
        void set_hire_year(tm year){hire_year = year;}

        int getSalary()const{return salary;}
        void setSalary(int s){salary = s;}


        virtual void DisplayEmployee()const{
        cout << first_name << " " << last_name << "\tSalary: " << salary
                << "\t Hiring Year: " << hire_year.tm_year << endl;
    }


};
#endif


