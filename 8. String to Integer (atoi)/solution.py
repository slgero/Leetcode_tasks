# Runtime: 36 ms, faster than 98.46% of Python3 online submissions for String to Integer (atoi).
# Memory Usage: 13.2 MB, less than 48.93% of Python3 online submissions for String to Integer (atoi).

class Solution:
    def myAtoi(self, s):
        s = s.lstrip()
        if len(s) == 0: return 0

        num = ''
        if s[0] == '-' or s[0] == '+':
            num = s[0]
            s = s[1:]

        for c in s:
            if c.isdigit():
                num += c
            else:
                break

        try:
            val = int(num)
            if (val.bit_length() >= 32):
                return (2**31 - 1) if val > 0 else -2**31
            return val
        except ValueError:
            return 0
        
