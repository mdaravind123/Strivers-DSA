class Solution:
    def firstMissingPositive(self, nums) -> int:
       d = {}
       for i in nums:
           d[i] = d.get(i, 0) + 1
       for i in range(1, len(nums) + 2):  # Check for missing positive integers
            if d.get(i, 0) == 0:
                return i
       return len(nums)+1