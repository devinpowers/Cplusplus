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

            map<T,int> dist; // Distance From Node(src) to each node in the graph

            map<T,T> parent;

            for(auto i : adjList){
                // Setting all values in distance map to INT_MAX!!!!
                // cout << "i: " << i.first << endl;
                dist[i.first] = INT_MAX;
            }

            q.push(src);
            dist[src] = 0; // Source Node (AKA the Node we start from has a distance of 0)
            parent[src] = src; 

            while(!q.empty()){ // While the Queue isnt Empty

                T node = q.front();
                q.pop(); // Pop it out!!!

                // For the neigbours of the current node, find out the nodes which are not visited
                for(auto neigbour : adjList[node]){

                  //  cout << "neigbour: " << neigbour << endl;

                    if(dist[neigbour]==INT_MAX){
                        // Hasn't been visited yet!

                        q.push(neigbour);


                        dist[neigbour] = dist[node]  + 1;

                        parent[neigbour] = node;                        

                    }
                }
                
            }

            cout << endl;
            //Print the distance to all the nodes
            for(auto i:adjList){
                    T node = i.first;
                    cout<<"Dist of "<<node<<" from "<<src<<" is "<<dist[node]<<endl;
            }

            // Can I print both the dist and parent

            // Distance Dictionary from each node!!!
            /*
            for (auto i : dist ){
                T node = i.first;
                cout << "Node: " << node << " :  " << i.second << endl;
            }
            */


            // Parent Dictionary!!!
            cout << "Parent Dictionary: " << endl;
            for (auto i : parent ){
                T node1 = i.first;
                T node2 = i.second;
                cout << "Node.first: " << node1 << " and Node.second: " << node2 << endl;
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
	g.addEdge('F','G');
    g.print();
    cout << endl;
    g.bfs('A');

}


