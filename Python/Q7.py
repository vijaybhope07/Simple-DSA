# Q7.py - Program to Find the Size of int, float, double, char
import sys
print(f"Size of int: {sys.getsizeof(0)} bytes")
print(f"Size of float: {sys.getsizeof(0.0)} bytes")
print(f"Size of complex: {sys.getsizeof(0+0j)} bytes")
print(f"Size of char: {sys.getsizeof('a')} bytes")