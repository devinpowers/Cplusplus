#include <iostream>
#include "PrintVisitor.h"

PrintVisitor::PrintVisitor(){
	Tab = 0; //sets the format tab to 0
}
PrintVisitor::PrintVisitor(const PrintVisitor & printvisitor){
	Tab = printvisitor.getTab(); //copies Tab variable over
}
PrintVisitor::~PrintVisitor(){}

PrintVisitor& PrintVisitor::operator=(const PrintVisitor& printvisitor){
	//checks to make sure you are assigning to self
	if (&printvisitor != this){
		Tab = printvisitor.getTab();
	}
	return *this;
}

void PrintVisitor::VisitEmployee(Employee* emp){
	for(int i= 0;i<Tab;i++){std::cout << "  ";} //prints number of tabs
	std::cout << emp->getField() <<": "<<emp->getFirst();//prints field and First name
	std::cout <<" "<<emp->GetLast()<<std::endl; //Prints last name
}

void PrintVisitor::VisitGroup(Group* grp){

	for(int i=0;i<Tab;i++){std::cout << "  ";} //prints number of tabs
	std::cout <<"+ Team "<<grp->getName()<<std::endl; //Prints group name
	for(int i =0;i<grp->GetChildrenSize();i++){ //go through children nodes
		Tab++;
		grp->GetChild(i)->Accept(this); //visits the nodes
		Tab--;
	}
}

void PrintVisitor::Reset(){
	Tab =0; //resets tab to 0
}
