# Q29.py - Program to Check Armstrong Number
num = int(input("Enter a number: "))
sum_dig = sum(int(d)**len(str(num)) for d in str(num))
if num == sum_dig:
    print("Armstrong Number")
else:
    print("Not Armstrong Number")