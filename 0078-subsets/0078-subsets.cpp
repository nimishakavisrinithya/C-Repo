class Solution {
public:
vector<vector<int>>ans;
    void sub(int idx, vector<int>&nums,vector<int>ds, int n){
        if(idx==n){
          ans.push_back(ds);
          return;
        }
        //pick
        ds.push_back(nums[idx]);
        sub(idx+1, nums, ds, n);
        ds.pop_back();
        //non pick
        sub(idx+1, nums, ds, n);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ds;
        sub(0, nums, ds, nums.size());
        return ans;
    }
};