class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0,r=0,n=nums.size(), k=0;
        int m = INT_MAX;
        while(r<n){
        k+=nums[r];
        while(k>=target){
        m = min(m,r-l+1);
        k-=nums[l];
        l++;
        }
        r++;
        }
        if(m<2147483647)
        return m;
        return 0;
    }
};