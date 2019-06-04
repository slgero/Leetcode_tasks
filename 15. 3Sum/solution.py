#    Runtime: 480 ms, faster than 96.80% of Python online submissions for 3Sum.
#    Memory Usage: 15.4 MB, less than 20.46% of Python online submissions for 3Sum.

class Solution(object):
    def threeSum(self, nums):
        nums.sort()
        res = []
        i = 0
        while i < len(nums):
            target = -nums[i]
            if target < 0:
                break

            begin = i + 1
            end = len(nums) - 1
            while begin < end:
                if nums[begin] + nums[end] > target:
                    end -= 1
                elif nums[begin] + nums[end] < target:
                    begin += 1
                elif nums[begin] + nums[end] == target:
                    res.append([-target, nums[begin], nums[end]])
                    while(begin < end and nums[end] == res[len(res)-1][2]):
                        end -= 1
                    while (begin < end and nums[begin] == res[len(res)-1][1]):
                        begin += 1
            while i + 1 < len(nums) and nums[i] == nums[i+1]:
                i += 1
            i += 1
        return res
