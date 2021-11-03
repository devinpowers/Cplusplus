/*
	Depth First Search in C++
*/


#include<iostream>
#include<map>
#include<list>
using namespace std;


template<typename T>
class Graph{

	private:


		map<T,list<T> > adjList;

	public:
		Graph(){}

		void addEdge(T u, T v,bool bidir=true){
			// Bidir = Bidirectional !!
			adjList[u].push_back(v);
			if(bidir){
				adjList[v].push_back(u);
			}
		}

		void print(){

			//Iterate over the map
			for(auto i:adjList){
				cout<<i.first<<"->";

				//i.second is LL
				for(T entry:i.second){
					cout<<entry<<",";
				}
				cout<<endl;
			}
		}

		void dfsHelper(T node,map<T,bool> &visited){
			//Whenever to come to a node, mark it visited
			visited[node] = true;

			cout << node <<" " << endl;

			//Try to find out a node which is neigbour of current node and not yet visited
			for(T neighbour: adjList[node]){
				cout << "neighbour: " << neighbour << endl;

				if(!visited[neighbour]){

					dfsHelper(neighbour,visited); // Recursive Callback!!
				}
			}
		}

		void dfs(T src){

			// Depth First Search
			
			map<T,bool> visited; // where T is element
			// Call helper function
			dfsHelper(src,visited);
		}

	
};

int main(){

	Graph<int> g;
	g.addEdge(0,1);
	g.addEdge(0,6);
	g.addEdge(6,7);
	g.addEdge(7,8);


	g.addEdge(1,2);
	g.addEdge(0,4);
	g.addEdge(2,4);
	g.addEdge(2,3);
	g.addEdge(3,4);
	g.addEdge(3,5);	
	g.addEdge(5,8);
	g.addEdge(5,9);


	g.print();
	cout << endl;
	// start DFS at..
	g.dfs(8);

	cout << endl;

}