/*
adj hash map implemented in c++
*/

#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

class Graph{
    // adj list
    unordered_map<string, list<pair<string, int > > > l;


    public:

        void addEdge(string x, string y, bool bidir, int weight){
            l[x].push_back(make_pair(y, weight));
            if (bidir){
                l[y].push_back(make_pair(x, weight));
            }
        }

        void printAdjList(){
            // iterate over all keys in the map
            for( auto p : l){
                string city = p.first;
                list<pair<string, int > > nbrs = p.second;

                cout << city << "->";
                for (auto nbr : nbrs){
                    string dest = nbr.first;
                    int dist = nbr.second;
                    cout << dest << " " << dist << ", ";
                }
                cout << endl;
            }
        }
};

int main(){

    Graph g;
    g.addEdge("AA", "B", true, 20);
    g.addEdge("B", "D", true, 40);
    g.addEdge("AA", "C", true, 10);
    g.addEdge("C", "D", false, 40);
    g.addEdge("AA", "D", true, 50);

    g.printAdjList();
}

