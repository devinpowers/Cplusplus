
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using std::string;
#include <iostream>
using std::cout;
using std::endl;


class Employee{

    protected:
        string First_Name;
        string Last_Name;
        unsigned short salary_;
        unsigned short hire_year;

    public:
        // General Constructor
        Employee(string firstName, string lastName, unsigned short salary, unsigned short hireYear)
        {
            First_Name = firstName;
            Last_Name = lastName;
            salary_ = salary;
            hire_year = hireYear;
        };

        //  Constructor if nothing is passed
        Employee(){
            First_Name = "";
            Last_Name = "";
            hire_year = 0;
        }
        
        virtual ~Employee(){} // Deconstructor
        
        // Getters and Setters

        string get_First_Name(){ return First_Name; }

        string get_Last_Name(){ return Last_Name;}

        unsigned short get_Salary(){ return salary_;}

        unsigned short getHireYear(){return hire_year;}

        void set_First_Name(const string first_name){First_Name = first_name;}

        void set_Last_Name(const string last_name){ Last_Name = last_name;}

        void set_Salary(const unsigned short sal){salary_ = sal;}

        void set_HireYear(const unsigned short hire_y){ hire_year = hire_y;}
        
        virtual void DisplayEmployee()const{
            cout << First_Name << " " << Last_Name << ": " << salary_  << "; " << hire_year << endl;
        }
};
#endif /* EMPLOYEE_H */

