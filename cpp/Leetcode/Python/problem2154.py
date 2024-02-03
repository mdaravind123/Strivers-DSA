class Solution:
    def findFinalValue(self, nums, original: int) -> int:
        val=original
        for i in nums:
            if val in nums:
                val=val*2
        return val