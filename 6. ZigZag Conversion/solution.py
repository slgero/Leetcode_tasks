# Runtime: 44 ms, faster than 97.09% of Python online submissions for ZigZag Conversion.
# Memory Usage: 12 MB, less than 19.54% of Python online submissions for ZigZag 

class Solution(object):
    def convert(self, s, numRows):
        if numRows == 1: return s
        
        v = [''] * numRows
        isDown = 1
        curRow = 0
        for c in s:
            v[curRow] += c
            if curRow == 0:
                isDown = 1
            elif curRow + 1 == numRows:
                isDown = -1
            curRow += isDown    
        return ''.join(v)
        
