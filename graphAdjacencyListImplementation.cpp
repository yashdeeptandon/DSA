#include <bits/stdc++.h>

using namespace std;
template <typename T> // generic class i.e can be used int, char, string instead of T

class graph
{
public:
    unordered_map<T, list<T>> adj;

    void addEdge(T u, T v, bool direction)
    {
        // 0 -> undirected graph
        // 1 -> directed graph

        // creating edge from u to v
        adj[u].push_back(v);

        if (direction == 0)
        {
            adj[v].push_back(u);
        }
    }

    void printAdjList()
    {
        for (auto i : adj)
        {
            cout << i.first << "-> ";
            for (auto j : i.second)
            {
                cout << j << ", ";
            }
            cout << endl;
        }
    }
};

int main()
{
    int n;
    cout << "Enter total nodes: ";
    cin >> n;

    int m;
    cout << "Enter total edges: ";
    cin >> m;

    graph<int> g;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        // creating an undirected edge
        g.addEdge(u, v, 0);
    }

    // printing graph
    g.printAdjList();
}