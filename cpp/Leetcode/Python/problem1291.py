class Solution:
    def sequentialDigits(self, low: int, high: int):
        def issequence(str):
            for i in range(len(str)-1):
                if(int(str[i])+1!=int(str[i+1])):
                    return False
            return True
        s=len(str(high))
        if(high<12):
            return []
        lst=[]
        s1=len(str(low))
        t=""
        for i in range(1,s1+1):
            t=t+str(i)
        val=int(t)
        while(s1<=s and val<=high):
            if(issequence(str(val))):
                if(val>=low):
                    lst.append(val)
                val=val+int("1"*s1)
            else:
                s1=s1+1
                t=""
                for i in range(1,s1+1):
                    t=t+str(i)
                val=int(t)
        return lst
                