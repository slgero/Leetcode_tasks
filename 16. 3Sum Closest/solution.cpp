/*
    Runtime: 4 ms, faster than 99.82% of C++ online submissions for 3Sum Closest.
    Memory Usage: 8.8 MB, less than 62.51% of C++ online submissions for 3Sum Closest.
*/

class Solution {
public:
    int threeSumClosest(vector<int> v, int target) {
        int dif = INT_MAX, res = 0;
        sort(v.begin(), v.end());
        for (size_t i = 0; i < v.size(); i++) {
            int begin = i+1;
            int end = v.size() - 1;
            while(begin < end){
                int sum = v[i] + v[begin] + v[end];
                if (abs(sum - target) < dif){
                    dif = abs(sum - target);
                    res = sum;
                }
                if (sum - target > 0)
                    --end;
                else if (sum - target < 0)
                    ++begin;
                else
                    return target;
            }
        }
        return res;
    }
};
