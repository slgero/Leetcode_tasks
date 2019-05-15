""" Runtime: 28 ms, faster than 99.95% of Python3 online submissions for Two Sum.
    Memory Usage: 15.1 MB, less than 6.02% of Python3 online submissions for Two Sum. """

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        my_dict = {}
        for i in range(len(nums)):
            my_dict[nums[i]] = i
        for i in nums:
            dif = target - i
            if dif in my_dict:
                if my_dict[dif] != nums.index(i):
                    return [nums.index(i), my_dict[dif]]
