#   Runtime: 48 ms, faster than 99.57% of Python3 online submissions for Roman to Integer.
#   Memory Usage: 13.3 MB, less than 49.06% of Python3 online submissions for Roman to Integer.

class Solution:
    def romanToInt(self, s: str) -> int:
        romain_int = {
            "I": 1,
            "V": 5,
            "X": 10,
            "L": 50,
            "C": 100,
            "D": 500,
            "M": 1000
        }
        s = s.replace("IV", "IIII").replace("IX", "VIIII")
        s = s.replace("XL", "XXXX").replace("XC", "LXXXX")
        s = s.replace("CD", "CCCC").replace("CM", "DCCCC")

        return sum([romain_int[c] for c in s])
