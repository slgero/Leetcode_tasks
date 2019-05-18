/*
  Runtime: 12 ms, faster than 97.64% of C++ online submissions for Longest Substring Without Repeating Characters.
  Memory Usage: 11.4 MB, less than 69.44% of C++ online submissions for Longest Substring Without Repeating Characters.
*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      size_t ans = 0, sub_len = 0, j = 0;
      unordered_map<char, size_t> m;

      for(size_t i = 0; i < s.size(); i++){
          if(m.count(s.at(i)) == 1){
              if (m.at(s[i]) >= j)
              {
                  size_t pos = m.at(s.at(i));   
                  sub_len = sub_len - (pos - j) - 1;
                  j = i - sub_len;
              }
          }
          m[s.at(i)] = i;
          sub_len++;
          ans = max(ans, sub_len);
      }
      return ans;
    }
};
