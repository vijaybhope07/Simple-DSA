# Q54.py - Program to Count Number of Vowels, Consonants, etc.
s = input("Enter a string: ").lower()
vowels = sum(1 for ch in s if ch in 'aeiou')
consonants = sum(1 for ch in s if ch.isalpha() and ch not in 'aeiou')
digits = sum(1 for ch in s if ch.isdigit())
specials = sum(1 for ch in s if not ch.isalnum())
print(f"Vowels: {vowels}, Consonants: {consonants}, Digits: {digits}, Special characters: {specials}")