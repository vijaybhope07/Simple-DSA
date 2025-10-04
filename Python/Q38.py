# Q38.py - Program to Convert Binary to Decimal and Vice Versa
num = input("Enter number: ")
base = int(input("Enter base (2 for binary, 10 for decimal): "))
if base == 2:
    print(f"Decimal: {int(num, 2)}")
elif base == 10:
    print(f"Binary: {bin(int(num))[2:]}")
else:
    print("Invalid base")