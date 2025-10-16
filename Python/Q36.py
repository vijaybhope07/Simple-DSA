# Q36.py - Program to Find Factorial Using Recursion
def factorial(n):
    if n == 0:
        return 1
    return n * factorial(n-1)

num = int(input("Enter number: "))
print(f"Factorial: {factorial(num)}")