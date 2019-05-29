#   Runtime: 60 ms, faster than 85.17% of Python3 online submissions for Container With Most Water.
#   Memory Usage: 14.3 MB, less than 88.34% of Python3 online submissions for

class Solution:
    def maxArea(self, v: List[int]) -> int:
        water = lhs = 0; rhs = len(v) - 1
        while(lhs < rhs):
            water = max(water, min(v[lhs], v[rhs])*(rhs - lhs))
            if v[lhs] < v[rhs]:
                lhs += 1
            else:
                rhs -= 1
        return water
        
