# Q52.py - Program to Find Largest Number Using Dynamic Memory Allocation (list in Python)
n = int(input("Enter number of elements: "))
arr = [int(input(f"Enter element {i+1}: ")) for i in range(n)]
largest = max(arr)
print(f"Largest number: {largest}")