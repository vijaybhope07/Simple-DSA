from typing import List

def quick_sort(arr: List[int]) -> List[int]:
    """
    Perform Quick Sort on a list of integers and return a new sorted list.

    Quick Sort is an efficient, divide-and-conquer algorithm that works by 
    selecting a 'pivot' element and partitioning the array into two halves — 
    elements less than the pivot and elements greater than the pivot.

    Time Complexity:
        - Average: O(n log n)
        - Worst: O(n^2)
    Space Complexity:
        O(log n) due to recursion stack.

    Parameters
    ----------
    arr : List[int]
        List of integers to be sorted.

    Returns
    -------
    List[int]
        A new sorted list.

    Examples
    --------
    >>> quick_sort([10, 7, 8, 9, 1, 5])
    [1, 5, 7, 8, 9, 10]
    >>> quick_sort([3, 3, 2, 1])
    [1, 2, 3, 3]
    >>> quick_sort([])
    []
    """

    # Base case: arrays with 0 or 1 element are already sorted
    if len(arr) <= 1:
        return arr

    # Step 1: Choose a pivot (middle element for balance)
    pivot = arr[len(arr) // 2]

    # Step 2: Partition the array into three parts
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]

    # Step 3: Recursively sort and combine the results
    return quick_sort(left) + middle + quick_sort(right)
