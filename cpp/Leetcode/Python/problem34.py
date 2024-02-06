class Solution:
    def searchRange(self, nums, target: int):
        lst=[]
        for i in range(len(nums)):
            if nums[i]==target:
                lst.append(i)
        if len(lst)==0:
            return [-1,-1]
        else:
            return [lst[0],lst[-1]]