class Solution:
    def findDisappearedNumbers(self, nums):
        s=list(set(nums))
        s.sort()
        d={}
        lst=[]
        for i in range(1,len(nums)+1):
            d[i]=0
        for i in s:
            d[i]+=1
        for [k,v] in d.items():
            if(v==0):
                lst.append(k)
        return lst




        