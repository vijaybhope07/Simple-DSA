def is_zig_zag(arr):
    """
    Function to check whether the array is in zig-zag pattern.
    A zig-zag pattern is defined as: a < b > c < d > e ... or a > b < c > d < e ...
    """
    n = len(arr)
    for i in range(1, n-1):
        if not ((arr[i-1] < arr[i] > arr[i+1]) or (arr[i-1] > arr[i] < arr[i+1])):
            return False
    return True

# Driver code
if __name__ == "__main__":
    n = int(input("Enter size of array: "))
    arr = list(map(int, input("Enter elements: ").split()))

    if is_zig_zag(arr):
        print("The array is in zig-zag pattern.")
    else:
        print("The array is NOT in zig-zag pattern.")
