/*
    Это не совсем моё решение. Моё было медленнее и не столь эффективно. Мне понравилось это решение, я его оптимизировал
    и добился отличной скорости.

    Runtime: 72 ms, faster than 100.00% of C++ online submissions for 3Sum.
    Memory Usage: 16.1 MB, less than 61.68% of C++ online submissions for 3Sum.
*/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int> &num) {
    vector<vector<int>> res;
    std::sort(num.begin(), num.end());
    for (int i = 0; i < num.size(); i++) {
        int target = -num[i];
        int front = i + 1;
        int back = num.size() - 1;

        if(target < 0)
            break;

        while (front < back) {
            int sum = num[front] + num[back];
            if (sum < target)
                front++;
            else if (sum > target)
                back--;
            else {
                // конструируем вектор на месте
                res.push_back({num[i], num[front], num[back]});
                
                // убираем дубликаты:
                while (front < back && num[front] == res[res.size()-1][1]) 
                	front++;
                while (front < back && num[back] == res[res.size()-1][2]) 
                	back--;
            }
        }
        // убираем дубликаты:
        while (i + 1 < num.size() && num[i + 1] == num[i])
            i++;
    }
    return res;
}

};
