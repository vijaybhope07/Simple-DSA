# Q40.py - Program to Convert Binary to Octal and Vice Versa
num = input("Enter number: ")
base = int(input("Enter base (2 for binary, 8 for octal): "))
if base == 2:
    decimal = int(num, 2)
    print(f"Octal: {oct(decimal)[2:]}")
elif base == 8:
    decimal = int(num, 8)
    print(f"Binary: {bin(decimal)[2:]}")
else:
    print("Invalid base")