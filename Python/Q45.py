# Q45.py - Program to Calculate Standard Deviation
import math
arr = list(map(float, input("Enter numbers separated by space: ").split()))
if arr:
    mean = sum(arr)/len(arr)
    variance = sum((x - mean)**2 for x in arr)/len(arr)
    std_dev = math.sqrt(variance)
    print(f"Standard Deviation: {std_dev}")
else:
    print("Empty array")