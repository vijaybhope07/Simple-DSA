package graph;

import java.util.*;

/**
 * Shared utilities: Edge and simple Graph representation using adjacency lists.
 */
public class GraphUtils {
    public static class Edge {
        public final int to;
        public final int weight;

        public Edge(int to, int weight) {
            this.to = to;
            this.weight = weight;
        }
    }

    public static class Graph {
        private final int n;
        private final List<List<Edge>> adj;

        public Graph(int n) {
            this.n = n;
            adj = new ArrayList<>(n);
            for (int i = 0; i < n; i++) adj.add(new ArrayList<>());
        }

        public void addEdge(int u, int v, int w) {
            adj.get(u).add(new Edge(v, w));
        }

        public List<List<Edge>> getAdj() { return adj; }

        public int size() { return n; }
    }
}
