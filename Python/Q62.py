# Q62.py - Program to Add Two Complex Numbers by Passing Structure to a Function
class Complex:
    def __init__(self, real, imag):
        self.real = real
        self.imag = imag

def add_complex(c1, c2):
    return Complex(c1.real + c2.real, c1.imag + c2.imag)

c1 = Complex(float(input("Real1: ")), float(input("Imag1: ")))
c2 = Complex(float(input("Real2: ")), float(input("Imag2: ")))
sum_c = add_complex(c1, c2)
print(f"Sum: {sum_c.real} + {sum_c.imag}i")