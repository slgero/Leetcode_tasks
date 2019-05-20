/*
    Runtime: 16 ms, faster than 98.34% of C++ online submissions for Median of Two Sorted Arrays.
    Memory Usage: 10.7 MB, less than 57.52% of C++ online submissions for Median of Two Sorted Arrays.
*/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
      vector<int> dst;
      merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), back_inserter(dst));
      if(dst.size() % 2 != 0){
          return dst[dst.size()/2];
      } else {
          return (dst[dst.size()/2 - 1] + dst[dst.size()/2]) / 2.0;
      }
    }
};
