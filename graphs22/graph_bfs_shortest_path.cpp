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
	Graph(){

	}
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

		for(auto i:adjList){
			dist[i.first] = INT_MAX;
		}

		q.push(src);
		dist[src] = 0;
		parent[src] = src;

		while(!q.empty()){

			T node = q.front();
			// cout<<node<<" ";
			q.pop();

			// For the neigbours of the current node, find out the nodes which are not visited
			for(int neigbour :adjList[node]){
				if(dist[neigbour]==INT_MAX){
					q.push(neigbour);
					dist[neigbour] = dist[node]  + 1;
					parent[neigbour] = node;
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

	/*
	Graph<int> g;
	g.addEdge(0,1);
	g.addEdge(1,2);
	g.addEdge(0,4);
	g.addEdge(2,4);
	g.addEdge(2,3);
	g.addEdge(3,5);
	g.addEdge(3,4);
	g.bfs(0);
	*/

	

	/*
	Graph<char> g;
	g.addEdge('A','B');
	g.addEdge('B','C');
	g.addEdge('A','E');
	g.addEdge('C','E');
	g.addEdge('C','D');
	g.addEdge('D','F');
	cout << endl;
	*/

	/*
	Graph<string> g;
	g.addEdge("DE", "DB");
	g.addEdge("DB", "AC");
	g.addEdge("AC", "FN");
	g.addEdge("FN", "HI");
	
	*/


	
	
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

	g.bfs('A');
	


	cout << endl;
}