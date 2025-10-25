package graph;

import java.util.*;

/** Floyd–Warshall: all-pairs shortest paths (works with negative weights but no negative cycles). */
public class FloydWarshall {
    public static int[][] floydWarshall(int n, int[][] adj) {
        final int INF = Integer.MAX_VALUE / 4;
        int[][] dist = new int[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) dist[i][j] = adj[i][j];
        }

        for (int k = 0; k < n; k++) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (dist[i][k] < INF && dist[k][j] < INF)
                        dist[i][j] = Math.min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
        return dist;
    }

    public static void main(String[] args) {
        final int INF = Integer.MAX_VALUE / 4;
        int n = 4;
        int[][] adj = new int[n][n];
        for (int i = 0; i < n; i++) Arrays.fill(adj[i], INF);
        for (int i = 0; i < n; i++) adj[i][i] = 0;

        adj[0][1] = 5; adj[0][3] = 10;
        adj[1][2] = 3;
        adj[2][3] = 1;

        int[][] d = floydWarshall(n, adj);
        System.out.println("Floyd-Warshall all-pairs distances:");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                String s = (d[i][j] >= INF/2) ? "INF" : String.valueOf(d[i][j]);
                System.out.print(s + (j+1<n?" ":"\n"));
            }
        }
    }
}
