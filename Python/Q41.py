# Q41.py - Program to Reverse a Sentence Using Recursion
def reverse_sentence(s):
    if len(s) == 0:
        return s
    else:
        return reverse_sentence(s[1:]) + s[0]

sentence = input("Enter a sentence: ")
print(f"Reversed: {reverse_sentence(sentence)}")