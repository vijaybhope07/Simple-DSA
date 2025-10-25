package graph;

import java.util.*;

/** Tarjan's algorithm for strongly connected components (SCC) */
public class TarjanSCC {
    private final List<List<Integer>> adj;
    private final int n;
    private int time = 0;
    private final int[] disc, low;
    private final boolean[] inStack;
    private final Deque<Integer> stack = new ArrayDeque<>();
    private final List<List<Integer>> sccs = new ArrayList<>();

    public TarjanSCC(int n) {
        this.n = n;
        adj = new ArrayList<>(n);
        for (int i = 0; i < n; i++) adj.add(new ArrayList<>());
        disc = new int[n]; Arrays.fill(disc, -1);
        low = new int[n]; Arrays.fill(low, -1);
        inStack = new boolean[n];
    }

    public void addEdge(int u, int v) { adj.get(u).add(v); }

    private void dfs(int u) {
        disc[u] = low[u] = time++;
        stack.push(u); inStack[u] = true;
        for (int v : adj.get(u)) {
            if (disc[v] == -1) { dfs(v); low[u] = Math.min(low[u], low[v]); }
            else if (inStack[v]) low[u] = Math.min(low[u], disc[v]);
        }
        if (low[u] == disc[u]) {
            List<Integer> comp = new ArrayList<>();
            while (true) {
                int v = stack.pop(); inStack[v] = false;
                comp.add(v);
                if (v == u) break;
            }
            sccs.add(comp);
        }
    }

    public List<List<Integer>> run() {
        for (int i = 0; i < n; i++) if (disc[i] == -1) dfs(i);
        return sccs;
    }

    public static void main(String[] args) {
        TarjanSCC t = new TarjanSCC(5);
        t.addEdge(1,0);
        t.addEdge(0,2);
        t.addEdge(2,1);
        t.addEdge(0,3);
        t.addEdge(3,4);
        List<List<Integer>> sccs = t.run();
        System.out.println("SCCs:");
        for (List<Integer> comp : sccs) System.out.println(comp);
    }
}
