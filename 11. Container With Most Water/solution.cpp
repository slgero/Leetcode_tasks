/*
    Runtime: 16 ms, faster than 98.18% of C++ online submissions for Container With Most Water.
    Memory Usage: 9.7 MB, less than 85.32% of C++ online submissions for Container With Most Water.
*/

class Solution {
public:
    int maxArea(const vector<int>& v) {
        int water = 0, lhs = 0, rhs = v.size() - 1;
        while(lhs < rhs){
            water = max(water, min(v[lhs], v[rhs]) * (rhs - lhs));
            if(v[lhs] < v[rhs])
                ++lhs;
            else
                --rhs;
        }
        return water;
    }
};
