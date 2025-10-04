# Q51.py - Program to Swap Numbers in Cyclic Order Using Call by Reference
def swap_cyclic(a, b, c):
    return b, c, a

a = 1; b = 2; c = 3
a, b, c = swap_cyclic(a, b, c)
print(f"After cyclic swap: a={a}, b={b}, c={c}")