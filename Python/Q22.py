# Q22.py - Program to Find LCM of Two Numbers
def lcm(x, y):
    from math import gcd
    return abs(x*y)//gcd(x, y)

num1 = int(input("Enter first number: "))
num2 = int(input("Enter second number: "))
print(f"LCM is {lcm(num1, num2)}")