

#include <cstdlib>
#include <iostream>
#include <vector>
using std::vector;

#include "Employee.h"
#include "Manager.h"
#include "EmployeeDatabase.h"
#include "BubbleSort.h"

int main() {
    
    cout<<"*********************** Before Sorting *******************"<<endl;
    vector<Employee*> ev;
    
    Employee* js1e = new Employee("Lebron", "James", 10000, 2011);
    Employee* js2e = new Employee("Kobe", "Bryant", 20000, 2009);
    Employee* js3e = new Employee("Michael", "Jordan", 30000, 2013);
    Manager* tcm   = new Manager("Tom", "Anderson", "Retail", 40000, 2000);

    // Changing the Department
    tcm->setDepartment("Gender Studies");

    // Manager Tom (tcm) adds three employees
    tcm->addEmployee(js1e);
    tcm->addEmployee(js2e);
    tcm->addEmployee(js3e);
    
    //Push Employees and Manager onto a vector of Employee called ev

    ev.push_back(js1e);
    ev.push_back(js2e);
    ev.push_back(js3e);
    ev.push_back(tcm);

    
    // Pass the Vector of Employees + manager to EmployeeDataAdapter

    EmployeeDatabaseAdapter edb(ev);
    
    Employee* jd1e = new Employee("Jimmy", "Reder", 15000, 2010);
    Employee* jd2e = new Employee("Austin", "Adams", 25000, 2011);
    Employee* jd3e = new Employee("Devin", "Powers", 35000, 2012);
    Employee* jd4e = new Employee("Aaron", "Schreck", 9000, 2009);


    Manager* acm = new Manager("Michael", "Jackson","Human Resources" , 45000, 2000); 

    acm->addEmployee(jd1e);
    acm->addEmployee(jd2e);
    acm->addEmployee(jd3e);
    acm->addEmployee(jd4e);


    // Add
    edb.AddRecord(jd1e);
    edb.AddRecord(jd2e);
    edb.AddRecord(jd3e);
    edb.AddRecord(jd4e);
    edb.AddRecord(acm);
    
    cout << endl;
    cout << "Display Record " << endl;

    edb.DisplayRecords(); // print Vector from Data

    cout << endl;

    cout << " _________________________________________________________________ " << endl;
    
    cout << "*********************** After Sorting By First Name Alphabetical *********************" << endl;
   
    BubbleSortFirstName BSFN;
    BSFN.Sort(&edb);
    edb.DisplayRecords();
    
    cout << "*********************** After Sorting By First Name Reverse Alphabetical *********************** " << endl;
    
    BubbleSortFirstNameReverse BSFNR;
    BSFNR.Sort(&edb);
    edb.DisplayRecords();
    
    cout << endl;
    cout<<"*********************** After Sorting By Last Name Alphabetical *********************** "<< endl;
    
    BubbleSortLastName BSLN;
    BSLN.Sort(&edb);
    edb.DisplayRecords();
    
    cout << endl;
    cout<<"*********************** After Sorting By Salary Increasing *********************** "<< endl;
    
    BubbleSortSalary BSS;
    BSS.Sort(&edb);
    edb.DisplayRecords();
    
    cout << endl;
    cout<<"*********************** After Sorting By Salary Decreasing *********************** "<< endl;
    
    BubbleSortSalaryReverse BSSR;
    BSSR.Sort(&edb);
    edb.DisplayRecords();
    
    cout << endl;
    cout<<"*********************** After Sorting By Hire year Increasing *********************** "<< endl;
    
    BubbleSortYear BSY;
    BSY.Sort(&edb);
    edb.DisplayRecords();
    
    cout << endl;
    cout<<"*********************** After Sorting By Hire year Decreasing *********************** "<< endl;
    
    BubbleSortYearReverse BSYR;
    BSYR.Sort(&edb);
    edb.DisplayRecords();    
}

