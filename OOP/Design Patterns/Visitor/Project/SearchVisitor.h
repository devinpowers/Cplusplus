#ifndef SEARCHVISITOR_H
#define	SEARCHVISITOR_H
#include <string>
#include <vector>
#include "Visit.h"
#include "Employee.h"
#include "Group.h"
using std::vector;
using std::string;

//Class that searchs a Node for a query string
class SearchVisitor: public Visitor{
private:
	string query; //holds the query
	vector<Node*> found; //holds pointers to the nodes that the query is found in
public:
  SearchVisitor(); 
  SearchVisitor(const SearchVisitor&);
  ~SearchVisitor();
  SearchVisitor& operator=(const SearchVisitor&);

  virtual void VisitEmployee(Employee*); //searches an employee node
  virtual void VisitGroup(Group*); //searches a group node
  void setQuery(string); //sets the query variable
  string getQuery()const; //returns the query variable
  vector<Node*> getFound()const; //returns the found vector
  void PrintResults(); //Prints the search results
  virtual void Reset(); //Resets to initial conditions
};



#endif	/* SEARCHVISITOR_H */
