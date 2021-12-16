

#include<iostream>
#include<map>
#include<list>
#include<queue>

#include <string>
using namespace std;

template<typename T>
class Graph{

	map<T,list<T> > adjList;

public:
	Graph(){}
	void addEdge(T u, T v,bool bidir=true){
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
	
	void bfs(T src){
		
		queue<T> q;
		map<T,int> dist;
		map<T,T> parent;

		for(auto i : adjList){
			// 
			dist[i.first] = INT_MAX;
		}

		q.push(src);	// 
		dist[src] = 0; // Current Distance from Node !!!!
		parent[src] = src;			// Current C



		while(!q.empty()){

			T node = q.front();
			cout<< "Current Node: " << node << endl;

			q.pop();

			// For the neigbours of the current node, find out the nodes which are not visited
			for(auto neigbour : adjList[node]){
				if(dist[neigbour]==INT_MAX){

					q.push(neigbour);
					dist[neigbour] = dist[node]  + 1;
					parent[neigbour] = node;
				}
				else{

					cout << "Neigbour: " << neigbour << " its Max is: " << dist[neigbour] << endl;
				}
			}
		}



		//Print the distance to all the nodes
		for(auto i:adjList){
				T node = i.first;
				cout<<"Dist of "<<node<<" from "<<src<<" is "<<dist[node]<<endl;
		}
	}
};

int main(){

	Graph<char> g;
	g.addEdge('A','B');
	g.addEdge('B','C');
	g.addEdge('A','E');
	g.addEdge('C','E');
	g.addEdge('C','D');
	g.addEdge('D','F');
	g.addEdge('D','E');
	g.addEdge('F','G');
	g.addEdge('G','H');
	g.addEdge('H','I');
	g.addEdge('I','K');
	g.addEdge('K','J');
	g.addEdge('K','O');
	g.addEdge('K','L');
	g.addEdge('L','M');
	g.addEdge('O','M');

	g.addEdge('O','M');
	g.addEdge('B', 'M');



	g.bfs('A');
}
