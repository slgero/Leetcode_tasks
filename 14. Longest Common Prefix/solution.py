#   In fact, this is not a solution, but it is so elegant and elegant that I want to share it.

#   Runtime: 36 ms, faster than 93.87% of Python3 online submissions for Longest Common Prefix.
#   Memory Usage: 13.2 MB, less than 52.95% of Python3 online submissions for Longest Common Prefix.

class Solution:
    def longestCommonPrefix(self, strs):
        Zip, res = zip(*strs), ''
        for ch in Zip:
            if len(set(ch)) > 1: break
            res += ch[0]
        return res
