#ifndef GRAPH_H
#define GRAPH_H

#include <utility> // std::pair
#include <ostream>
#include <vector>

template <typename T>
class Graph
{
    public:
        Graph(bool directed = false) : directed(directed) {}

        int AddVertex(T value);
        std::pair<int, int> AddEdgeAndVertices(T start_value, T end_value, int cost = 0);
        void AddEdge(int start_id, int end_id, int cost = 0);
        int VertexCount() const;
        const T & GetVertexData(int vertex_id) const;
        std::vector<int> GetAllVertexIDs() const;
        // BFS returns vector pair <vertex_id, parent of this vertex>
        std::pair<std::vector<int>, std::vector<int>> BreadthFirstSearch(int start_id) const;
        std::vector<int> DepthFirstSearch(int start_id, bool recursive = false) const;

        template <typename U>
        friend std::ostream & operator<<(std::ostream & out, Graph<U> & g);

    private:
        class Vertex; // forward declare;

        std::vector<Vertex> vertices;
        const bool directed;
        void DepthFirstSearchRecursive(int vertex_id, std::vector<int> & visit_order,
                std::vector<bool> & visited) const;
        void Print(std::ostream & out) const;

        class OutEdge
        {
            public:
                OutEdge(int end_id, int cost): dest_id(end_id), cost(cost) {}
                const int GetDestID() const;
                const int GetCost() const;

            private:
                int dest_id;
                int cost;
        };

        class Vertex
        {
            public:
                Vertex(int id, T value): id(id), data(value) {}
                void AddEdge(int end_id, int cost);
                const T & GetData() const;
                const std::vector<OutEdge> & GetOutgoingEdges() const;

            private:
                int id; // unique identifier
                T data; 
                std::vector<OutEdge> outgoing_edges;
        };

};

#include "graph.cpp"

#endif