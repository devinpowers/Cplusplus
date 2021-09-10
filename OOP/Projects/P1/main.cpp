

#include <cstdlib>
#include <iostream>
#include "Employee.h"
#include "Manager.h"
#include "Database.h"

using std::cout;
using std::endl;

int main() {

    cout << endl;

    tm hiring_year; 
    hiring_year.tm_year = 2012;

    vector<Employee*> emps;

    Manager mang("Devin", "Powers", 20, hiring_year, "CSE", emps); 

    mang.DisplayEmployee();
    cout << "Defualt Constructor Check!!!\n";


    // Check Copy Constructors
    Manager manager_one = mang;  // Copy
    manager_one.DisplayEmployee();
    cout << "Copy Constructor Check " << endl;

    // Check Assignment Operator

    hiring_year.tm_year = 2015;
    Manager mang3("SubB_First","SubB_Second",10,hiring_year,"CSE",emps);
    mang3.DisplayEmployee();
    manager_one = mang3;
    manager_one.DisplayEmployee();
    mang3.DisplayEmployee();
    cout<<"Assignment Operator Check\n\n";
    

    //Add subordinates
    emps.push_back(&mang);
    emps.push_back(&manager_one);

        //Add records to database
    vector<Employee*> allEmp;
    Database emp_data(allEmp);

    hiring_year.tm_year=1998;
    emp_data.AddRecord(new Manager("Michael","Scott",30,hiring_year,"CSE",emps));
    hiring_year.tm_year=1999;
    emp_data.AddRecord(new Manager("Bruce","Lee",32,hiring_year,"CSE",emps));
    hiring_year.tm_year=2000;
    emp_data.AddRecord(new Manager("Tom","Brady",35,hiring_year,"EGR",emps));
    hiring_year.tm_year=2001;
    emp_data.AddRecord(new Manager("Dak","Prescott",40,hiring_year,"CHE",emps));
    hiring_year.tm_year=2002;
    emp_data.AddRecord(new Manager("Mike","Evans",50,hiring_year,"EGR",emps));


    
    //display all records
    emp_data.DisplayRecord();

}

