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
using std::endl;

// Include the header file
#include "functions.h"


//NODE FUNCTIONS
string Node::to_string () const {
    // returns one big string that has the label: (x: y) of the node
    ostringstream oss;
    //Label:(X,Y)
    oss << label << ":(" << x << "," << y << ")";
    return oss.str(); // returns "one big" string
}

bool Node::equal_nodes(const Node & other) {
    // Can assume that the nodes are equal if the labels are the same (example A == A) which returns True
    // Paramters const Node is the node we pass in, and the other is the node that we are comparing it too
    // Or if B != A which returns False
    return label == other.label;
}

double Node::distance(const Node & other) const{

    //Distance is the square root of the coordinates subtracted and squared Eucidene equation
    // Parameters -> the other is the other node passed in
    return sqrt(pow(x-other.x, 2) + pow(y - other.y, 2));
}


// Network Functions

Network::Network(ifstream &file){

    // Constructor
    // Takes in input/reads from file (.txt) into our varaibles
    
    long first, second;  // long variable that will represent our X and Y
    string label;        // string variable that will represent our Label for our node

    // Lets get the values from each line
    while(file >> first >> second >> second >> label){
        // reads file and now we need to create a node and put the node into our Network
        // the txt files read as (x,y, label), example: 2 4 A 
        // while "true" read line-by-line
    
        node_to_network(Node(first, second, label));
    }

}

void Network::node_to_network(Node new_node){
    // pass in new node and add it to the list of nodes
    // Parameters: new_node is the node we just read in above line-by-line

    nodes[new_node.label] = new_node;
    cout << new_node.label << endl;
}

string Network::to_string() const {
    // Reads the Network and prints it out via one big string using ostringstream
    // Uses the Nodes to_string method to print
    ostringstream oss;
    string s;

    for (pair<string, Node> p : nodes){
        // iterates  our "nodes" map in the Network 
        // for p aka pairs in our nodes, print out the second (as first is the label), calls to_string method from out nodes struct
        oss << p.second.to_string() << ",";
    }
    // Converts to string
    s = oss.str();
    // Remove last comma and space
    s = s.substr(0, s.size()- 2);

    // Returns one Long string that is of our Network!!!!
    return s;
}


Node Network::get_node(string s){

    // Searches for Node and adds it if needed, uses iterator
    // Parameter: string s which is the label of the Node for example: A
    auto iter = nodes.find(s);
    // If the string is not in the nodes, throw the error (iterates thru the Key in the Key:value pairs)
    if (iter == nodes.end()){
        // Throw a error, because it did not find the Node.label
        string error_string = "Node was not found: " + s;
        throw std::out_of_range(error_string);
    }
    // Else the node was found and we can return it
    // p is pointer to the pair, will return the x,y coordinates
    pair<string, Node> p = *iter;
    return p.second;

}

bool Network::in_route(const Node& node){
    // Const Node, don't change our original node
    // Method checks to see if the node is not in the route
    // Look up the find() algorithm the node.label is the value were looking for and the find() algorithm will return 
    // the position of what were looking for, and if thats the position is last (.end()) then the value isnt in our route
    if (find(route.begin(), route.end(), node.label)  == route.end()){

        return false;
    }
    // Else we must return True
    return true;
}



Node Network::closest(Node & node){
    // Finds the Closest node, to the node that we pass in using the Euclidean Distance
    double shortest_distance = 100000;
    Node closest;

    // We have to loop thru each pair
    for (pair<string, Node > pair : nodes){

        // find the node in the route using an iterator (note the iterator stores the position)
        // (pair.second.label) will return like label A
        auto it = find(route.begin(),route.end(), pair.second.label);
        // if the nodes are not equal, and the at the end
        if ( ! pair.second.equal_nodes(node) && (it == route.end())) {
            // check to see if it is the closet node
            if (node.distance(pair.second) < shortest_distance){
                shortest_distance = node.distance(pair.second);
                closest = pair.second;
            }
        }

    }
    return closest;
}



string Network::calculate_route(const Node& start, const Node& end){
    // Lets calculate the route of our node
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
    // Lets Create an output string

    oss << total_distance << ": ";
    copy(route.begin(), route.end(),std::ostream_iterator<string>(oss,","));
    s = oss.str();
    s = s.substr(0, s.size() - 1);
    return s;

}  


