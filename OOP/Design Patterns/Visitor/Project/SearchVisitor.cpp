#include "SearchVisitor.h"
#include "PrintVisitor.h"
#include <iostream>


SearchVisitor::SearchVisitor(){
	query=""; //sets empty query
	//found = new vector<Node*>();
}
SearchVisitor::SearchVisitor(const SearchVisitor & searchvisitor){
	query = searchvisitor.getQuery(); //copies variables over
	found = searchvisitor.getFound();
}
SearchVisitor::~SearchVisitor(){
	Reset(); //runs a Reset 
	//delete &found;
	
}

SearchVisitor& SearchVisitor::operator=(const SearchVisitor& searchvisitor){
	if(this != &searchvisitor){ //checks for assignment to self
		query = searchvisitor.getQuery();
		found = searchvisitor.getFound();	
	}
	return *this;
}

void SearchVisitor::VisitEmployee(Employee* emp){
	//Set of if's to check for query matches 
	// If one is found the node is pushed to found
	if(emp->getFirst()==query){found.push_back(emp);}
	else if(emp->GetLast()==query){found.push_back(emp);}
	else if(emp->getField()==query){found.push_back(emp);}
	else if((emp->getFirst()+" "+emp->GetLast()) ==query){found.push_back(emp);}

}

//functions to return private variables
string SearchVisitor::getQuery()const{return query;}
vector<Node*> SearchVisitor::getFound()const {return found;}

void SearchVisitor::VisitGroup(Group* grp){
	if(grp->getName()==query){found.push_back(grp);} //checks for match
	for(int i =0;i<grp->GetChildrenSize();i++){ //visits all sub nodes
        grp->GetChild(i)->Accept(this); //visit
    }

}

void SearchVisitor::setQuery(string str){
	query =str;  //sets query to input string
}

//Prints results nicely
void SearchVisitor::PrintResults(){
	std::cout << "Found "<<found.size();
	std::cout <<" results for the query "<< query<<std::endl;
	PrintVisitor* pVisitor = new PrintVisitor(); //for printing
	for(unsigned int i =0;i<found.size();i++){
		found[i]->Accept(pVisitor);	 //PrintVisitor on all nodes found
		pVisitor->Reset(); //reset the PrintVisitor to be used again
	}
	std::cout<< std::endl;

}

void SearchVisitor::Reset(){
	query =""; //empties the query
	found.clear(); //clears the found vector
}
