

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

    Manager mang("DEVIN", "POwers", 20, hiring_year, "CSE", emps); 

    mang.DisplayEmployee();
    cout << "Defualt Construcotr Check\n";

}

