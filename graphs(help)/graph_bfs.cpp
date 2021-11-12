/*	
	File: Breadth-First Search of a Graph using an Adjency List
	Author: Devin Powers
	Date: 11-11-2021
*/


#include<iostream>
#include<map>
#include<list>
#include<queue>
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

		for(auto i : adjList){
			cout << i.first<<"->";

			for(T entry : i.second){
				cout<< entry <<",";
			}
			cout<<endl;
		}
	}
	
	void bfs(T src){
		
		queue<T> q; 

		map<T,bool> visited; 

		q.push(src);		 
		visited[src] = true;

		while(!q.empty()){

			T node = q.front(); 
			cout << node << " " << endl;
			q.pop(); 

			for(int neigbour : adjList[node]){

				if(!visited[neigbour]){

					q.push(neigbour);
					visited[neigbour] = true;
				}
			}
		}
	}
};


int main(){


	cout << endl;
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

	cout << "BFS from 8: " << endl;

	g.bfs(8);

	cout << endl;


}