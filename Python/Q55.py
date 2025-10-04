# Q55.py - Program to Remove all Characters Except Alphabets
s = input("Enter a string: ")
result = ''.join(ch for ch in s if ch.isalpha())
print(f"Filtered string: {result}")