class Solution:
    def firstPalindrome(self, words) -> str:
        def palindromic(s):
            return s==s[::-1]
        for i in words:
            if(palindromic(i)):
                return i
        return ""
        