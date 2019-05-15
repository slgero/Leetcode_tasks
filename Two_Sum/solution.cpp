/*
    Runtime: 8 ms, faster than 99.53% of C++ online submissions for Two Sum.
    Memory Usage: 10.6 MB, less than 11.56% of C++ online submissions for Two Sum.
*/

#include <unordered_map>
#include <iostream>
#include <vector>


using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> v;
        for(int i = 0; i < nums.size(); ++i){
            m.insert(make_pair(nums[i], i));  // It's faster than m[nums[i]] = i
        }
        for(int i = 0; i < nums.size(); ++i){
            int dif = target - nums[i];
            if (m.count(dif) == 1){
                if (m[dif] != i)
                    return {i, m[dif]};
            }
        }
        return v;
    }
};

int main(){
    // Tests:
    vector<int> v = {1,8,2,9,4,0,5,2};  // 7 -> [2, 6]
    vector<int> v1 = {-1,-2,-3,-4,-5};  // -8 -> [2,4]
    vector<int> v2 = {0, 4, 3, 0};      //0 -> [0,3]
    Solution sol;

    for (const auto& x : sol.twoSum(v2, 0)){
        cout << x << " ";
    }
    return 0;
}
