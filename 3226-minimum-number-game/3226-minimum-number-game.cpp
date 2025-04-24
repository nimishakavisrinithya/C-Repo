class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int>vec;
        for(int i=1; i<nums.size(); i+=2){
          vec.push_back(nums[i]);
          vec.push_back(nums[i-1]);
        }
        return vec;
    }
};