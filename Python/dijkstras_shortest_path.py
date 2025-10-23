import heapq
from typing import Dict, List, Tuple

def dijkstra(graph: Dict[str, List[Tuple[str, int]]], start: str) -> Dict[str, int]:
    """
    Compute the shortest path distances from a source node to all other nodes
    in a weighted graph using Dijkstra's Algorithm.

    This algorithm works efficiently on graphs with non-negative edge weights.

    Parameters
    ----------
    graph : Dict[str, List[Tuple[str, int]]]
        A dictionary representation of the graph.
        Example:
        {
            'A': [('B', 1), ('C', 4)],
            'B': [('C', 2), ('D', 5)],
            'C': [('D', 1)],
            'D': []
        }

    start : str
        The starting node for the shortest path calculation.

    Returns
    -------
    Dict[str, int]
        A dictionary of shortest distances from the start node to every other node.

    Examples
    --------
    >>> graph = {
    ...     'A': [('B', 1), ('C', 4)],
    ...     'B': [('C', 2), ('D', 5)],
    ...     'C': [('D', 1)],
    ...     'D': []
    ... }
    >>> dijkstra(graph, 'A')
    {'A': 0, 'B': 1, 'C': 3, 'D': 4}
    """

    # Initialize distances with infinity
    distances: Dict[str, int] = {node: float('inf') for node in graph}
    distances[start] = 0  # Distance to self is 0

    # Priority queue to get the smallest distance node efficiently
    pq: List[Tuple[int, str]] = [(0, start)]

    while pq:
        current_distance, current_node = heapq.heappop(pq)

        # Skip if we have already found a better path
        if current_distance > distances[current_node]:
            continue

        # Explore neighbors
        for neighbor, weight in graph[current_node]:
            distance = current_distance + weight

            # If found a shorter path, update and push to priority queue
            if distance < distances[neighbor]:
                distances[neighbor] = distance
                heapq.heappush(pq, (distance, neighbor))

    return distances
