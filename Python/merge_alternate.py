#Q64) Merge Strings Alternately: 
#You are given two strings word1 and word2. 
#Merge the strings by adding letters in alternating order, starting with word1. 
#If a string is longer than the other, 
#append the additional letters onto the end of the merged string(LeetCode 1768).
def merge_alternately(word1,word2):
    merged=[]
    i=j=0

    #Merging characters while both strings have last characters
    while i<len(word1) and j<len(word2):
        merged.append(word1[i])
        merged.append(word2[j])
        i+=1
        j+=1
    merged.append(word1[i:])
    merged.append(word2[j:])
    return ''.join(merged)

word1=input("Enter first string: ")
word2=input("Enter second string: ")

print("The Merged string is:",merge_alternately(word1, word2))