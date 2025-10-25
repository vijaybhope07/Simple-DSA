package graph;

import java.util.*;

/** Dijkstra's algorithm (single-source shortest paths, non-negative weights). */
public class Dijkstra {
    public static int[] dijkstra(GraphUtils.Graph g, int src) {
        int n = g.size();
        final int INF = Integer.MAX_VALUE / 4;
        int[] dist = new int[n];
        Arrays.fill(dist, INF);
        dist[src] = 0;

        PriorityQueue<int[]> pq = new PriorityQueue<>(Comparator.comparingInt(a -> a[0]));
        pq.add(new int[]{0, src});

        while (!pq.isEmpty()) {
            int[] cur = pq.poll();
            int d = cur[0], u = cur[1];
            if (d != dist[u]) continue;
            for (GraphUtils.Edge e : g.getAdj().get(u)) {
                int v = e.to, w = e.weight;
                if (dist[v] > dist[u] + w) {
                    dist[v] = dist[u] + w;
                    pq.add(new int[]{dist[v], v});
                }
            }
        }
        return dist;
    }

    // Demo
    public static void main(String[] args) {
        GraphUtils.Graph g = new GraphUtils.Graph(6);
        g.addEdge(0,1,7); g.addEdge(0,2,9); g.addEdge(0,5,14);
        g.addEdge(1,2,10); g.addEdge(1,3,15);
        g.addEdge(2,3,11); g.addEdge(2,5,2);
        g.addEdge(3,4,6);
        g.addEdge(4,5,9);

        int[] dist = dijkstra(g, 0);
        System.out.println("Dijkstra distances from 0:");
        for (int i = 0; i < dist.length; i++) System.out.printf("%d: %d\n", i, dist[i]);
    }
}
