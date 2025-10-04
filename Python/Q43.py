# Q43.py - Program to Calculate Average Using Arrays
arr = list(map(float, input("Enter numbers separated by space: ").split()))
avg = sum(arr)/len(arr) if arr else 0
print(f"Average: {avg}")