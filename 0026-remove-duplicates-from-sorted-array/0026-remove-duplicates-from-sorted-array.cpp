class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int>mpp;
        vector<int>tar;
        for(int i=0; i<nums.size(); i++) mpp[nums[i]]++;
        for(const auto &pair : mpp){
            tar.emplace_back(pair.first);
        }
        
        nums.assign(tar.begin(), tar.end());

        return nums.size();
    }
};