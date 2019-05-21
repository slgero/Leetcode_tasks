# Runtime: 904 ms, faster than 76.37% of Python3 online submissions for Longest Palindromic Substring.
# Memory Usage: 13.1 MB, less than 76.49% of Python3 online submissions for Longest Palindromic Substring.

class Solution:
    def longestPalindrome(self, s: str) -> str:
        res = ""
        for i in range(len(s)):
            tmp = self.to_count(s, i, i)
            res = tmp if len(tmp) > len(res) else res
            tmp = self.to_count(s, i, i+1)
            res = tmp if len(tmp) > len(res) else res
        return res
    
    @staticmethod
    def to_count(s, lhs, rhs):
        while lhs >= 0 and rhs < len(s) and s[lhs] == s[rhs]:
            lhs -= 1; rhs += 1
        return s[lhs+1:rhs]
    
