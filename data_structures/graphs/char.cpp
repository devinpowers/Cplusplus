/*  
    Char adjacency linked

*/

#include<iostream>
#include <list>
#include <fstream>

using namespace std;
 
// This class represents a directed graph using
// adjacency list representation
class Graph
{
        int V;    // No. of vertices
    
        // Pointer to an array containing adjacency
        // lists
        list<char> *adj;  

    public:
        Graph(int V);  // Constructor
    
        // function to add an edge to graph
        void addEdge(char v, char w);
    
        // prints BFS traversal from a given source s
        //void BFS(int s); 

        void printGraph();
};
 
Graph::Graph(int V)
{
    this->V = V;
    
    adj = new list<char>[V];
}
 
void Graph::addEdge(char v, char w)
{
    adj[v].push_back(w); // Add w to v’s list.
}
 
void printGraph(){
    // print the graph

    for (int  i = 0; i < 5; i++ ){
        cout << i << "->";
    }
}
 
// Driver program to test methods of graph class
int main()
{   

    // Create a graph given in the above diagram
    Graph g(7);
    /*
    ifstream inFile;
    int x,y;

    inFile.open("out.txt");
    if (!inFile){
        cout << "unable to open the file. ";
        exit(1); // Terminate with error
    }

    while(inFile >> x >> y){
        // add edge to graph

        g.addEdge(x,y);
    }
    */


    

    g.addEdge('a', 'b');
    g.addEdge('b', 'a');
    g.addEdge('b', 'c');
    g.addEdge('c', 'b');
    //g.addEdge(2, 0);
   // g.addEdge(2, 3);
   // g.addEdge(3, 3);
   
   cout << "Hello World" << endl;

 
    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 2) \n";
  
    cout << endl;
    return 0;
}