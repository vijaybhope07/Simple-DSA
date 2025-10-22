def rotate(arr, k):
    """
    Function to rotate an array to the right by k positions.
    """
    n = len(arr)
    k = k % n  # handle cases where k > n
    return arr[-k:] + arr[:-k]

# Driver code
if __name__ == "__main__":
    n = int(input("Enter size of array: "))
    arr = list(map(int, input("Enter elements: ").split()))
    k = int(input("Enter positions to rotate: "))

    rotated_arr = rotate(arr, k)
    print("Array after rotation:", *rotated_arr)
