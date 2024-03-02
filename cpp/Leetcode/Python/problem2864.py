class Solution:
    def maximumOddBinaryNumber(self, s: str) -> str:
        c=s.count('1')
        d=s.count('0')
        t=''
        for i in range(c-1):
            t=t+'1'
        for j in range(d):
            t=t+'0'
        t=t+'1'
        return t