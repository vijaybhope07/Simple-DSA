# Q33.py - Program to Check Prime or Armstrong Using User-defined Function
def is_armstrong(num):
    return num == sum(int(d)**len(str(num)) for d in str(num))

def is_prime(n):
    if n <= 1: return False
    for i in range(2, int(n**0.5)+1):
        if n % i == 0:
            return False
    return True

num = int(input("Enter a number: "))
if is_prime(num:=num):
    print("Prime")
else:
    print("Not Prime")
if is_armstrong(num):
    print("Armstrong")
else:
    print("Not Armstrong")