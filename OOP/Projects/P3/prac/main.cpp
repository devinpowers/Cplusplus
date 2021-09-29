

#include <cstdlib>
#include <iostream>
#include <vector>
#include "Employee.h"
#include "Manager.h"
#include "EmployeeDatabase.h"
#include "BubbleSort.h"

int main() {
    
    cout<<"*********************** Before Sorting"<<endl;
    vector<Employee*> ev;
    
    Employee* js1e = new Employee("John", "Smith1", 10000, 2011);
    Employee* js2e = new Employee("John", "Smith2", 20000, 2012);
    Employee* js3e = new Employee("John", "Smith3", 30000, 2013);
    Manager* tcm = new Manager("Tom", "Cruise", "Sales", 40000, 2000);

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
    Employee* jd2e = new Employee("Austin", "ADams", 25000, 2011);
    Employee* jd3e = new Employee("Devin", "Powers", 35000, 2012);

    Manager* acm = new Manager("Michael", "jackson","Human Resources" , 45000, 2000); 

    acm->addEmployee(jd1e);
    acm->addEmployee(jd2e);
    acm->addEmployee(jd3e);

    // Add
    edb.AddRecord(jd1e);
    edb.AddRecord(jd2e);
    edb.AddRecord(jd3e);
    edb.AddRecord(acm);
    
    cout << endl;
    cout << "Display Record " << endl;
    edb.DisplayRecords(); // print Vector from Data

    cout << endl;

    cout << " _________________________________________________________________ " << endl;
    
    cout << "*********************** After Sorting By FirstName Alphabetical" << endl;
   
    BubbleSortFN BSFN;
    BSFN.Sort(&edb);
    edb.DisplayRecords();
    
    cout << "*********************** After Sorting By FirstName Reverse Alphabetical" << endl;
    
    BubbleSortFNReverse BSFNR;
    BSFNR.Sort(&edb);
    edb.DisplayRecords();
    
    cout << endl;
    cout<<"*********************** After Sorting By LastName Alphabetical"<<endl;
    
    BubbleSortLN BSLN;
    BSLN.Sort(&edb);
    edb.DisplayRecords();
    
    cout << endl;
    cout<<"*********************** After Sorting By Salary Increasing"<<endl;
    
    BubbleSortSalary BSS;
    BSS.Sort(&edb);
    edb.DisplayRecords();
    
    cout << endl;
    cout<<"*********************** After Sorting By Salary Decreasing"<<endl;
    
    BubbleSortSalaryReverse BSSR;
    BSSR.Sort(&edb);
    edb.DisplayRecords();
    
    cout << endl;
    cout<<"*********************** After Sorting By Hireyear Increasing"<<endl;
    
    BubbleSortYear BSY;
    BSY.Sort(&edb);
    edb.DisplayRecords();
    
    cout << endl;
    cout<<"*********************** After Sorting By Hireyear Decreasing"<<endl;
    
    BubbleSortYearReverse BSYR;
    BSYR.Sort(&edb);
    edb.DisplayRecords();

    cout << "GAS PEDDLE STICKS CARRIES MY CAR AWAY!!!" << endl;
    cout << "HELOO ITS ME" << endl;
    
}

