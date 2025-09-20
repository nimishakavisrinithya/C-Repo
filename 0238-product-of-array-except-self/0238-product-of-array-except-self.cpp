class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
         int n = nums.size();
        vector<int>prefix(n);
        vector<int>sufix(n);
        vector<int>vec(n);
        prefix[0] = nums[0];
        sufix[n-1] = nums[n-1];
        for(int i=1; i<n; i++) prefix[i] = prefix[i-1]*nums[i];
        for(int i=n-2; i>=0; i--) sufix[i] = sufix[i+1]*nums[i];
        for(int i=1; i<n-1; i++) vec[i]= prefix[i-1]*sufix[i+1];
        vec[0]= sufix[1];
        vec[n-1]= prefix[n-2];
        return vec;
    }
};