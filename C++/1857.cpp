/**
 * Leetcode 1857 Largest Color Value in a Directed Graph in c++
 * There is a directed graph of n colored nodes and m edges. The nodes are numbered from 0 to n - 1.
 * You are given a string colors where colors[i] is a lowercase English letter representing the color of the ith node in this graph (0-indexed). You are also given a 2D array edges where edges[j] = [aj, bj] indicates that there is a directed edge from node aj to node bj.
 * A valid path in the graph is a sequence of nodes x1 -> x2 -> x3 -> ... -> xk such that there is a directed edge from xi to xi+1 for every 1 <= i < k. The color value of the path is the number of nodes that are colored the most frequently occurring color along that path.
 * Return the largest color value of any valid path in the given graph, or -1 if the graph contains a cycle.
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestPathValue(string colors, vector<vector<int>>& edges) {
        int n = colors.size();
        vector<int> indeg(n, 0);
        vector<vector<int>> adj(n);
        vector<vector<int>> count(n, vector<int>(26, 0));
        int ans = 0, process = 0;

        for (auto &e : edges) {
            adj[e[0]].push_back(e[1]);
            indeg[e[1]]++;
        }

        queue<int> q;
        for (int i = 0; i < n; i++) {
            if (indeg[i] == 0) q.push(i);
        }

        while (!q.empty()) {
            int node = q.front();
            q.pop();
            process++;
            count[node][colors[node] - 'a']++;
            ans = max(ans, count[node][colors[node] - 'a']);

            for (auto x : adj[node]) {
                indeg[x]--;
                if (indeg[x] == 0) {
                    q.push(x);
                }
                for (int i = 0; i < 26; i++) {
                    count[x][i] = max(count[x][i], count[node][i]);
                }
            }
        }

        return (process == n) ? ans : -1;
    }
};

int main() {
    Solution sol;

    string colors = "abaca";
    vector<vector<int>> edges = {{0,1},{0,2},{2,3},{3,4}};

    int result = sol.largestPathValue(colors, edges);

    cout << result << endl;

    return 0;
}
