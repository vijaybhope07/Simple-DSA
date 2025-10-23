import heapq
from typing import Dict, List, Tuple, Optional


def heuristic(a: Tuple[int, int], b: Tuple[int, int]) -> float:
    """
    Heuristic function: Returns the Manhattan distance between two points.
    This helps guide the A* search towards the goal efficiently.

    Parameters
    ----------
    a, b : Tuple[int, int]
        Coordinate pairs representing grid positions.

    Returns
    -------
    float
        Manhattan distance between a and b.
    """
    return abs(a[0] - b[0]) + abs(a[1] - b[1])


def a_star(
    graph: Dict[Tuple[int, int], List[Tuple[Tuple[int, int], int]]],
    start: Tuple[int, int],
    goal: Tuple[int, int]
) -> Optional[List[Tuple[int, int]]]:
    """
    Perform A* pathfinding algorithm to find the shortest path from start to goal.

    A* is an informed search algorithm that uses both actual distance from the start
    and an estimated distance (heuristic) to the goal for optimal performance.

    Parameters
    ----------
    graph : Dict[Tuple[int, int], List[Tuple[Tuple[int, int], int]]]
        A graph represented as an adjacency list where each node maps to a list
        of (neighbor, cost) tuples.

    start : Tuple[int, int]
        The starting coordinate node.

    goal : Tuple[int, int]
        The target coordinate node.

    Returns
    -------
    Optional[List[Tuple[int, int]]]
        A list representing the path from start to goal, or None if no path exists.

    Examples
    --------
    >>> graph = {
    ...     (0, 0): [((1, 0), 1), ((0, 1), 1)],
    ...     (1, 0): [((1, 1), 1), ((0, 0), 1)],
    ...     (0, 1): [((1, 1), 1), ((0, 0), 1)],
    ...     (1, 1): []
    ... }
    >>> a_star(graph, (0, 0), (1, 1))
    [(0, 0), (1, 0), (1, 1)]
    """

    # Open set (priority queue) initialized with the start node
    open_set: List[Tuple[float, Tuple[int, int]]] = [(0, start)]

    # Dictionaries to store path and cost info
    came_from: Dict[Tuple[int, int], Optional[Tuple[int, int]]] = {start: None}
    g_score: Dict[Tuple[int, int], float] = {start: 0}

    while open_set:
        # Get node with the lowest f_score (total estimated cost)
        _, current = heapq.heappop(open_set)

        if current == goal:
            # Reconstruct the path by backtracking
            path: List[Tuple[int, int]] = []
            while current:
                path.append(current)
                current = came_from[current]
            return path[::-1]  # Return reversed path

        for neighbor, cost in graph.get(current, []):
            tentative_g_score = g_score[current] + cost

            # If this path to neighbor is better, record it
            if tentative_g_score < g_score.get(neighbor, float("inf")):
                came_from[neighbor] = current
                g_score[neighbor] = tentative_g_score
                f_score = tentative_g_score + heuristic(neighbor, goal)
                heapq.heappush(open_set, (f_score, neighbor))

    return None  # No path found
