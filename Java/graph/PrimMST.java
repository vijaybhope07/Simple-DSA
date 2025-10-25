package graph;

import java.util.*;

/** Prim's algorithm for MST (using min-heap) */
public class PrimMST {
    public static int prim(GraphUtils.Graph g) {
        int n = g.size();
        boolean[] used = new boolean[n];
        int[] minEdge = new int[n];
        Arrays.fill(minEdge, Integer.MAX_VALUE/4);
        minEdge[0] = 0;
        PriorityQueue<int[]> pq = new PriorityQueue<>(Comparator.comparingInt(a->a[0]));
        pq.add(new int[]{0,0});
        int total = 0;
        while (!pq.isEmpty()){
            int[] cur = pq.poll();
            int w = cur[0], v = cur[1];
            if (used[v]) continue;
            used[v] = true;
            total += w;
            for (GraphUtils.Edge e : g.getAdj().get(v)){
                if (!used[e.to] && e.weight < minEdge[e.to]){
                    minEdge[e.to] = e.weight;
                    pq.add(new int[]{minEdge[e.to], e.to});
                }
            }
        }
        return total;
    }

    public static void main(String[] args){
        GraphUtils.Graph g = new GraphUtils.Graph(5);
        g.addEdge(0,1,2); g.addEdge(1,0,2);
        g.addEdge(0,3,6); g.addEdge(3,0,6);
        g.addEdge(1,2,3); g.addEdge(2,1,3);
        g.addEdge(1,3,8); g.addEdge(3,1,8);
        g.addEdge(1,4,5); g.addEdge(4,1,5);
        g.addEdge(2,4,7); g.addEdge(4,2,7);
        g.addEdge(3,4,9); g.addEdge(4,3,9);

        System.out.println("Prim MST total weight: " + prim(g));
    }
}
