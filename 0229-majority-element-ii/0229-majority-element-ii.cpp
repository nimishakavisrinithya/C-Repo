class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int>mpp;
        int n= nums.size();
        int c = n/3;
        vector<int>vec;
        for(int i=0; i<n; i++){
            mpp[nums[i]]++;
        }
        for(auto x : mpp){
            if(x.second>c) vec.push_back(x.first);
        }
        return vec;
    }
};