/**
 * An undirected graph of n nodes is defined by edgeList, where edgeList[i] = [ui, vi, disi] denotes an edge between nodes ui and vi with distance disi. Note that there may be multiple edges between two nodes.
 * Given an array queries, where queries[j] = [pj, qj, limitj], your task is to determine for each queries[j] whether there is a path between pj and qj such that each edge on the path has a distance strictly less than limit j.
 * Return a boolean array answer, where answer.length == queries.length and the jth value of answer is true if there is a path for queries[j] is true, and false otherwise.
 */

#include <bits/stdc++.h>
using namespace std;

class UnionFind {
    vector<int> parent;
public:
    UnionFind(int n) : parent(n) {
        iota(begin(parent), end(parent), 0);
    }
    void connect(int a, int b) {
        int x = find(a), y = find(b);
        if (x == y) return;
        parent[x] = y;
    }
    bool connected(int i, int j) { return find(i) == find(j); }
    int find(int a) {
        return parent[a] == a ? a : (parent[a] = find(parent[a]));
    }
};

class Solution {
public:
    vector<bool> distanceLimitedPathsExist(int n, vector<vector<int>>& edges, vector<vector<int>>& queries) {
        vector<bool> ans(queries.size());
        for (int i = 0; i < queries.size(); ++i) queries[i].push_back(i);
        sort(begin(queries), end(queries), [&](auto &a, auto &b) { return a[2] < b[2]; });
        sort(begin(edges), end(edges), [&](auto &a, auto &b) { return a[2] < b[2]; });
        UnionFind uf(n);
        int i = 0;
        for (auto &q : queries) { 
            int u = q[0], v = q[1], limit = q[2], qid = q[3];
            for (; i < edges.size() && edges[i][2] < limit; ++i) 
                uf.connect(edges[i][0], edges[i][1]); 
            ans[qid] = uf.connected(u, v);
        }
        return ans;
    }
};

int main() {
    Solution sol;

    int n = 3;
    vector<vector<int>> edgeList = {{0,1,2},{1,2,4},{2,0,8},{1,0,16}};
    vector<vector<int>> queries = {{0,1,2},{0,2,5}};

    vector<bool> result = sol.distanceLimitedPathsExist(n, edgeList, queries);

    for (bool b : result) {
        cout << (b ? "true" : "false") << " ";
    }
    cout << endl;

    return 0;
}
