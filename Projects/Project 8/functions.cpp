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
    return sqrt(pow(x-other.x, 2) + pow(y - other.y, 2));
}


// Network Functions

Network::Network(ifstream &file){

    // Takes in input/reads from file (.txt) into our varaibles
    
    long first, second;
    string label;

}

string Network::to_string() const {
    ostringstream oss;
    string s;

    for (pair<string, Node> p : nodes){
        oss << p.second.to_string() << ",";
    }
    s = oss.str();
    // Remove last comma and space
    s = s.substr(0, s.size()- 2);
    return s;
}


void Network::put_node(Node new_node){
    // pass in new node and add it to the list of nodes
    nodes[new_node.label] = new_node;
}