#ifndef PRINTVISITOR_H
#define	PRINTVISITOR_H
#include "Visit.h"
#include "Employee.h"
#include "Group.h"


/*
Visitor class for use with Employee and Group classes .

Prints out the inputed Node and all subsequent nodes.
*/
class PrintVisitor: public Visitor{
public:
  PrintVisitor();//constructor
  PrintVisitor(const PrintVisitor&);  //copy constructor
  virtual ~PrintVisitor(); //Destructor 
  PrintVisitor& operator=(const PrintVisitor&);// assignment

  virtual void Reset(); //Resets visitor to initial conditions

  virtual void VisitEmployee(Employee*); //function to print an employee node
  virtual void VisitGroup(Group*); //function to print a Group node

  int getTab()const{return Tab;}; //returns a private variable
private:
	int Tab; //holds number of spaces for formatting
};

#endif	/* PRINTVISITOR_H */
