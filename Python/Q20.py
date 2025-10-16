# Q20.py - Program to Display Fibonacci Sequence
n = int(input("Enter number of terms: "))
a, b = 0, 1
print(a, b, end=' ')
for _ in range(n-2):
    a, b = b, a+b
    print(b, end=' ')
print()