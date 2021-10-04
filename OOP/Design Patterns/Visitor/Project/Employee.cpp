#include "Employee.h"
Employee::Employee(string theFName,string theLName,string thepos){//contructor
  fName=theFName;
  lName=theLName;
  pos=thepos;
}
Employee::Employee(const Employee & employee){
  fName=employee.getFirst();
  lName=employee.GetLast();
  pos=employee.getField();
}
Employee::~Employee(){}
