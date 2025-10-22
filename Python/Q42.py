# Q42.py - Program to Calculate Power Using Recursion
def power(base, exp):
    if exp == 0:
        return 1
    return base * power(base, exp-1)

b = float(input("Enter base: "))
e = int(input("Enter exponent: "))
print(f"Result: {power(b, e)}")