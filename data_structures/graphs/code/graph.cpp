#include <cassert>
#include <queue> // for Breadth First Search
#include <stack> // for Depth First Search

template <typename T>
int Graph<T>::AddVertex(T value)
{
    int id = VertexCount(); // id is the index into vertices array
    vertices.push_back(Vertex(id, value));
    return id;
}

template <typename T>
std::pair<int, int> Graph<T>::AddEdgeAndVertices(T start_value, T end_value, int cost)
{
    int start_id = AddVertex(start_value);
    int end_id = AddVertex(end_value);
    AddEdge(start_id, end_id, cost);
    return std::pair<int, int> (start_id, end_id);
}

template <typename T>
void Graph<T>::AddEdge(int start_id, int end_id, int cost)
{
    assert(start_id >= 0 && start_id < VertexCount());
    assert(end_id >= 0 && end_id < VertexCount());
    vertices[start_id].AddEdge(end_id, cost);
    if (!directed)
        vertices[end_id].AddEdge(start_id, cost);
}

template <typename T>
int Graph<T>::VertexCount() const
{
    return vertices.size();
}

template <typename T>
const T & Graph<T>::GetVertexData(int vertex_id) const
{
    return vertices[vertex_id].GetData();
}

template <typename T>
std::vector<int> Graph<T>::GetAllVertexIDs() const
{
    std::vector<int> vertex_ids(VertexCount());
    for (size_t i = 0; i < vertex_ids.size(); ++i)
        vertex_ids[i] = i;
    return vertex_ids;
}

template <typename T>
std::pair<std::vector<int>, std::vector<int>> Graph<T>::BreadthFirstSearch(int start_id) const
{
    std::vector<int> parent(VertexCount(), -1);
    std::vector<int> vertex_ids(VertexCount(), -1);
    std::vector<bool> visited(VertexCount(), false);

    std::queue<int> q; // holds vertex ids still to be explored
    q.push(start_id);
    int index = 0;
    vertex_ids[index++] = start_id;
    parent[start_id] = -1;
    visited[start_id] = true;

    while (!q.empty())
    {
        int id = q.front();
        q.pop();
        // process vertex here if desired
        for (const OutEdge e : vertices[id].GetOutgoingEdges())
        {
            int neighbor_id = e.GetDestID();
            if (!visited[neighbor_id])
            {
                visited[neighbor_id] = true;
                vertex_ids[index++] = neighbor_id;
                parent[neighbor_id] = id;
                q.push(neighbor_id);
            }
        }
    }
    return std::make_pair(vertex_ids, parent);
}

template <typename T>
std::vector<int> Graph<T>::DepthFirstSearch(int start_id, bool recursive) const
{
    std::vector<bool> visited(VertexCount(), false);

    // Recursive implementation
    if (recursive)
    {
        std::vector<int> visit_order_recursive;
        DepthFirstSearchRecursive(start_id, visit_order_recursive, visited);
        return visit_order_recursive;
    }

    // Iterative implementation
    std::vector<int> visit_order(VertexCount(), -1);
    std::stack<int> s; // holds vertex ids still to be explored
    s.push(start_id);

    int index = 0;
    while (!s.empty())
    {
        int id = s.top();
        s.pop();
        if (!visited[id])
        {
            visited[id] = true;
            visit_order[index++] = id;
            for (const OutEdge e : vertices[id].GetOutgoingEdges())
            {
                int neighbor_id = e.GetDestID();
                s.push(neighbor_id);
            }
        }
    }
    return visit_order;
}

template <typename T>
std::ostream & operator<<(std::ostream & out, Graph<T> & g)
{
    g.Print(out);
    return out;
}

template <typename T>
void Graph<T>::DepthFirstSearchRecursive(int vertex_id, std::vector<int> & visit_order, 
        std::vector<bool> & visited) const
{
    visited[vertex_id] = true;
    visit_order.push_back(vertex_id); // pre-order
    for (const OutEdge e : vertices[vertex_id].GetOutgoingEdges())
    {
        int neighbor_id = e.GetDestID();
        if (!visited[neighbor_id])
            DepthFirstSearchRecursive(neighbor_id, visit_order, visited);
    }
    // post-order visit would go here
}


template <typename T>
void Graph<T>::Print(std::ostream & out) const
{
    out << "V = ";
    for (const Vertex v : vertices)
        out << v.GetData() << " ";
    out << "\n";
    out << "E = ";
    for (const Vertex v : vertices)
    {
        out << "[" << v.GetData() << ":";
        for (const OutEdge e : v.GetOutgoingEdges())
        {
            out << " " << vertices[e.GetDestID()].GetData();
        }
        out << "] ";
    }
    out << "\n";

}

template <typename T>
const int Graph<T>::OutEdge::GetDestID() const
{
    return dest_id;
}

template <typename T>
const int Graph<T>::OutEdge::GetCost() const
{
    return cost;
}

template <typename T>
void Graph<T>::Vertex::AddEdge(int end_id, int cost)
{
    outgoing_edges.push_back(OutEdge(end_id, cost));
}

template <typename T>
const T & Graph<T>::Vertex::GetData() const
{
    return data;
}

template <typename T>
const std::vector<typename Graph<T>::OutEdge> & Graph<T>::Vertex::GetOutgoingEdges() const
{
    return outgoing_edges;
}
