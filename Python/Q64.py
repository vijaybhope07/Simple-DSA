import random

while True:
    print("🎲 You rolled:", random.randint(1, 6))
    choice = input("Roll again? (y/n): ")
    if choice.lower() != 'y':
        break
