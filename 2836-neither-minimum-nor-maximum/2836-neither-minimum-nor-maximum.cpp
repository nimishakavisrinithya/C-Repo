class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i=1; i<nums.size()-1; i++){
            return nums[i];
        }
        return -1;
    }
};