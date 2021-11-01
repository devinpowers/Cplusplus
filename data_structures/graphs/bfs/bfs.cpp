/*
BFS shorest distance from a vertex


Templated Graph
*/


#include<iostream>
#include<map>
#include<list>
#include<queue>
using namespace std;
#include <string>

template<typename T>
class Graph{

    private:
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
                cout<<node<<" ";
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


	Graph<char> g;
	g.addEdge('A','B');
	g.addEdge('B','C');
	g.addEdge('A','E');
	g.addEdge('C','E');
	g.addEdge('C','D');
	g.addEdge('D','F');
	g.addEdge('D','E');
    g.print();
    cout << endl;
    g.bfs('D');

}


