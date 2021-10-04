#ifndef VISIT_H
#define VISIT_H
class Group;
class Employee;

//Abstract Visitor class that other Visits inherit from
class Visitor{
public:
    Visitor(){};
    Visitor(const Visitor& vis){};
    virtual ~Visitor(){};

	//Functions that need implementation
    virtual void VisitEmployee(Employee*)=0;
    virtual void VisitGroup(Group*)=0;
    virtual void Reset()=0;
};

#endif
