/*
    Runtime: 4 ms, faster than 95.57% of C++ online submissions for Reverse Integer.
    Memory Usage: 8.3 MB, less than 66.26% of C++ online submissions for Reverse Integer.
*/

class Solution {
public:
    int reverse(int x) {
        if (x == INT_MIN) return 0;
        int isNeg = (x < 0) ? -1 : 1;
        x *= isNeg;
        
        int res = 0;
        while(x != 0){
            if (res > INT_MAX/10) return 0;
            if (res == INT_MAX/10 && x%10 > 7) return 0;
            res *= 10;
            res += x % 10;
            x /= 10;
        }
        res *= isNeg;
        return res;
    }
};
