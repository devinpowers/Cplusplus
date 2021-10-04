#include <iostream>
#include "CountVisitor.h"


CountVisitor::CountVisitor(){
	Emp_count = 0; //sets variables to 0
	Grp_count = 0;

}
CountVisitor::CountVisitor(const CountVisitor & countvisitor){
  
}
CountVisitor::~CountVisitor(){}

CountVisitor& CountVisitor::operator=(const CountVisitor& countvisitor){
	if (this != &countvisitor){ //no assignment to self
		Emp_count = countvisitor.getEmp_count();
		Grp_count = countvisitor.getGrp_count();
	}
	return *this;
}

void CountVisitor::VisitEmployee(Employee* emp){
	Emp_count++; //when visiting a employee node increment employee count
}
void CountVisitor::VisitGroup(Group* grp){
	Grp_count++; //visit a group node -> increment group count

	for(int i =0; i<grp->GetChildrenSize();i++){ //visit all children
		grp->GetChild(i)->Accept(this); //CountVisitor on children
	}
}

void CountVisitor::PrintResults(){
	//Prints out the counts
	std::cout<<"Number of Groups: "<<Grp_count<<std::endl;
	std::cout<<"Number of Employees: "<<Emp_count<<std::endl;
}


void CountVisitor::Reset(){
	Emp_count = 0; //resets variables to 0
	Grp_count = 0;
}
