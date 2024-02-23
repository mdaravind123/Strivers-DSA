class Solution:
    def summaryRanges(self, nums):
        lst=[]
        c=0
        ln=0
        for i in range(len(nums)-1):
            if(nums[i]!=nums[i+1]-1):
                if(c==0):
                    lst.append(str(nums[i]))
                    ln=ln+1
                else:
                    end=nums[i]
                    lst.append(str(start)+"->"+str(end))
                    c=0
                    ln=ln+end-start+1
            else:
                if(c==0):
                    start=nums[i]
                c=c+1
        if(ln==len(nums)):
            return lst
        else:
            if(ln==len(nums)-1):
                lst.append(str(nums[-1]))
            else:
                lst.append(str(nums[ln])+"->"+str(nums[-1]))
            return lst