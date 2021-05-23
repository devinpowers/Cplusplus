#include<iostream>
using std::cout;
using std::endl;
using std::cin;
#include<fstream>
using std::ifstream;
#include<sstream>
using std::ostringstream;

#include<map>
using std::map;
#include<utility>
using std::pair;
using std::make_pair;

#include<string>
using std::string;


struct Node{
    int x;
    int y;
    string label;

    Node() = default;
    Node(int i, int j, string l) : x(i), y(j), label(l) {} ;
    // any methods
    string to_string();
};

string Node::to_string()  {
    ostringstream oss;
    oss << label << ":(" << x << "," << y << ")";
    return oss.str();
}

int main() {
    
    Node node_1(3,4, "A");

    // print node_1
    cout << "Output: " << endl;
    node_1.to_string();
   /// map<string, Node> nodes;

}