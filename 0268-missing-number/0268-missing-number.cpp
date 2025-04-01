class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
        vector<int> f(n + 1, 0);
        for(int i=0; i<n; i++) f[nums[i]]++;
        for(int i=0; i<n+1; i++){
            cout<<f[i]<<endl;
            if(f[i]==0) return i;
        }
        return 0;
    }
};