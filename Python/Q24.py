# Q24.py - Program to Count Number of Digits in an Integer
num = int(input("Enter a number: "))
digits = len(str(abs(num)))
print(f"Number of digits: {digits}")