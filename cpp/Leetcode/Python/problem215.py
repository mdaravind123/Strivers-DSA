class Solution:
    def findKthLargest(self, nums, k: int) -> int:
        nums.sort()
        return nums[len(nums)-k]