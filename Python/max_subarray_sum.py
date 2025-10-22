from typing import List, Tuple

def max_subarray_sum(arr: List[int]) -> Tuple[int, List[int]]:
    """
    Return the maximum sum of a contiguous subarray and the subarray itself.

    This implementation uses Kadane's algorithm with O(n) time complexity.

    Parameters
    ----------
    arr : List[int]
        Input list of integers.

    Returns
    -------
    Tuple[int, List[int]]
        Maximum sum and the contiguous subarray that gives this sum.

    Examples
    --------
    >>> max_subarray_sum([−2,1,−3,4,−1,2,1,−5,4])
    (6, [4, -1, 2, 1])
    >>> max_subarray_sum([1, 2, 3, 4])
    (10, [1, 2, 3, 4])
    >>> max_subarray_sum([-1, -2, -3])
    (-1, [-1])
    >>> max_subarray_sum([])
    (0, [])
    """
    if not arr:
        return 0, []

    max_sum = current_sum = arr[0]
    start = end = temp_start = 0

    for i in range(1, len(arr)):
        if current_sum < 0:
            current_sum = arr[i]
            temp_start = i
        else:
            current_sum += arr[i]

        if current_sum > max_sum:
            max_sum = current_sum
            start = temp_start
            end = i

    return max_sum, arr[start:end + 1]
