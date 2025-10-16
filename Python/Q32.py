# Q32.py - Program to Display Prime Numbers Between Intervals Using Function
def is_prime(n):
    if n <= 1: return False
    for i in range(2, int(n**0.5)+1):
        if n % i == 0:
            return False
    return True

start = int(input("Enter start: "))
end = int(input("Enter end: "))
print(f"Prime numbers between {start} and {end}:")
for i in range(start, end+1):
    if is_prime(i):
        print(i, end=' ')
print()