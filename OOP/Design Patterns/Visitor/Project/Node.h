#ifndef NODE_H
#define NODE_H
#include "Visit.h"

//Abstract function that group and employee inherit from
class Node{
public:
  virtual void Accept(Visitor*)=0; //function to implement acceptance of visitors
  virtual ~Node(){};
  Node(){};
  Node(const Node&){};


};
#endif
