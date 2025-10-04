# Q21.py - Program to Find GCD of Two Numbers
def gcd(x, y):
    while y != 0:
        x, y = y, x % y
    return x

num1 = int(input("Enter first number: "))
num2 = int(input("Enter second number: "))
print(f"GCD is {gcd(num1, num2)}")