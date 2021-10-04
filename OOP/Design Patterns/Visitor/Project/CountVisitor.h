#ifndef COUNTVISITOR_H
#define	COUNTVISITOR_H
#include "Visit.h"
#include "Employee.h"
#include "Group.h"

//Class to count the number of Groups and Employees in a node structure
class CountVisitor: public Visitor{
  private:
    int Emp_count; //holds the number of employees
    int Grp_count; //holds the number of groups
  public:
    CountVisitor(); 
    CountVisitor(const CountVisitor&);
    ~CountVisitor();
    CountVisitor& operator=(const CountVisitor&);

    virtual void VisitEmployee(Employee*); //counts an employee node 
    virtual void VisitGroup(Group*); //counts a Group node 
    void PrintResults(); //Prints the results
    virtual void Reset(); //Resets to initial conditions

    int getEmp_count()const{return Emp_count;} //returns Employee count
    int getGrp_count()const{return Grp_count;} //returms Group count

};



#endif	/* COUNTVISITOR_H */
