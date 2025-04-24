class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int sum=0;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
        }
        int i=nums.size()-1;
        int sum1=0;
        vector<int>vec;
     while(sum1<=sum){
        vec.emplace_back(nums[i]);
      sum1+=nums[i];
      sum-=nums[i];
      i--;
    }
    return vec;
    }
};