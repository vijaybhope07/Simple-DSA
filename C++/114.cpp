// You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.

// Return the merged string.

 

// Example 1:

// Input: word1 = "abc", word2 = "pqr"
// Output: "apbqcr"
// Explanation: The merged string will be merged as so:
// word1:  a   b   c
// word2:    p   q   r
// merged: a p b q c r




class Solution {
    public:
        string mergeAlternately(string word1, string word2) {
          int w1 = word1.size();
        int w2 = word2.size();
        int size = w1 + w2;
        string final="";
        int j = 0 , k = 0;
        while (j < w1 || k < w2){
            if(j<w1){
                final += word1[j++];
            }
            if(k<w2){
                final += word2[k++];
            }
        }
        return final;
        }
    };