#   Runtime: 56 ms, faster than 96.82% of Python3 online submissions for Median of Two Sorted Arrays.
#   Memory Usage: 13.4 MB, less than 47.19% of Python3 online submissions for Median of Two Sorted Arrays.

class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        nums = nums1 + nums2
        nums.sort()
        if len(nums) % 2:
            return nums[len(nums)//2]
        else:
            return (nums[len(nums)//2 - 1] + nums[len(nums)//2]) / 2
