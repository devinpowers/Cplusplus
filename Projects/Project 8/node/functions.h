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


struct Network{
  string label;                // Attributes
  map<string, Node> nodes;      // Map of our Network of Labels and Nodes
  vector<string> route;         // Route of our Nodes

  Network()=default; // Default constructor
  Network(ifstream &);   // Constructor that is defined outside in the function.cpp file

  // Methods on Networks
  string to_string () const; // Uses Nodes Struct to print !

  Node get_node(string); 

  void node_to_network(Node);      // Adds Node to Network
  
  bool in_route(const Node&);
  Node closest(Node &);
  string calculate_route(const Node& start, const Node& finish);
};

#endif

  
