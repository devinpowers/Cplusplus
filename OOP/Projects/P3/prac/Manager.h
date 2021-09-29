

#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"
#include <vector>

class Manager: public Employee{
protected:
    vector<Employee*> group;
    string dept;
        
public:
    Manager(){
        // Default Constructor
        cout << "Using Constructor 1" << endl;

        m_FirstName = "DefMan_first";
        m_LastName = "DefMan_second";
        m_hire = 2015;
        m_salary = 42;
        dept = "CSE";
    }
    Manager(string fn, string ln, string d, int s, short int hy)
    :Employee(fn, ln, s, hy){
        cout << "Using Constructor 2" << endl;
        // Another Constructor
        m_FirstName = fn;
        m_LastName = ln;
        m_hire = hy;
        m_salary = s;
        dept = d;
       // group = g; //bad practice but it's how the main is supposed to work it seems?
    }
    
    Manager(Manager &other){

        cout << "Using Copy Constructor " << endl;
        // Copy Constructor
        m_FirstName = other.m_FirstName;
        m_LastName = other.m_LastName;
        m_salary = other.m_salary;
        m_hire = other.m_hire;
        dept = other.dept;
        //group = other.group;
    }
    
    Manager& operator=(Manager &other){
        // Operator Overloaded
        cout << "Using Operator Overloader! " << endl;
        if(this!=&other){
            this->m_FirstName = other.m_FirstName;
            this->m_LastName = other.m_LastName;
            this->m_salary = other.m_salary;
            this->m_hire = other.m_hire;
            this->dept = other.dept;
           // this->m_group = other.group;
        }
        return *this;  // Return Pointer to this new "object"
    }
    
    virtual ~Manager(){} // Deconstructor
    
    string getDepartment()const{return dept;}
    void setDepartment(string d){dept = d;}
    
    vector<Employee*> getGroup()const{return group;}
    void setGroup(vector<Employee*> &g){group = g;}
    
    virtual Employee getEmployee(int i){return *(group[i]);}
    virtual void addEmployee(Employee* emp){group.push_back(emp);}
    
    virtual void DisplayEmployee()const{
        cout << m_FirstName << " " << m_LastName << ": " << m_salary << "; " << m_hire << "; "<<dept << endl;
    }
};

#endif /* MANAGER_H */

