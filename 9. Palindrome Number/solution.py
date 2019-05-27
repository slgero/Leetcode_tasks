# Runtime: 56 ms, faster than 99.42% of Python3 online submissions for Palindrome Number.
# Memory Usage: 13.2 MB, less than 65.63% of Python3 online submissions for Palindrome Number.

class Solution:
    def isPalindrome(self, x: int) -> bool:
        return str(x) == str(x)[::-1]
