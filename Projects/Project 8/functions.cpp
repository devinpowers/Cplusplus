#include<vector>
using std::vector;
#include<utility>
using std::pair;
#include<string>
using std::string;
#include<fstream>
using std::ifstream;
#include<map>
using std::map;
#include<sstream>
using std::istringstream; using std::ostringstream;
#include<cmath>
#include<algorithm>
using std::find; using std::copy;
#include <iterator>
#include<iostream>
using std::cout;

#include "functions.h"


//NODE FUNCTIONS
string Node::to_string () const {
    // returns one big string that has the label: (x: y) of the node
    ostringstream oss;
    //Label:(X,Y)
    oss << label << ":(" << x << "," << y << ")";
    return oss.str();
}

bool Node::equal_nodes(const Node & other){
    //Can assume that the nodes are equal if the labels are the same
    return label == other.label;
}

double Node::distance(const Node & other) const{
    //Distance is the square root of the coordinates subtracted and squared
    // the other is the other node passed in
    return sqrt(pow(x-other.x, 2) + pow(y - other.y, 2));
}


// Network Functions

Network::Network(ifstream &file){

    // Constructor
    // Takes in input/reads from file (.txt) into our varaibles
    
    long first, second;
    string label;

    // Lets get the values from each line
    while(file >> first << second >> second >> label){
        // reads file and now we need to create a node and put the node into our Network
        // The constructor of the Node will work
        node_to_network(Node(first, second, label));

    }

}

string Network::to_string() const {
    // Reads the Network and prints it out via one big string using ostringstream
    ostringstream oss;
    string s;

    for (pair<string, Node> p : nodes){
        // iterates  our "nodes" map in the Network 
        oss << p.second.to_string() << ",";
    }
    s = oss.str();
    // Remove last comma and space
    s = s.substr(0, s.size()- 2);

    // Returns one Long string that is of our Network!!!!
    return s;
}


void Network::node_to_network(Node new_node){
    // pass in new node and add it to the list of nodes

    nodes[new_node.label] = new_node;
}

Node Network::get_node(string s){

    // Searches for Node and adds it if need 
    auto iter = nodes.find(s);
    // If the string is not in the nodes, throw the error
    if (iter == nodes.end()){
        // Throw a error
        string error_string = "Node was not found: " + s;
        throw std::out_of_range(error_string);
    }
    // Else the node was found and we can return it
    pair<string, Node> p = *iter;
    return p.second;

}

bool Network::in_route(const Node& node){
    // Method checks to see if the node is not in the route
    // Look up the find() algorithm  
    if (find(route.begin(), route.end(), node.label)  == route.end()){

        return false;
    }
    // Else we must return True
    return true;
}


Node Network::closest(Node & n){
    double shortest_distance = 100000;
    Node closest;

    // We have to loop thru each pair
    for (pair<string, Node > pair : nodes)
}