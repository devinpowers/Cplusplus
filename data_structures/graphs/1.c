// A C Program to demonstrate adjacency list representation of graphs

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// A structure to represent an adjacency list node
struct AdjListNode
{
    char *dest;
    struct AdjListNode* next;
};

// A structure to represent an adjacency liat
struct AdjList
{
    struct AdjListNode *head;  // pointer to head node of list
};

// A structure to represent a graph. A graph is an array of adjacency lists.
// Size of array will be V (number of vertices in graph)
struct Graph
{
    int V;
    struct AdjList* array;
};

// A utility function to create a new adjacency list node
struct AdjListNode* newAdjListNode(char *dest)
{
    struct AdjListNode* newNode =
        (struct AdjListNode*) malloc(sizeof(struct AdjListNode));
    newNode->dest = dest;
    newNode->next = NULL;
    return newNode;
}

// A utility function that creates a graph of V vertices
struct Graph* createGraph(int V)
{
    struct Graph* graph = (struct Graph*) malloc(sizeof(struct Graph));
    graph->V = V;

    // Create an array of adjacency lists.  Size of array will be V
    graph->array = (struct AdjList*) malloc(V * sizeof(struct AdjList));

    // Initialize each adjacency list as empty by making head as NULL
    int i;
    for (i = 0; i < V; ++i)
        graph->array[i].head = NULL;

    return graph;
}

// Adds an edge to an undirected graph
void addEdge(struct Graph* graph, char *src, char *dest)
{
    // Add an edge from src to dest.  A new node is added to the adjacency
    // list of src.  The node is added at the beginin
    struct AdjListNode* newNode = newAdjListNode(dest);
    newNode->next = graph->array[0].head;
    graph->array[0].head = newNode;

    // Since graph is undirected, add an edge from dest to src also
    newNode = newAdjListNode(src);
    newNode->next = graph->array[1].head;
    graph->array[1].head = newNode;
}

// A utility function to print the adjacenncy list representation of graph
void printGraph(struct Graph* graph)
{
    int v;
    for (v = 0; v < graph->V; ++v)
    {
        struct AdjListNode* pCrawl = graph->array[v].head;
        printf("\n Adjacency list of vertex %d\n head ", v);
        while (pCrawl)
        {
            printf("-> %s", pCrawl->dest);
            pCrawl = pCrawl->next;
        }
        printf("\n");
    }
}

// Driver program to test above functions
int main()
{
    // create the graph given in above fugure
    int V = 2;
    struct Graph* graph = createGraph(V);
    addEdge(graph, "a", "b");
    addEdge(graph, "a", "e");
    addEdge(graph, "b", "c");
    addEdge(graph, "b", "d" );
    addEdge(graph, "b", "e");
    addEdge(graph, "c", "d");
    addEdge(graph, "d", "e");


    // print the adjacency list representation of the above graph
    printGraph(graph);

    return 0;
}