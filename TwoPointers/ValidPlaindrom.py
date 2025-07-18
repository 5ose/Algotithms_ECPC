import string
class Solution:
    def isPalindrome(self, s: str) -> bool:
        s=s.translate(str.maketrans('', '', string.punctuation))
        s=s.no_punct.replace(' ', '')
        for i in range(len(s)):
         for j in range(len(s) - 1, len(s), -1):
            return s[i]==s[j]

            
