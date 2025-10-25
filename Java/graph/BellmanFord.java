package graph;

import java.util.*;

/** Bellman-Ford: handles negative weights and detects negative cycles. */
public class BellmanFord {
    public static int[] bellmanFord(int n, List<int[]> edges, int src) {
        final int INF = Integer.MAX_VALUE / 4;
        int[] dist = new int[n];
        Arrays.fill(dist, INF);
        dist[src] = 0;

        for (int i = 1; i <= n-1; i++) {
            boolean changed = false;
            for (int[] e : edges) {
                int u = e[0], v = e[1], w = e[2];
                if (dist[u] < INF && dist[v] > dist[u] + w) {
                    dist[v] = dist[u] + w;
                    changed = true;
                }
            }
            if (!changed) break;
        }

        // detect negative cycle (optional)
        for (int[] e : edges) {
            int u = e[0], v = e[1], w = e[2];
            if (dist[u] < INF && dist[v] > dist[u] + w) {
                return null; // signal negative cycle
            }
        }
        return dist;
    }

    public static void main(String[] args) {
        int n = 5;
        List<int[]> edges = new ArrayList<>();
        edges.add(new int[]{0,1,6});
        edges.add(new int[]{0,3,7});
        edges.add(new int[]{1,2,5});
        edges.add(new int[]{1,3,8});
        edges.add(new int[]{1,4,-4});
        edges.add(new int[]{2,1,-2});
        edges.add(new int[]{3,2,-3});
        edges.add(new int[]{3,4,9});
        edges.add(new int[]{4,0,2});

        int[] dist = bellmanFord(n, edges, 0);
        if (dist == null) System.out.println("Graph contains a negative-weight cycle");
        else {
            System.out.println("Bellman-Ford distances from 0:");
            for (int i = 0; i < dist.length; i++) System.out.printf("%d: %d\n", i, dist[i]);
        }
    }
}
