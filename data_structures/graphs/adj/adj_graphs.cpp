#include<iostream>
using std::cout;
using std::endl;

#include<vector>
using std::vector;

// A utility function to add an edge in an
// undirected graph.
void addEdge(vector<char> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
  
// A utility function to print the adjacency list
// representation of graph
void printGraph(vector<char> adj[], int V)
{
    for (int v = 0; v < V; ++v)
    {
        cout << "\n Adjacency list of vertex "
             << v << "\n head ";
        for (auto x : adj[v])
           cout << "-> " << x;
        printf("\n");
    }
}
  
// Driver code
int main()
{
    int V = 4;
    vector<char> adj[V];
    addEdge(adj, 'A', 'B');
    addEdge(adj, 'A', 'C');
    addEdge(adj, 'B', 'A');
    addEdge(adj, 'B', 'D');
    addEdge(adj, 'C', 'D');
    addEdge(adj, 'C', 'A');
    addEdge(adj, 'C', 'E');

    addEdge(adj, 'D', 'B');
    addEdge(adj, 'D', 'C');
    addEdge(adj, 'D', 'E');

    addEdge(adj, 'E', 'C');
    addEdge(adj, 'E', 'D');

    printGraph(adj, V);
}