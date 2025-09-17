class Solution {
public:
vector<vector<int>>ans;
    void sub(int idx, vector<int>&nums,vector<int>ds, int n){
        if(idx==n){
            sort(ds.begin(), ds.end());
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
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
         vector<int>ds;
         vector<vector<int>>res;
        sub(0, nums, ds, nums.size());
        map<vector<int>, int> mpp;
        for(auto x : ans){
            mpp[x]++;
        }
        for(auto x : mpp){
        res.push_back(x.first);
        }
        return res;
    }
};