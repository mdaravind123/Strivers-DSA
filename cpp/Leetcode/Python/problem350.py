class Solution:
    def intersect(self, nums1, nums2):
        lst=[]
        for i in nums1:
            if i in nums2:
                lst+=[i]
                nums2.remove(i)
        return lst