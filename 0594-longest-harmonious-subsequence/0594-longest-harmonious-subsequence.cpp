class Solution {
public:
    int findLHS(vector<int>& nums) {
        set<int>s;
        vector<int>v;
        unordered_map<int,int>mp;
        int n = nums.size();
        int m=0;
        for(int i=0; i<n; i++){
            mp[nums[i]]++;
            s.insert(nums[i]);
        }
        for(auto i: s) v.push_back(i);
        int k=v.size();
        for(int i=0; i<k-1; i++){
        if((v[i]+1)==v[i+1]) m=max(m, mp[v[i]]+mp[v[i+1]]);
        }
        return m;
    }
};