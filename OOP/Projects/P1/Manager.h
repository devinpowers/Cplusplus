

#ifndef MANAGER_H
#define MANAGER_H

#include <cstdlib>
#include <vector>
#include <iostream>
#include "Employee.h"

using std::vector;
using namespace std;

class CManager: public CEmployee {

    protected:
        vector<CEmployee*> group;
        string dept;
            
    public:
        CManager(){
            firstName = "DefMan_first";
            lastName = "DefMan_second";
            hireYear.tm_year = 2015;
            salary = 42;
            group = vector<CEmployee*>();
            dept = "CSE";
        }
        CManager(string fn, string ln, int s, tm hy, string d, vector<CEmployee*> &g) :CEmployee(fn, ln, s, hy){
            firstName = fn;
            lastName = ln;
            hireYear.tm_year = hy.tm_year;
            salary = s;
            dept = d;
            group = g; //bad practice but it's how the main is supposed to work it seems?
        }
        
        CManager(CManager &other){
            firstName = other.firstName;
            lastName = other.lastName;
            salary = other.salary;
            hireYear = other.hireYear;
            dept = other.dept;
            group = other.group;
        }
        
        CManager& operator=(CManager &other){
            if(this!=&other){
                this->firstName = other.firstName;
                this->lastName = other.lastName;
                this->salary = other.salary;
                this->hireYear = other.hireYear;
                this->dept = other.dept;
                this->group = other.group;
            }
            return *this;
        }
        
        virtual ~CManager(){
            for(int i = 0; i<group.size(); i++){
                delete (group[i]);
            }
            group.clear();
        }
        
        string getDepartment()const{return dept;}
        void setDepartment(string d){dept = d;}
        
        vector<CEmployee*> getGroup()const{return group;}
        void setGroup(vector<CEmployee*> &g){group = g;}
        
        virtual void DisplayEmployee()const{
            cout << firstName << " " << lastName << "\tSalary: " << salary 
                    << "\tHire Year: " << hireYear.tm_year << "\t" 
                    << dept << " Subordinates: " << group.size() << endl;
            for(int i=0; i<group.size(); i++){
                cout<< "\t Subordinate: ";
                group[i]->DisplayEmployee();
            }
        }
};

#endif