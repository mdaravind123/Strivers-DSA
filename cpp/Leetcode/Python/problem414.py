class Solution:
    def thirdMax(self, nums) -> int:
        l=list(set(nums))
        l.sort(reverse=True)
        if(len(l)<3):
            return l[0]
        else:
            return l[2]
        