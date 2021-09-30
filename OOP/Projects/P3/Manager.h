

#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"
#include <vector>

class Manager: public Employee{

protected:

    vector<Employee*> group; // Vector of pointers to group of Employees
    string department;
        
public:
    // Default Constructor
    Manager(){
        
        cout << "Using Constructor 1 to construct a Manager " << endl;

        First_Name = "Default_First_Name";
        Last_Name = "Default_last_Name";
        hire_year = 2002;
        salary_ = 42;
        department = "CSE";
    }

    Manager(string f_n, string l_n, string dep, int sal, short int h_y) :Employee(f_n, l_n, sal, h_y){

        cout << "Using Constructor 2 to Construct a Manager" << endl;

        First_Name = f_n;
        Last_Name = l_n;
        hire_year = h_y;
        salary_ = sal;
        department = dep;
    }
    
    Manager(Manager &other){

        cout << "Using Copy Constructor for Manager" << endl;
        // Copy Constructor
        First_Name = other.First_Name;
        Last_Name = other.Last_Name;
        salary_ = other.salary_;
        hire_year = other.hire_year;
        department = other.department;
        //group = other.group; // Maybe??
    }
    
    Manager& operator=(Manager &other){
        // Operator Overloaded
        cout << "Using Operator Overloader for Manager " << endl;
        if(this!=&other){
            this->First_Name = other.First_Name;
            this->Last_Name = other.Last_Name;
            this->salary_ = other.salary_;
            this->hire_year = other.hire_year;
            this->department = other.department;
           // this->m_group = other.group;
        }
        return *this;  // Return Pointer to this new "object"
    }
    
    virtual ~Manager(){} // Deconstructor
    
    string getDepartment()const{return department;}

    void setDepartment(string d){department = d;}
    
    vector<Employee*> getGroup()const{return group;}

    void setGroup(vector<Employee*> &g){group = g;}
        
    virtual void addEmployee(Employee* emp){group.push_back(emp);}

    virtual Employee getEmployee(int i){return *(group[i]);}

    
    // Displays Empolyee, Const is so nothing is changed

    virtual void DisplayEmployee()const{
        cout << First_Name << " " << Last_Name << ": " << salary_ << "; " << hire_year << "; "<< department << endl;
    }

};


#endif /* MANAGER_H */

