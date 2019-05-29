#   Runtime: 44 ms, faster than 99.28% of Python3 online submissions for Integer to Roman.
#   Memory Usage: 13.2 MB, less than 80.38% of Python3 online submissions for Integer to Roman.

class Solution:
    table =[["", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"],
            ["", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"],
            ["", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"],
            ["", "M", "MM", "MMM"]]
    def intToRoman(self, num: int) -> str:
        res = ''
        count = 0
        while(num > 0):
            res = self.table[count][int(num % 10)] + res
            count += 1
            num //= 10
        return res
