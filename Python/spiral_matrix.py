# Print elements of a matrix in spiral order

def spiral_order(matrix):
    res = []
    while matrix:
        res += matrix.pop(0)
        matrix = list(zip(*matrix))[::-1]
    return res

# Example
matrix = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]
print(spiral_order(matrix))  # Output: [1,2,3,6,9,8,7,4,5]
