# include<iostream>
# include<list>
using namespace std;

class Graph{

	int V;
	// Array of List
	list<int> *l; // = new list[v]

	public:
		Graph(int V){

			this->V = V;
			l = new list<int>[V];
		}

		void addEdge(int x, int y){
			l[x].push_back(y);
			l[y].push_back(x);
		}

		void printAdjList(){
			for(int i=0;i<V;i++){
				cout << "Vertex " << i << "->";
				for (int nbr : l[i]){
					cout << nbr << ", ";
				}
				cout << endl;		
		}
		}
};

int main(){

	// Graph has 5 vertices number from 0 to 4
	Graph g(4);
	g.addEdge(0,1);
	g.addEdge(0,2);
	g.addEdge(2,3);
	g.addEdge(1,2);
	g.printAdjList();
}


/*

	In this implementation of a Adj. List Graph in C++, once we construct the Graph, we pass it a size.
	The Graph size is set and a new list is created
*/
