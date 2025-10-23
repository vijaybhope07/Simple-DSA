/**
 * Leetcode 3108. Minimum Cost Walk in Weighted Graph in C++
 * There is an undirected weighted graph with n vertices labeled from 0 to n - 1.
 * You are given the integer n and an array edges, where edges[i] = [ui, vi, wi] indicates that there is an edge between vertices ui and vi with a weight of wi.
 * A walk on a graph is a sequence of vertices and edges. The walk starts and ends with a vertex, and each edge connects the vertex that comes before it and the vertex that comes after it. It's important to note that a walk may visit the same edge or vertex more than once.
 * The cost of a walk starting at node u and ending at node v is defined as the bitwise AND of the weights of the edges traversed during the walk. In other words, if the sequence of edge weights encountered during the walk is w0, w1, w2, ..., wk, then the cost is calculated as w0 & w1 & w2 & ... & wk, where & denotes the bitwise AND operator.
 * You are also given a 2D array query, where query[i] = [si, ti]. For each query, you need to find the minimum cost of the walk starting at vertex si and ending at vertex ti. If there exists no such walk, the answer is -1.
 * Return the array answer, where answer[i] denotes the minimum cost of a walk for query i.
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<pair<int, int>>> adj;
    vector<int> component;
    vector<int> minAndValue;

    void dfs(int node, int compId, int &andValue)
    {
        component[node] = compId;
        for (auto &[neighbor, weight] : adj[node])
        {
            andValue &= weight;
            if (component[neighbor] == -1)
            {
                dfs(neighbor, compId, andValue);
            }
        }
    }

    vector<int> minimumCost(int n, vector<vector<int>> &edges, vector<vector<int>> &queries)
    {
        adj.resize(n);
        component.assign(n, -1);
        minAndValue.assign(n, INT_MAX);

        for (auto &e : edges)
        {
            int u = e[0], v = e[1], w = e[2];
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }

        int compId = 0;
        for (int i = 0; i < n; i++)
        {
            if (component[i] == -1)
            {
                int andValue = INT_MAX;
                dfs(i, compId, andValue);
                minAndValue[compId] = andValue;
                compId++;
            }
        }

        vector<int> res;
        for (auto &q : queries)
        {
            int s = q[0], t = q[1];
            if (component[s] != component[t])
                res.push_back(-1);
            else
                res.push_back(minAndValue[component[s]]);
        }

        return res;
    }
};

int main()
{
    Solution sol;

    int n = 5;
    vector<vector<int>> edges = {{0, 1, 7}, {1, 3, 7}, {1, 2, 1}};
    vector<vector<int>> queries = {{0, 3}, {3, 4}};

    vector<int> result = sol.minimumCost(n, edges, queries);

    for (int x : result)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
