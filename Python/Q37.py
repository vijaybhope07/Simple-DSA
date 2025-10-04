# Q37.py - Program to Find GCD Using Recursion
def gcd(a, b):
    if b == 0:
        return a
    return gcd(b, a % b)

x = int(input("Enter first number: "))
y = int(input("Enter second number: "))
print(f"GCD: {gcd(x, y)}")