

#ifndef MANAGER_H
#define MANAGER_H

#include <cstdlib>
#include <vector>
#include <iostream>
#include "Employee.h"

using std::vector;
using namespace std;

class Manager: public Employee {

    protected:

        vector<Employee*> group;
        string department;

    public:
        Manager(){
            // Default Constructor

            first_name = ""



            group  = vector<Employee*>();
            department = "CSE";
        }
        Manager(string first, string last, int sal, tm hyear, string dept, vector<Employee*> &g) :Employee(first, last, sal, hyear){
            // Constructor

            first_name = first;
            last_name = last;
            hire_year.tm_year = hyear.tm_year;
            salary = sal;
            department = dept;
            group = g;
            
        }

        Manager(Manager &other){

        }

        Manager& operator=(Manager &other){

            if (this! = &other){
                this->first_name = other.first_name;
                this->last_name = other.last_name;
                this->salary = other.salary;
                this->hire_year = other.hire_year;
                this->department = other.department;
                this->group = other.group;
            }
            return *this; /// pointer to t
        }

        virtual ~Manager(){
            for (int i = 0; i < group.size(); i++ ){
                delete (group[i]);
            }
            group.clear();
        }

        string GetDepartment()const{return department;}
        void SetDepartment(string d){department = d;}

        vector<Employee*> GetGroup()const{return group;}
        void SetGroup(vector<Employee*> &g) {group = g;}

        virtual void DisplayEmployee()const{
            cout << first_name << " " << last_name << "\tSalary: " << salary 
                << "\tHire Year: " << hire_year.tm_year << "\t"
                << department << "Subordinates: " << group.size() << endl;
            
            for (int i = 0; i <group.size(); i++ ){
                cout << "\t Subordinate: ";
                group[i]->DisplayEmployee();
            }
        }
        

};


#endif