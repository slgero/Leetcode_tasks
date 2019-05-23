# Runtime: 32 ms, faster than 98.76% of Python3 online submissions for Reverse Integer.
# Memory Usage: 13.2 MB, less than 56.92% of Python3 online submissions for Reverse 


class Solution:
    def reverse(self, x: int) -> int:
        isNeg = 1 if x > 0 else -1
        x *= isNeg
        s = str(x)[::-1]
        res = int(s) * isNeg
        if abs(res) >= (2 ** 31 - 1): return 0
        return res
