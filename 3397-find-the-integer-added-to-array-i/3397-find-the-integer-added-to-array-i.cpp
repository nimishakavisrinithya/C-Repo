class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int m = *max_element(nums1.begin(), nums1.end());
        int k = *max_element(nums2.begin(), nums2.end());
        return k-m;
    }
};