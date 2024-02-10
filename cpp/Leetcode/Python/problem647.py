class Solution:
    def countSubstrings(self, s: str) -> int:
        def palindrome(s):
            return s==s[::-1]
        def substrings(s):
            subarray=[]
            for i in range(len(s)):
                for j in range(i+1,len(s)+1):
                    subarray.append(s[i:j])
            return subarray
        lst=substrings(s)
        c=0
        for i in lst:
            if(palindrome(i)):
                c=c+1
        return c
        