# Q53.py - Program to Find Frequency of Characters in a String
s = input("Enter a string: ")
freq = {}
for ch in s:
    freq[ch] = freq.get(ch, 0) + 1
for k,v in freq.items():
    print(f"'{k}': {v}")