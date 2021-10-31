/*

Normal Adj. Graph 

*/


#include<iostream>
#include<unordered_map>
#include<list>
#include <string>
using namespace std;

class Graph{

    private:

         unordered_map<string, list<string>> map;

    public:

        void addEdge(string x, string y){

            map[x].push_back(y);
            map[y].push_back(x);   
        }

        
        void printAdjList(){

            for(auto const& pair : map) {
                cout << pair.first << ": ";

                for(auto const& elem : pair.second) {
                    cout << elem << ", ";
                }
             cout << "\n";
            }

        }
        
       
};



int main() {
     Graph g;
    g.addEdge("A", "B");
    g.addEdge("B", "D");
    g.addEdge("A", "C");
    g.addEdge("C", "D");
    g.addEdge("A", "D");
    


    g.printAdjList();
}


