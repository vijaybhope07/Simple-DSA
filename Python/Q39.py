# Q39.py - Program to Convert Octal to Decimal and Vice Versa
num = input("Enter number: ")
base = int(input("Enter base (8 for octal, 10 for decimal): "))
if base == 8:
    print(f"Decimal: {int(num, 8)}")
elif base == 10:
    print(f"Octal: {oct(int(num))[2:]}")
else:
    print("Invalid base")