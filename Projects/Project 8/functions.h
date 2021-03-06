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
  // Attributes
  int x;
  int y;
  string label;

  Node()=default;  // Default constructor
  Node(int i, int j, string l) :  x(i), y(j), label(l) {} ;  // Constructor with 3 Argumennts passsed in!

  // Methods on Node
  string to_string () const;        // Method that converts the Node to a string displaying the x,y and label
  bool equal_nodes(const Node &);        // Method that checks if the 2 nodes passed in are equal
  double distance(const Node &)const;   // Method that checks the distance between two nodes passed in
};

struct Network{
  // Attributes
  string label;              
  map<string, Node> nodes;      // Map of our Network of Labels and Nodes
  vector<string> route;         // Route of our Nodes {node1,node2,node3}

  Network()=default; // Default constructor
  Network(ifstream &);   // Constructor that is defined outside in the function.cpp file


  // Methods on Networks
  string to_string () const; // Uses Nodes Struct to print ! (const means it won't modify the variable)

  Node get_node(string);  // Gets a node

  void node_to_network(Node);      // Adds Node to Network
  
  bool in_route(const Node&); // Returns True or False if our Node is in Route or not

  Node closest(Node &); // Returns the Node closest to the Node we pass in

  string calculate_route(const Node&, const Node&);  // Caculates the shortest route from one Node to another Node
};

#endif

  
