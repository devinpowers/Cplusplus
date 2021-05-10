#ifndef NETWORK
#define NETWORK

#include<vector>
using std::vector;
#include<utility>
using std::pair;
#include<string>
using std::string;
#include<fstream>
using std::ifstream;


struct Node{
  int x;
  int y;
  string label;

  Node()=default;  // Default constructor
  Node(int i, int j, string l) :  x(i), y(j), label(l) {} ;  // Constructor with 3 Argumennts passsed in!


  
  string to_string () const;        // Method that converts the Node to a string displaying the x,y and label
  bool equal_nodes(const Node&);        // Method that checks if the 2 nodes passed in are equal
  double distance(const Node &)const;   // Method that checks the distance between two nodes passed in
};



#endif

  
