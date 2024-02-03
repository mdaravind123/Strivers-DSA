class Solution:
    def rearrangeArray(self, nums):
        positive=[]
        negative=[]
        modified=[]
        for i in nums:
            if i>0:
                positive.append(i)
            elif i<0:
                negative.append(i)
        for i in range(int(len(nums)/2)):
            modified.append(positive[i])
            modified.append(negative[i])
        return modified
        