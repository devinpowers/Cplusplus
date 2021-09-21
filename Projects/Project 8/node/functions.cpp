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

// Include "header file"
#include "functions.h"


//NODE FUNCTIONS
string Node::to_string () const {
    // returns one big string that has the " label: (x:y) " of the node
    ostringstream oss;
    // Puts everything into the oss keyword below 
    //Label:(X,Y)

    oss << label << ":(" << x << "," << y << ")";
    // Returns oss string
    return oss.str();
}

bool Node::equal_nodes(const Node & other){
    //Can assume that the nodes are equal if the labels are the same
    // With other being the other node that you're comparing it too!
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
    while(file >> first >> second >> second >> label){
        // reads file and now we need to create a node and put the node into our Network
        // The constructor of the Node will work
        // The node_to_network will first create a node for each line in the file, and then add it to the Network
        node_to_network(Node(first, second, label));

    }

}

string Network::to_string() const {

    // Reads the Entire Network and prints it out via one big string using ostringstream
    // Uses the to_string method for the individual nodes 
    ostringstream oss;
    string s;


    for (pair<string, Node> p : nodes){
        // iterates  our "nodes" map in the Network 
        // calls for the to_string() method, which returns --> label:(x,y)

        oss << p.second.to_string() << ",";
    }
    // oss is now one long string of label:(x,y), label:(x,y), label:(x,y), etc
    s = oss.str();
    // Remove last comma and space
    s = s.substr(0, s.size()- 2);

    // Returns one Long string that is of our Network!!!!
    return s;
}


void Network::node_to_network(Node new_node){
    // pass in new node that we created from the file and add it the list of nodes

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
    // Return the Node
    return p.second;

}






bool Network::in_route( const Node& node){

    // Checks to seee if the node is not in the route

    if (find(route.begin(), route.end(), node.label) == route.end()){
        return false;
    }
    // Else return true if it's in the route

    return true;

}

Node Network::closest(Node & node){

    double shortest_distance = 100000000.0;
    Node closest;
    // Loop thru each pair

    for (pair<string, Node> p : nodes){
        // find the node in the route
        auto it = find(route.begin(),route.end(), p.second.label);
        // if the nodes are not the same, and the node is not in the route
        if (! p.second.equal_nodes(node) && (it == route.end())){
            // check to see if it is the closet
            if (node.distance(p.second) < shortest_distance){
                shortest_distance = node.distance(p.second);
                closest = p.second;
            }
        }
    }
    return closest;


}

string Network::calculate_route(const Node& start, const Node& end){
    ostringstream oss;
    string s;
    double total_distance = 0.0;
    Node last_node;

    // Set the first node
    route.push_back(start.label);
    Node next_closet = start;

    while(! next_closet.equal_nodes(end)){
        // Store last node
        last_node = next_closet;
        //find the next closet
        next_closet = closest(last_node);
        total_distance += last_node.distance(next_closet);
        // add to the route
        route.push_back(next_closet.label);
    }
    // Lets crerate a output string

    oss << total_distance << ": ";
    copy(route.begin(), route.end(),std::ostream_iterator<string>(oss,","));
    s = oss.str();
    s = s.substr(0, s.size() - 1);
    return s;

}  

