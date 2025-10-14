text = input("Enter a word: ")
if text.lower() == text[::-1].lower():
    print("✅ It's a palindrome!")
else:
    print("❌ Not a palindrome.")
