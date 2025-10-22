from typing import List

def merge_sort(arr: List[int]) -> List[int]:
    """
    Perform Merge Sort on a list of integers and return the sorted list.

    Merge Sort is a divide-and-conquer algorithm that splits the list into halves,
    recursively sorts each half, and then merges them together.

    Time Complexity:
        O(n log n) — due to recursive splitting and merging steps.
    Space Complexity:
        O(n) — extra space required for temporary arrays during merging.

    Parameters
    ----------
    arr : List[int]
        The list of integers to sort.

    Returns
    -------
    List[int]
        A new sorted list.

    Examples
    --------
    >>> merge_sort([38, 27, 43, 3, 9, 82, 10])
    [3, 9, 10, 27, 38, 43, 82]
    >>> merge_sort([])
    []
    >>> merge_sort([5])
    [5]
    """

    # Base case: A list of length 0 or 1 is already sorted
    if len(arr) <= 1:
        return arr

    # Step 1: Divide — split the list into two halves
    mid = len(arr) // 2
    left_half = merge_sort(arr[:mid])
    right_half = merge_sort(arr[mid:])

    # Step 2: Conquer — merge the two sorted halves
    return merge(left_half, right_half)


def merge(left: List[int], right: List[int]) -> List[int]:
    """
    Merge two sorted lists into a single sorted list.

    Parameters
    ----------
    left : List[int]
        The first sorted list.
    right : List[int]
        The second sorted list.

    Returns
    -------
    List[int]
        A merged and sorted list.
    """
    merged = []
    i = j = 0

    # Compare elements from both halves and build the sorted list
    while i < len(left) and j < len(right):
        if left[i] <= right[j]:
            merged.append(left[i])
            i += 1
        else:
            merged.append(right[j])
            j += 1

    # Add remaining elements (if any)
    merged.extend(left[i:])
    merged.extend(right[j:])

    return merged
