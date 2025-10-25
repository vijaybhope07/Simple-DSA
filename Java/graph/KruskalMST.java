package graph;

import java.util.*;

/** Kruskal's MST using Union-Find */
public class KruskalMST {
    static class Edge implements Comparable<Edge> {
        int u, v, w;
        Edge(int u, int v, int w){this.u=u;this.v=v;this.w=w;}
        public int compareTo(Edge o){return Integer.compare(this.w,o.w);}
    }

    static class DSU {
        int[] p, r;
        DSU(int n){p=new int[n];r=new int[n];for(int i=0;i<n;i++)p[i]=i;}
        int find(int x){
            if (p[x] == x) return x;
            p[x] = find(p[x]);
            return p[x];
        }
        boolean union(int a,int b){a=find(a);b=find(b);if(a==b)return false; if(r[a]<r[b])p[a]=b;else if(r[b]<r[a])p[b]=a;else{p[b]=a;r[a]++;}return true;}
    }

    public static List<Edge> kruskal(int n, List<Edge> edges) {
        Collections.sort(edges);
        DSU dsu = new DSU(n);
        List<Edge> mst = new ArrayList<>();
        for (Edge e : edges) {
            if (dsu.union(e.u, e.v)) mst.add(e);
        }
        return mst;
    }

    public static void main(String[] args) {
        int n = 6;
        List<Edge> edges = Arrays.asList(
            new Edge(0,1,4), new Edge(0,2,4), new Edge(1,2,2),
            new Edge(1,0,4), new Edge(2,0,4), new Edge(2,1,2),
            new Edge(2,3,3), new Edge(2,5,2), new Edge(2,4,4),
            new Edge(3,2,3), new Edge(3,4,3), new Edge(4,2,4),
            new Edge(4,3,3), new Edge(5,2,2), new Edge(5,4,3)
        );
        List<Edge> mst = kruskal(n, edges);
        int total = 0;
        System.out.println("Kruskal MST edges:");
        for (Edge e : mst){
            System.out.printf("%d - %d : %d\n", e.u, e.v, e.w);
            total += e.w;
        }
        System.out.println("Total weight: " + total);
    }
}
