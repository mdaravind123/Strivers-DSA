#best approach
class Solution:
    def findDuplicate(self, nums) -> int:
        s=set()
        for i in nums:
            if i in s:
                return i
            s.add(i)

#using hashmaps

class Solution:
    def findDuplicate(self, nums) -> int:
        d={}
        for i in nums:
            d[i]=d.get(i,0)+1
        for i in nums:
            if d[i]>1:
                return i
        return -1

        
        