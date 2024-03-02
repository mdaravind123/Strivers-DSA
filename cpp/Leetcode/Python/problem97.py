class Solution:
    def sortedSquares(self, nums):
        squares=[]
        for i in nums:
            squares.append(i**2)
        squares.sort()
        return squares