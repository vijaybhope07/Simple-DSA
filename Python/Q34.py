# Q34.py - Program to Check Whether a Number can be Expressed as Sum of Two Prime Numbers
def is_prime(n):
    if n <= 1: return False
    for i in range(2, int(n**0.5)+1):
        if n % i == 0:
            return False
    return True

num = int(input("Enter a number: "))
found = False
for i in range(2, num//2+1):
    if is_prime(i) and is_prime(num-i):
        print(f"{num} = {i} + {num-i}")
        found = True
        break
if not found:
    print(f"{num} cannot be expressed as sum of two primes")