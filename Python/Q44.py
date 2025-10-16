# Q44.py - Program to Find Largest Element in an Array
arr = list(map(int, input("Enter numbers separated by space: ").split()))
largest = max(arr) if arr else None
print(f"Largest element: {largest}")