from typing import List

def merge_sort(arr: List[int]) -> List[int]:
    """
    Perform Merge Sort on a list of integers and return a new sorted list.

    Merge Sort is a stable, divide-and-conquer sorting algorithm that 
    splits the array into halves, sorts each half, and merges them together.

    Time Complexity:
        - Best, Average, and Worst Case: O(n log n)
    Space Complexity:
        - O(n), due to temporary arrays used during merging.

    Parameters
    ----------
    arr : List[int]
        List of integers to sort.

    Returns
    -------
    List[int]
        Sorted list of integers.

    Examples
    --------
    >>> merge_sort([38, 27, 43, 3, 9, 82, 10])
    [3, 9, 10, 27, 38, 43, 82]
    >>> merge_sort([1, 2, 3])
    [1, 2, 3]
    >>> merge_sort([])
    []
    """

    # Base case: a list of one or zero elements is already sorted
    if len(arr) <= 1:
        return arr

    # Step 1: Split the list into two halves
    mid = len(arr) // 2
    left_half = merge_sort(arr[:mid])
    right_half = merge_sort(arr[mid:])

    # Step 2: Merge the two sorted halves
    return _merge(left_half, right_half)


def _merge(left: List[int], right: List[int]) -> List[int]:
    """Helper function to merge two sorted lists."""
    merged = []
    i = j = 0

    # Merge elements in sorted order
    while i < len(left) and j < len(right):
        if left[i] <= right[j]:
            merged.append(left[i])
            i += 1
        else:
            merged.append(right[j])
            j += 1

    # Append any remaining elements
    merged.extend(left[i:])
    merged.extend(right[j:])
    return merged
