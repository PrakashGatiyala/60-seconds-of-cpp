---
title: Check for cycles in Directed Graph
tags: Graphs
expertise: intermediate
---



- This Snippet check if there is a cycle in the given Directed graph using DFS.
- Iterate over all the nodes of the graph and Keep a visited array visited[] to track the visited nodes.

```cpp
bool checkForCycle(vector<int>adj[],vector<int>&vis,vector<int>&dfsVis,int node)
{
    vis[node] = 1;
    dfsVis[node] = 1;
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            vis[it] = 1;
            if (checkForCycle(adj, vis, dfsVis, it))
                return true;
        }
        else if (dfsVis[it] == 1)
            return true;
    }
    // backtrack for dfsVis
    dfsVis[node] = 0;

    return false;
}

int detectCycleInDirectedGraph(int n, vector<pair<int, int>> &edges)
{
    // Write your code here.
    int M = edges.size();
    vector<int> visited(n + 1, 0);
    // create the adjacency list
    vector<int> adj[n + 1];
    for (int i = 0; i < M; i++)
    {
        adj[edges[i].first].push_back(edges[i].second);
        //  adj[edges[i].second].push_back(edges[i].first);
    }
    vector<int> vis(n + 1, 0);
    vector<int> dfsVis(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i] && checkForCycle(adj, vis, dfsVis, i))
        {
            return 1;
        }
    }
    return 0;
}
```
