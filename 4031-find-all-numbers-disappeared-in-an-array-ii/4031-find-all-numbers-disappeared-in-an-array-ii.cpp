class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int prev = lower;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<lower) continue;
            if(nums[i]>upper) break;
            if(nums[i]>prev){
                ans.push_back({prev, nums[i]-1});
            }
            prev = nums[i]+1;
        }
        if(prev <= upper){
            ans.push_back({prev, upper});
        }
        return ans;
    }
};