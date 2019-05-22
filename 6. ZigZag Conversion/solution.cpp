/*
  Runtime: 12 ms, faster than 96.46% of C++ online submissions for ZigZag Conversion.
  Memory Usage: 12.8 MB, less than 65.01% of C++ online submissions for ZigZag 
*/

class Solution {
public:
    string convert(string s, size_t numRows) {
        if(numRows == 1)
        return s;

        vector<string> v(min(s.size(), numRows));
        size_t curRow = 0;
        bool isDown = true;
        for(const auto& c : s){
            v[curRow] += c;
            if(curRow + 1 == numRows){
                isDown = false;
            } else if(curRow == 0){
                isDown = true;
            }
            isDown ? ++curRow : --curRow;
        }

        string res;
        for(const auto& str : v){
            res += str;
        }
        return res;
    }
};
