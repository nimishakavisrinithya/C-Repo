class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>vec;
        if(!(binary_search(nums.begin(), nums.end(), target))) return {-1,-1};
        int k = lower_bound(nums.begin(), nums.end(), target)-nums.begin();
        vec.push_back(k);
        int m = upper_bound(nums.begin(), nums.end(), target)-nums.begin()-1;
        vec.push_back(m);
        return vec;

    }
};