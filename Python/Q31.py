# Q31.py - Program to Make a Simple Calculator Using switch...case (Python 3.10+)
def calculator(a, b, op):
    match op:
        case '+': return a + b
        case '-': return a - b
        case '*': return a * b
        case '/': return a / b if b != 0 else 'Division by zero'
        case '%': return a % b
        case _: return 'Invalid operation'

a = float(input("Enter first number: "))
b = float(input("Enter second number: "))
op = input("Enter operation (+, -, *, /, %): ")
print(f"Result: {calculator(a, b, op)}")