#include <bits/stdc++.h>

using namespace std;

template <typename T>

class graph
{
public:
    void addEdge(unordered_map<T, list<T>> &adj, T u, T v, bool direction)
    {
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

vector<int> bfs(unordered_map<int, list<int>> &adj, int v, int src)
{
    vector<int> ans;
    vector<bool> visited(v + 1, false);
    queue<int> q;

    q.push(src);
    visited[src] = true;

    while (!q.empty())
    {
        int front = q.front();
        q.pop();
        // storing the front
        ans.push_back(front);

        // storing the neighbors of front inside the queue
        for (auto i : adj[front])
        {
            if (!visited[i])
            {
                q.push(i);
                visited[i] = true;
            }
        }
    }

    return ans;
}

int main()
{
    int n;
    cout << "Enter total vertices in graph: ";
    cin >> n;

    int m;
    cout << "Enter total edges in graph: ";
    cin >> m;

    unordered_map<int, list<int>> adj;

    graph<int> g;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        g.addEdge(adj, u, v, 0);
    }

    g.printAdjList();
    cout << endl;

    vector<int> bfsTraversal = bfs(adj, n, 0);

    for (auto i : bfsTraversal)
    {
        cout << i << ", ";
    }
}