/*
    Runtime: 16 ms, faster than 83.54% of C++ online submissions for Longest Palindromic Substring.
    Memory Usage: 8.7 MB, less than 90.14% of C++ online submissions for Longest Palindromic Substring.
*/

class Solution {
public:
    void ToCount(const string& s, int& max_size, int& pos, int num, int i){
        int j = 1, size = 2 + num;
        while(j <= i && j < s.size() - i && s[i - j] == s[i + 1 + j + num]){
            size += 2;
            j++;
        }
        if (size > max_size){
            max_size = size;
            pos = i - j + 1;
        }
    }
    
    string longestPalindrome(string s) {
        if (s.empty())
            return "";
        int max_size = 1, pos = 0;
        for(int i = 0; i + 1 < s.size(); ++i){
            if (s[i] == s[i+1])
                ToCount(s, max_size, pos, 0, i);
            if (i + 2 < s.size())
                if (s[i] == s[i + 2])
                    ToCount(s, max_size, pos, 1, i);
        }
        return s.substr(pos, max_size);
    }
};
