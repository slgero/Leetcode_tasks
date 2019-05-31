/*
    Runtime: 4 ms, faster than 98.91% of C++ online submissions for Longest Common Prefix.
    Memory Usage: 9 MB, less than 60.84% of C++ online submissions for Longest Common Prefix.
*/

class Solution {
public:
    string longestCommonPrefix(const vector<string>& v) {
        if (v.size() == 0) return "";
        size_t len_str = v[0].size();
        for(size_t i = 1; i < v.size(); ++i){
        	size_t tmp = 0;
        	for(size_t j = 0; j < min(len_str, v[i].size()); ++j){
        		if(v[0][j] != v[i][j])
        			break;
        		else 
        			++tmp;
        	}
        	len_str = min(len_str, tmp);
        }
        return v[0].substr(0, len_str);
    }
};
