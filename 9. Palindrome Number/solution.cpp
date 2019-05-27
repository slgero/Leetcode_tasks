/*
    Runtime: 4 ms, faster than 99.74% of C++ online submissions for Palindrome Number.
    Memory Usage: 8.4 MB, less than 61.21% of C++ online submissions for Palindrome 
*/

class Solution {
public:
    int GetLen(int x){
        int res = 0;
        while(x){
            x /= 10;
            ++res;
        }
        return res;
    }
    
    int ReverseInt(int x, int len){
        int res = 0;
        while(len > 0){
            res *= 10;
            res += x % 10;
            x /= 10;
            --len;
        }
        return res;
    }
    
    bool isPalindrome(int x) {
        if (x < 0) return false;
        if (x / 10 == 0) return true;
        int len = GetLen(x);
        if (len % 2 == 0){
        	if (x / (int)pow(10, len/2) == ReverseInt(x, len/2))
        		return true;
        }else{
        	if (x / (int)pow(10, len/2+1) == ReverseInt(x, len/2))
        	    return true;
        }
        return false;
    }
};
