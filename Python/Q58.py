# Q58.py - Program to Copy String Without Using strcpy()
s = input("Enter string to copy: ")
copied = ''.join([ch for ch in s])
print(f"Copied string: {copied}")