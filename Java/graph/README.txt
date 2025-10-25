Graph algorithms (Java)

This folder contains implementations and small demos for several advanced graph algorithms:

- GraphUtils.java — shared Edge and Graph representation (adjacency list).
- Dijkstra.java — single-source shortest paths (non-negative weights).
- BellmanFord.java — single-source shortest paths with negative weights; detects negative cycles.
- FloydWarshall.java — all-pairs shortest paths.
- KruskalMST.java — Minimum Spanning Tree using Kruskal + Union-Find.
- PrimMST.java — Minimum Spanning Tree using Prim's algorithm.
- TarjanSCC.java — Tarjan's strongly connected components algorithm.

How to compile (PowerShell):

javac "${PWD}\Java\graph\*.java"

How to run a demo (PowerShell):

java -cp "${PWD}\Java" graph.Dijkstra

Replace Dijkstra with the other class names to run their demos.
