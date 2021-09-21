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
    
    Node() = default;

    Node(int i, int j, string l) : x(i), j(i), label(l) {}; // constructor

    // Methods

    string to_string() const;   // method: Converts a Node to a string

    bool equal_nodes( const Node&);   // method: Checks if nodes , n are the same! 

    double distance (const Node &);    // method: Returns the Euclidean distance between two Nodes

};


struct Network{

    string label;
    map<string, Node> nodes; // map of Nodes and their labels
    vector<string> route; // shortest route (greedys)

    Network() = default // constructor

    Network(ifstream &);       // ifstream: Stream class to read from files 

    string to_string() const; // Method: Prints all the nodes in nodes of net Uses Node::to_string
    Node get_node(string);      // Method: Either returns a Node, or adds a Node to the map of Nodes in the network.

    void add_node(string);          // Method: 
    bool in_route(const Node&);     // Method:  
    Node closest(Node &);           // Method:  For a given node n, returns the closed node in the network

    string calculate_route(const Node&, const Node&)  // Method:: Calculates a route from start to finish in the network

};



#endif





























