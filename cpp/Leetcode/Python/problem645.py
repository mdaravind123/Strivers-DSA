#beats 5% 8280ms
class Solution:
    def findErrorNums(self, nums):
        n=len(nums)
        dup=0
        missing=0
        for i in range(1,n+1):
            count=nums.count(i)
            if(count==2):
                dup=i
            elif(count==0):
                missing=i
        return [dup,missing]