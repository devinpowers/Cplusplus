
//import libraies needed:

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
#include "functions.h"
#include<iostream>
using std::cout;

// Node Functions

string Node::to_string () const {
        // converts the node into a string to print
    ostringstream oss; // ostringstream converts into one big string

    oss << label << ":(" << x << "," << y << ")";
    return oss.str();
}

bool Node::equal_nodes(const Node & other_node)   {
    // other is another node that is passed in with the other node
    // Returns True or False
    return label == other_node.label;
}

double Node::distance (const Node & other_node){

    // Returns the Euclidean distance between two Node
    // use . operator to access attribute of the other node
    return sqrt(pow(x-other_node.x, 2) + pow(y - other_node.y, 2));
}



// Network Functions

Network::Network( ifstream &file){
    long x_cord, y_cord;
    string label;
    while (file >> x_cord >> y_cord >> label){
        //create node
        add_node(Node(x_cord, y_cord, label));
    }
}

string Network::to_string() const {o}