# 1
# Runtime: 64 ms, faster than 92.31% of Python3 online submissions for Longest Substring Without Repeating Characters.
# Memory Usage: 13.3 MB, less than 49.91% of Python3 online submissions for Longest Substring Without Repeating Characters.


class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        ans, sub_len, sub_start, dic = 0, 0, 0, {}
        for i, c in enumerate(s):
            if c in dic and dic[c] >= sub_start:
                pos = dic[c]
                sub_len = sub_len - (pos - sub_start) - 1
                sub_start = i - sub_len
            dic[c] = i
            sub_len += 1
            ans = max(ans, sub_len)
        return ans

# 2
# Runtime: 48 ms, faster than 99.93% of Python3 online submissions for Longest Substring Without Repeating Characters.
# Memory Usage: 13.4 MB, less than 13.13% of Python3 online submissions for Longest Substring Without Repeating Characters.

class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        collector, ans, sub_start= {}, 0, 0
        for i, c in enumerate(s):
            if c in collector and collector[c] >= sub_start:
                sub_start = collector[c] + 1
            else:
                ans = max(ans, i - sub_start + 1)
            collector[c] = i
        return ans
