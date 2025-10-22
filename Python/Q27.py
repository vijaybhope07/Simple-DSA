# Q27.py - Program to Check Whether a Number is Palindrome or Not
num = int(input("Enter a number: "))
rev = int(str(num)[::-1])
if num == rev:
    print("Palindrome")
else:
    print("Not a Palindrome")