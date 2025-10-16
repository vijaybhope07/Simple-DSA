# Q25.py - Program to Reverse a Number
num = int(input("Enter a number: "))
rev = 0
temp = num
while temp > 0:
    rev = rev*10 + temp%10
    temp //= 10
print(f"Reversed number: {rev}")