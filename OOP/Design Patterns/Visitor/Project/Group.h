#ifndef GROUP_H
#define	GROUP_H
#include <vector>//needed to initiate the program correctly
#include <string>//needed to initiate the program correctly
#include "Node.h"//needed to initiate the program correctly

class Group: public Node{
private:
  std::string name;
  std::vector<Node*> nlist;
  //Node list;
  
public:
  virtual void Accept(Visitor* v){v->VisitGroup(this);}// needed for the visitor class
  Group();
  Group(std::string);
  Group(const Group&);
  ~Group();
  Group& operator=(const Group&);
  std::string getName()const{return name;};
  std::vector<Node*> getlist()const{return nlist;};
  void AddChild(Node*);
  int GetChildrenSize(){return nlist.size();};//gets the size of the group
  Node* GetChild(int i){return nlist[i];};//gets the information at position i
  
};
#endif	/* GROUP_H */
