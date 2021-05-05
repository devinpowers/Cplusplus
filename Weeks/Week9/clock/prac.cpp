
#ifndef NETWORK
#define NETWORK
#endif

#include<vector>
using std::vector;

#include<utility>
using std::pair;

#include<string>
using std::string;

#include<fstream>
using std::ifstream;


struc Node {

    // struc are just blueprints that are used to create instance of a class

    int x;
    int y;
    string label;

    Node() = default;                                           // Set construtor to default at first!!
    Node(int i, int j, string l):  x(i), y(j), label(l) {};   // constructor

    string to_string() const; // converts a Node to a string (const, means the method isnt going to change)

    double distance(const Node &) const

    bool equal_nodes(const Node&)


}





string Node::to_string() const {

    cout << "YES" << 
}


